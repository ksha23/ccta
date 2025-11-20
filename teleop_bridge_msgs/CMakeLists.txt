cmake_minimum_required(VERSION 3.8)
project(teleop_bridge_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

set(MSG_FILES
  "msg/DriverInput.msg"
  "msg/EgoState.msg"
  "msg/TrackedVehicle.msg"
  "msg/TrackedVehicleArray.msg"
  "msg/ControlCommand.msg"
  "msg/WarningStatus.msg"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${MSG_FILES}
  DEPENDENCIES builtin_interfaces geometry_msgs std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
