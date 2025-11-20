// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_bridge_msgs:msg/DriverInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/driver_input.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__BUILDER_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_bridge_msgs/msg/detail/driver_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_DriverInput_raw_braking
{
public:
  explicit Init_DriverInput_raw_braking(::teleop_bridge_msgs::msg::DriverInput & msg)
  : msg_(msg)
  {}
  ::teleop_bridge_msgs::msg::DriverInput raw_braking(::teleop_bridge_msgs::msg::DriverInput::_raw_braking_type arg)
  {
    msg_.raw_braking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

class Init_DriverInput_raw_throttle
{
public:
  explicit Init_DriverInput_raw_throttle(::teleop_bridge_msgs::msg::DriverInput & msg)
  : msg_(msg)
  {}
  Init_DriverInput_raw_braking raw_throttle(::teleop_bridge_msgs::msg::DriverInput::_raw_throttle_type arg)
  {
    msg_.raw_throttle = std::move(arg);
    return Init_DriverInput_raw_braking(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

class Init_DriverInput_raw_steering
{
public:
  explicit Init_DriverInput_raw_steering(::teleop_bridge_msgs::msg::DriverInput & msg)
  : msg_(msg)
  {}
  Init_DriverInput_raw_throttle raw_steering(::teleop_bridge_msgs::msg::DriverInput::_raw_steering_type arg)
  {
    msg_.raw_steering = std::move(arg);
    return Init_DriverInput_raw_throttle(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

class Init_DriverInput_braking
{
public:
  explicit Init_DriverInput_braking(::teleop_bridge_msgs::msg::DriverInput & msg)
  : msg_(msg)
  {}
  Init_DriverInput_raw_steering braking(::teleop_bridge_msgs::msg::DriverInput::_braking_type arg)
  {
    msg_.braking = std::move(arg);
    return Init_DriverInput_raw_steering(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

class Init_DriverInput_throttle
{
public:
  explicit Init_DriverInput_throttle(::teleop_bridge_msgs::msg::DriverInput & msg)
  : msg_(msg)
  {}
  Init_DriverInput_braking throttle(::teleop_bridge_msgs::msg::DriverInput::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_DriverInput_braking(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

class Init_DriverInput_steering
{
public:
  explicit Init_DriverInput_steering(::teleop_bridge_msgs::msg::DriverInput & msg)
  : msg_(msg)
  {}
  Init_DriverInput_throttle steering(::teleop_bridge_msgs::msg::DriverInput::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_DriverInput_throttle(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

class Init_DriverInput_auto_mode
{
public:
  explicit Init_DriverInput_auto_mode(::teleop_bridge_msgs::msg::DriverInput & msg)
  : msg_(msg)
  {}
  Init_DriverInput_steering auto_mode(::teleop_bridge_msgs::msg::DriverInput::_auto_mode_type arg)
  {
    msg_.auto_mode = std::move(arg);
    return Init_DriverInput_steering(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

class Init_DriverInput_stamp
{
public:
  Init_DriverInput_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriverInput_auto_mode stamp(::teleop_bridge_msgs::msg::DriverInput::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DriverInput_auto_mode(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::DriverInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_bridge_msgs::msg::DriverInput>()
{
  return teleop_bridge_msgs::msg::builder::Init_DriverInput_stamp();
}

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__BUILDER_HPP_
