from __future__ import annotations

import math
import os
import sys
from collections import deque
from dataclasses import dataclass
from importlib import resources
from pathlib import Path
from typing import Deque, List, Optional, Tuple

import numpy as np
import rclpy
import torch
from geometry_msgs.msg import Quaternion
from std_msgs.msg import ColorRGBA
from visualization_msgs.msg import Marker, MarkerArray
from rclpy.node import Node

from teleop_bridge_msgs.msg import (
    ControlCommand,
    DriverInput,
    EgoState,
    TrackedVehicle,
    TrackedVehicleArray,
    WarningStatus,
)

enable_intervention = True


def _resolve_repo_path(param_path: Optional[str]) -> Path:
    """Return the path to the CCTA repository."""
    if param_path:
        candidate = Path(param_path).expanduser().resolve()
        if candidate.exists():
            return candidate
    try:
        package_assets = resources.files("teleop_controller_bridge")
        with resources.as_file(package_assets / "ccta_assets") as asset_path:
            if asset_path.exists():
                return asset_path.resolve()
    except Exception:
        pass
    raise RuntimeError(
        "CCTA assets not found. Pass --ros-args -p ccta_repo_path:=... or reinstall package."
    )


def _angle_from_quaternion(q: Quaternion) -> float:
    """Return the yaw angle from a ROS quaternion (assumes ENU)."""
    # Chrono uses Z-up, ROS uses ENU. We only need yaw.
    siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
    return math.atan2(siny_cosp, cosy_cosp)


class DelayCompensator:
    """Implements the discrete predictor used in Eq. (2) of the paper."""

    def __init__(self, td: int, control_dt: float, k1: float, k2: float):
        self._td = int(max(td, 0))
        self._dt = control_dt
        self._k1 = k1
        self._k2 = k2
        self._v_seq: Deque[float] = deque([0.0] * (self._td + 1), maxlen=self._td + 1)
        self._t_seq: Deque[float] = deque([0.0] * (self._td + 1), maxlen=self._td + 1)
        self._vp_seq: Deque[float] = deque([0.0] * (self._td + 1), maxlen=self._td + 1)
        self._tp_seq: Deque[float] = deque([0.0] * (self._td + 1), maxlen=self._td + 1)

    def update(self, throttle_cmd: float, steering_cmd: float) -> Tuple[float, float]:
        """Push new joystick samples and return delay-compensated commands."""
        self._v_seq.append(throttle_cmd)
        self._t_seq.append(steering_cmd)
        if len(self._vp_seq) < self._vp_seq.maxlen:
            self._vp_seq.append(throttle_cmd)
        if len(self._tp_seq) < self._tp_seq.maxlen:
            self._tp_seq.append(steering_cmd)

        if self._td == 0 or len(self._v_seq) <= self._td:
            return throttle_cmd, steering_cmd

        v_seq = list(self._v_seq)
        t_seq = list(self._t_seq)
        vp_seq = list(self._vp_seq)
        tp_seq = list(self._tp_seq)

        vtd = v_seq[-self._td - 1]
        dvtd = (v_seq[-self._td] - vtd) / self._dt
        vptd = vp_seq[-self._td - 1]
        dvptd = (vp_seq[-self._td] - vptd) / self._dt

        vp_current = vp_seq[-1] + self._dt * (
            dvtd + self._k1 * (dvtd - dvptd) + self._k2 * (vtd - vptd)
        )
        self._vp_seq.append(vp_current)

        ttd = t_seq[-self._td - 1]
        dttd = (t_seq[-self._td] - ttd) / self._dt
        tptd = tp_seq[-self._td - 1]
        dtptd = (tp_seq[-self._td] - tptd) / self._dt
        tp_current = tp_seq[-1] + self._dt * (
            dttd + self._k1 * (dttd - dtptd) + self._k2 * (ttd - tptd)
        )
        self._tp_seq.append(tp_current)

        return float(vp_current), float(tp_current)


@dataclass
class SurroundingVehicles:
    positions: np.ndarray  # shape (2, N)
    velocities: np.ndarray  # shape (2, N)


class CctaController:
    """Wraps the existing Python safety controller and warning logic."""

    def __init__(
        self,
        repo_path: Path,
        control_dt: float = 0.02,
        low_level_dt: float = 0.02,
        td: int = 10,
        k1: float = 0.6,
        k2: float = 2.0,
        use_cuda: bool = False,
        enable_warning: bool = True,
        l1cbf: float = 3.0,
        l2cbf: float = 5.0,
        dob_l0x: float = 20.0,
        dob_l1x: float = 100.0,
    ):
        self.repo_path = repo_path
        if str(repo_path) not in sys.path:
            sys.path.append(str(repo_path))

        try:
            from controller import CPWarningSystem
            from LSTMHelper import FindNbrs
            from model import highwayNet
            from DobCBFHelper import DOBCBF_dbeta, xdot_dob_dbeta
        except ImportError as exc:  # pragma: no cover - handled at runtime
            raise RuntimeError(
                f"Unable to import CCTA modules from {repo_path}: {exc}"
            ) from exc

        self._CPWarningSystem = CPWarningSystem
        self._FindNbrs = FindNbrs
        self._highwayNet = highwayNet
        self._DOBCBF_dbeta = DOBCBF_dbeta
        self._xdot_dob_dbeta = xdot_dob_dbeta

        self.control_dt = control_dt
        self.low_level_dt = low_level_dt
        self.enable_warning = enable_warning

        self.delay_comp = DelayCompensator(td=td, control_dt=control_dt, k1=k1, k2=k2)

        self.device = torch.device("cuda" if use_cuda and torch.cuda.is_available() else "cpu")
        self.args = {
            "use_cuda": use_cuda and torch.cuda.is_available(),
            "encoder_size": 64,
            "decoder_size": 128,
            "in_length": 16,
            "out_length": 5,
            "grid_size": (13, 3),
            "input_embedding_size": 32,
            "train_flag": False,
        }

        self.net = self._highwayNet(self.args)
        weight_path = repo_path / "data" / "sta_lstm_10272020.tar"
        self.net.load_state_dict(torch.load(weight_path, map_location=self.device))
        self.net.to(self.device)
        self.net.eval()

        cp_data_path = repo_path / "data" / "training_data" / "CP_data.csv"
        if not cp_data_path.exists():
            raise FileNotFoundError(f"Calibration data not found: {cp_data_path}")
        self.cp_data = np.loadtxt(cp_data_path, delimiter=",")

        self.f0warning = 2.0
        self.ro = 1.0
        self.r_precpt = 20.0
        self.bias = 5.0
        self.weight1 = 1.0 / 100.0
        self.weight2 = 1.0 / 9.0
        self.Qwarning = np.array([[1.0 / 400.0, 0.0], [0.0, 1.0]])
        self.cp_data_f0 = np.array([row for row in self.cp_data if row[0] < self.f0warning])

        self.ctrlpara = {"l1cbf": l1cbf, "l2cbf": l2cbf, "kblf": 1.0 / control_dt}
        self.dobpara = {
            "l0x": dob_l0x,
            "l1x": dob_l1x,
            "l0y": 10.0,
            "l1y": 100.0,
            "av": 10.0,
            "ata": 100.0,
        }

        self.delta = 0.626671
        self.max_neighbors = 5

        self.driver_msg: Optional[DriverInput] = None
        self.ego_msg: Optional[EgoState] = None
        self.sv_msg: Optional[TrackedVehicleArray] = None

        self.beta = 0.0
        self.alpha = 0.0
        self.dbeta = 0.0
        self.p_dob = 0.0

        self.last_cmd_time: Optional[float] = None
        self.history: Deque[List[float]] = deque(maxlen=self.args["in_length"])
        self.sample_timer = 0.0
        self.sample_period = control_dt * 3.0

    def update_driver_input(self, msg: DriverInput) -> None:
        self.driver_msg = msg

    def update_ego(self, msg: EgoState) -> None:
        self.ego_msg = msg

    def update_surroundings(self, msg: TrackedVehicleArray) -> None:
        self.sv_msg = msg

    def _build_sv_arrays(self, ego_pos: np.ndarray) -> SurroundingVehicles:
        max_count = self.max_neighbors
        pos = np.zeros((2, max_count))
        vel = np.zeros((2, max_count))
        if not self.sv_msg or not self.sv_msg.vehicles:
            return SurroundingVehicles(pos, vel)

        # Sort by ID to ensure consistent history slots for LSTM
        # This matches the behavior of exp1/exp2 where vehicles are fixed agents.
        # Sorting by distance would cause slot-switching, corrupting the trajectory history.
        vehicles = sorted(self.sv_msg.vehicles, key=lambda v: v.id)
        
        for idx in range(min(max_count, len(vehicles))):
            veh = vehicles[idx]
            pos[0, idx] = veh.pose.position.x
            pos[1, idx] = veh.pose.position.y
            vel[0, idx] = veh.twist.linear.x
            vel[1, idx] = veh.twist.linear.y
        return SurroundingVehicles(pos, vel)

    def _append_history(self, ego_x: float, ego_y: float, yaw: float, pos: np.ndarray) -> None:
        entry = [ego_x, ego_y, yaw]
        for i in range(self.max_neighbors):
            entry.extend([pos[0, i], pos[1, i]])
        self.history.append(entry)

    def _run_warning(self, pose: EgoState, sv: SurroundingVehicles) -> Optional[WarningStatus]:
        if not self.enable_warning:
            return None
        if len(self.history) < self.history.maxlen:
            return None

        all_traj = np.array(self.history)
        hist, nbrs, mask = self._FindNbrs(all_traj, self.args)
        hist = hist[:, :, ::-1]
        nbrs = nbrs[:, :, ::-1]

        hist_tensor = torch.tensor(hist.copy(), dtype=torch.float32).to(self.device)
        nbrs_tensor = torch.tensor(nbrs.copy(), dtype=torch.float32).to(self.device)
        mask_tensor = torch.tensor(mask.copy()).to(self.device)

        with torch.no_grad():
            fut_pred, _, _, _ = self.net(hist_tensor, nbrs_tensor, mask_tensor, 0, 0)
        fut_pred = fut_pred[:, 0, :].cpu().numpy()

        ego_heading = _angle_from_quaternion(pose.pose.orientation)
        ref_pos = np.array([pose.pose.position.x, pose.pose.position.y])
        Rmat = np.array(
            [[math.cos(ego_heading), math.sin(ego_heading)], [-math.sin(ego_heading), math.cos(ego_heading)]]
        )

        pred_global = fut_pred[:, ::-1] @ Rmat + ref_pos
        warningsignal, sc_pred = self._CPWarningSystem(
            sc=self._sc_warning,
            Q=self.Qwarning,
            Rmat=Rmat,
            CP_data_f0=self.cp_data_f0,
            pred=pred_global,
            SV_pos=sv.positions,
            eps=0.09,
        )
        
        # Debug logging
        # if sc_pred < 2.0: # Only log if score is somewhat low
            #  print(f"Score: {sc_pred:.4f}, Warning: {warningsignal}")

        msg = WarningStatus()
        msg.stamp = pose.stamp
        msg.warning = bool(warningsignal)
        msg.score = float(sc_pred)
        return msg

    def _sc_warning(self, x: np.ndarray, y: np.ndarray, Q: np.ndarray, Rmat: np.ndarray) -> float:
        diff = (x - y) @ Rmat.T
        return float(diff @ Q @ diff)

    def _sc_distance(self, x: np.ndarray, y: np.ndarray, Q: np.ndarray, Rmat: np.ndarray) -> float:
        diff = (x - y) @ Rmat.T - np.array([self.bias, 0.0])
        return float(diff @ Q @ diff)

    def _generate_markers(self, ego: EgoState, sv: SurroundingVehicles, cmd: ControlCommand, warning: Optional[WarningStatus]) -> MarkerArray:
        markers = MarkerArray()
        
        # Ego Marker
        m = Marker()
        m.header.frame_id = "map" # Assuming map frame
        m.header.stamp = ego.stamp
        m.ns = "ego"
        m.id = 0
        m.type = Marker.CUBE
        m.action = Marker.ADD
        m.pose = ego.pose
        m.scale.x = 4.5
        m.scale.y = 1.8
        m.scale.z = 1.5
        m.color = ColorRGBA(r=0.0, g=1.0, b=0.0, a=0.8)
        markers.markers.append(m)

        # SV Markers
        for i in range(sv.positions.shape[1]):
            if sv.positions[0, i] == 0 and sv.positions[1, i] == 0:
                continue
            m = Marker()
            m.header.frame_id = "map"
            m.header.stamp = ego.stamp
            m.ns = "sv"
            m.id = i + 1
            m.type = Marker.CUBE
            m.action = Marker.ADD
            m.pose.position.x = sv.positions[0, i]
            m.pose.position.y = sv.positions[1, i]
            m.pose.position.z = 0.5
            m.pose.orientation.w = 1.0 
            m.scale.x = 4.5
            m.scale.y = 1.8
            m.scale.z = 1.5
            m.color = ColorRGBA(r=1.0, g=0.0, b=0.0, a=0.8)
            markers.markers.append(m)

        # Warning Text
        m = Marker()
        m.header.frame_id = "map"
        m.header.stamp = ego.stamp
        m.ns = "text"
        m.id = 100
        m.type = Marker.TEXT_VIEW_FACING
        m.action = Marker.ADD
        m.pose.position.x = ego.pose.position.x
        m.pose.position.y = ego.pose.position.y
        m.pose.position.z = 3.0
        m.scale.z = 1.0
        score = warning.score if warning else 0.0
        is_warn = warning.warning if warning else False
        m.text = f"Warn: {is_warn}\nScore: {score:.2f}\nAlpha: {self.alpha:.2f}"
        m.color = ColorRGBA(r=1.0, g=1.0, b=0.0, a=1.0) if is_warn else ColorRGBA(r=1.0, g=1.0, b=1.0, a=1.0)
        markers.markers.append(m)

        return markers

    def step(self) -> Tuple[Optional[ControlCommand], Optional[WarningStatus], Optional[MarkerArray]]:
        if not self.driver_msg or not self.ego_msg:
            return None, None, None

        ego = self.ego_msg
        ego_pos = np.array([ego.pose.position.x, ego.pose.position.y])
        sv = self._build_sv_arrays(ego_pos)
        driver = self.driver_msg

        throttle_cmd = float(driver.throttle - driver.braking)
        steering_cmd = float(driver.steering)
        ref_throttle, ref_steering = self.delay_comp.update(throttle_cmd, steering_cmd)
        ref_throttle = float(np.clip(ref_throttle, -1.0, 1.0))
        ref_steering = float(np.clip(ref_steering, -1.0, 1.0))

        ref_beta = ref_steering * self.delta
        ref_dbeta = -self.ctrlpara["kblf"] * (self.beta - ref_beta)
        veh_state = np.array(
            [
                ego.pose.position.x,
                ego.pose.position.y,
                _angle_from_quaternion(ego.pose.orientation),
                ego.speed,
                self.beta,
            ]
        )
        ud = (ref_throttle, ref_dbeta)
        upre = (self.alpha, self.dbeta)

        if enable_intervention:
            (alpha, dbeta), _ = self._DOBCBF_dbeta(
                veh_state,
                ud,
                upre,
                self.p_dob,
                self.ctrlpara,
                self.dobpara,
                self.weight1,
                self.weight2,
                sv.positions,
                sv.velocities,
                self.ro,
                self.r_precpt,
                self.bias,
                True,
                "balance",
            )
        else:
            alpha, dbeta = ref_throttle, ref_steering

        alpha = float(np.clip(alpha, -1.0, 1.0))
        self.beta += dbeta * self.low_level_dt
        self.alpha = alpha
        self.dbeta = dbeta

        dp0v, _ = self._xdot_dob_dbeta(veh_state, self.p_dob, (alpha, dbeta), self.dobpara)
        self.p_dob += dp0v * self.low_level_dt

        cmd = ControlCommand()
        cmd.stamp = ego.stamp
        cmd.steering = float(np.clip(self.beta / self.delta, -1.0, 1.0))
        cmd.throttle = alpha
        cmd.valid = True

        # Log throttle interventions
        if alpha < ref_throttle - 0.05:
             print(f"[Safety Intervention] User Input: {ref_throttle:.2f} -> Safety Output: {alpha:.2f} (Reduction: {ref_throttle - alpha:.2f})")
        elif alpha < -0.1:
             print(f"[Controller] Braking: {alpha:.4f}")

        # Log steering interventions
        if abs(self.beta - ref_beta) > 0.1:
                print(f"[Steering Intervention] User Input: {ref_beta:.2f} -> Safety Output: {self.beta:.2f} (Delta: {self.beta - ref_beta:.2f})")

        warning_msg = None
        if self.enable_warning:
            self.sample_timer += self.control_dt
            self._append_history(veh_state[0], veh_state[1], veh_state[2], sv.positions)
            if self.sample_timer >= self.sample_period:
                warning_msg = self._run_warning(ego, sv)
                self.sample_timer = 0.0
        
        markers = self._generate_markers(ego, sv, cmd, warning_msg)

        return cmd, warning_msg, markers


class CctaBridgeNode(Node):
    """ROS2 node that bridges Chrono topics with the Python controller."""

    def __init__(self) -> None:
        super().__init__("ccta_teleop_controller")
        self.declare_parameter("ccta_repo_path", "")
        self.declare_parameter("control_dt", 0.02)
        self.declare_parameter("low_level_dt", 0.02)
        self.declare_parameter("td", 1)
        self.declare_parameter("k1", 0.6)
        self.declare_parameter("k2", 2.0)
        self.declare_parameter("use_cuda", False)
        self.declare_parameter("enable_warning", True)
        
        # Tuning parameters
        self.declare_parameter("l1cbf", 3.0)
        self.declare_parameter("l2cbf", 5.0)
        self.declare_parameter("dob_l0x", 20.0)
        self.declare_parameter("dob_l1x", 100.0)

        repo_path = _resolve_repo_path(self.get_parameter("ccta_repo_path").get_parameter_value().string_value)
        control_dt = self.get_parameter("control_dt").get_parameter_value().double_value
        low_dt = self.get_parameter("low_level_dt").get_parameter_value().double_value
        td = self.get_parameter("td").get_parameter_value().integer_value
        k1 = self.get_parameter("k1").get_parameter_value().double_value
        k2 = self.get_parameter("k2").get_parameter_value().double_value
        use_cuda = self.get_parameter("use_cuda").get_parameter_value().bool_value
        enable_warning = self.get_parameter("enable_warning").get_parameter_value().bool_value
        
        l1cbf = self.get_parameter("l1cbf").get_parameter_value().double_value
        l2cbf = self.get_parameter("l2cbf").get_parameter_value().double_value
        dob_l0x = self.get_parameter("dob_l0x").get_parameter_value().double_value
        dob_l1x = self.get_parameter("dob_l1x").get_parameter_value().double_value

        if not repo_path.exists():
            raise RuntimeError(f"CCTA repository not found at {repo_path}")

        self.get_logger().info(f"Loading CCTA controller assets from {repo_path}")
        self.controller = CctaController(
            repo_path=repo_path,
            control_dt=control_dt,
            low_level_dt=low_dt,
            td=td,
            k1=k1,
            k2=k2,
            use_cuda=use_cuda,
            enable_warning=enable_warning,
            l1cbf=l1cbf,
            l2cbf=l2cbf,
            dob_l0x=dob_l0x,
            dob_l1x=dob_l1x,
        )

        self.create_subscription(DriverInput, "teleop/raw_input", self._driver_callback, 10)
        self.create_subscription(EgoState, "teleop/ego_state", self._ego_callback, 10)
        self.create_subscription(TrackedVehicleArray, "teleop/actors", self._actors_callback, 10)

        self.cmd_pub = self.create_publisher(ControlCommand, "teleop/safety_cmd", 10)
        self.warning_pub = self.create_publisher(WarningStatus, "teleop/warning", 10)
        self.viz_pub = self.create_publisher(MarkerArray, "teleop/viz", 10)

        self.create_timer(control_dt, self._timer_callback)

    def _driver_callback(self, msg: DriverInput) -> None:
        self.controller.update_driver_input(msg)

    def _ego_callback(self, msg: EgoState) -> None:
        self.controller.update_ego(msg)

    def _actors_callback(self, msg: TrackedVehicleArray) -> None:
        self.controller.update_surroundings(msg)

    def _timer_callback(self) -> None:
        cmd, warning, markers = self.controller.step()
        if cmd:
            self.cmd_pub.publish(cmd)
            # Calculate latency
            now = self.get_clock().now()
            latency = (now.nanoseconds - rclpy.time.Time.from_msg(cmd.stamp).nanoseconds) / 1e9
            # Log alpha and latency
            self.get_logger().info(f"Alpha: {cmd.throttle:.4f} | Latency: {latency:.4f}s", throttle_duration_sec=0.5)
            
        if warning:
            self.warning_pub.publish(warning)
        if markers:
            self.viz_pub.publish(markers)


def main(args: Optional[List[str]] = None) -> None:
    rclpy.init(args=args)
    node = CctaBridgeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
