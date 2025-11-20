// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_bridge_msgs:msg/EgoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/ego_state.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__BUILDER_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_bridge_msgs/msg/detail/ego_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoState_beta
{
public:
  explicit Init_EgoState_beta(::teleop_bridge_msgs::msg::EgoState & msg)
  : msg_(msg)
  {}
  ::teleop_bridge_msgs::msg::EgoState beta(::teleop_bridge_msgs::msg::EgoState::_beta_type arg)
  {
    msg_.beta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::EgoState msg_;
};

class Init_EgoState_steering
{
public:
  explicit Init_EgoState_steering(::teleop_bridge_msgs::msg::EgoState & msg)
  : msg_(msg)
  {}
  Init_EgoState_beta steering(::teleop_bridge_msgs::msg::EgoState::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_EgoState_beta(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::EgoState msg_;
};

class Init_EgoState_speed
{
public:
  explicit Init_EgoState_speed(::teleop_bridge_msgs::msg::EgoState & msg)
  : msg_(msg)
  {}
  Init_EgoState_steering speed(::teleop_bridge_msgs::msg::EgoState::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_EgoState_steering(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::EgoState msg_;
};

class Init_EgoState_twist
{
public:
  explicit Init_EgoState_twist(::teleop_bridge_msgs::msg::EgoState & msg)
  : msg_(msg)
  {}
  Init_EgoState_speed twist(::teleop_bridge_msgs::msg::EgoState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_EgoState_speed(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::EgoState msg_;
};

class Init_EgoState_pose
{
public:
  explicit Init_EgoState_pose(::teleop_bridge_msgs::msg::EgoState & msg)
  : msg_(msg)
  {}
  Init_EgoState_twist pose(::teleop_bridge_msgs::msg::EgoState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_EgoState_twist(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::EgoState msg_;
};

class Init_EgoState_stamp
{
public:
  Init_EgoState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoState_pose stamp(::teleop_bridge_msgs::msg::EgoState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_EgoState_pose(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::EgoState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_bridge_msgs::msg::EgoState>()
{
  return teleop_bridge_msgs::msg::builder::Init_EgoState_stamp();
}

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__BUILDER_HPP_
