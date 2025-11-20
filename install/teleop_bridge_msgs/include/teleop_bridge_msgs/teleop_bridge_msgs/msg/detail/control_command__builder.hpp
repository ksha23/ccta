// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_bridge_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/control_command.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_bridge_msgs/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_valid
{
public:
  explicit Init_ControlCommand_valid(::teleop_bridge_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::teleop_bridge_msgs::msg::ControlCommand valid(::teleop_bridge_msgs::msg::ControlCommand::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_steering
{
public:
  explicit Init_ControlCommand_steering(::teleop_bridge_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_valid steering(::teleop_bridge_msgs::msg::ControlCommand::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_ControlCommand_valid(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_throttle
{
public:
  explicit Init_ControlCommand_throttle(::teleop_bridge_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_steering throttle(::teleop_bridge_msgs::msg::ControlCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_ControlCommand_steering(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_stamp
{
public:
  Init_ControlCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_throttle stamp(::teleop_bridge_msgs::msg::ControlCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlCommand_throttle(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_bridge_msgs::msg::ControlCommand>()
{
  return teleop_bridge_msgs::msg::builder::Init_ControlCommand_stamp();
}

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
