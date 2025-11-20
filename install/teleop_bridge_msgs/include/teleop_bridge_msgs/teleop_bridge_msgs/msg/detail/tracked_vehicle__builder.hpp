// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__BUILDER_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_bridge_msgs/msg/detail/tracked_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedVehicle_twist
{
public:
  explicit Init_TrackedVehicle_twist(::teleop_bridge_msgs::msg::TrackedVehicle & msg)
  : msg_(msg)
  {}
  ::teleop_bridge_msgs::msg::TrackedVehicle twist(::teleop_bridge_msgs::msg::TrackedVehicle::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicle msg_;
};

class Init_TrackedVehicle_pose
{
public:
  explicit Init_TrackedVehicle_pose(::teleop_bridge_msgs::msg::TrackedVehicle & msg)
  : msg_(msg)
  {}
  Init_TrackedVehicle_twist pose(::teleop_bridge_msgs::msg::TrackedVehicle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrackedVehicle_twist(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicle msg_;
};

class Init_TrackedVehicle_active
{
public:
  explicit Init_TrackedVehicle_active(::teleop_bridge_msgs::msg::TrackedVehicle & msg)
  : msg_(msg)
  {}
  Init_TrackedVehicle_pose active(::teleop_bridge_msgs::msg::TrackedVehicle::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_TrackedVehicle_pose(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicle msg_;
};

class Init_TrackedVehicle_label
{
public:
  explicit Init_TrackedVehicle_label(::teleop_bridge_msgs::msg::TrackedVehicle & msg)
  : msg_(msg)
  {}
  Init_TrackedVehicle_active label(::teleop_bridge_msgs::msg::TrackedVehicle::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_TrackedVehicle_active(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicle msg_;
};

class Init_TrackedVehicle_id
{
public:
  explicit Init_TrackedVehicle_id(::teleop_bridge_msgs::msg::TrackedVehicle & msg)
  : msg_(msg)
  {}
  Init_TrackedVehicle_label id(::teleop_bridge_msgs::msg::TrackedVehicle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrackedVehicle_label(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicle msg_;
};

class Init_TrackedVehicle_stamp
{
public:
  Init_TrackedVehicle_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedVehicle_id stamp(::teleop_bridge_msgs::msg::TrackedVehicle::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TrackedVehicle_id(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_bridge_msgs::msg::TrackedVehicle>()
{
  return teleop_bridge_msgs::msg::builder::Init_TrackedVehicle_stamp();
}

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__BUILDER_HPP_
