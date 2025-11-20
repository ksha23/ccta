// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_bridge_msgs:msg/WarningStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/warning_status.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__BUILDER_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_bridge_msgs/msg/detail/warning_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_WarningStatus_score
{
public:
  explicit Init_WarningStatus_score(::teleop_bridge_msgs::msg::WarningStatus & msg)
  : msg_(msg)
  {}
  ::teleop_bridge_msgs::msg::WarningStatus score(::teleop_bridge_msgs::msg::WarningStatus::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::WarningStatus msg_;
};

class Init_WarningStatus_warning
{
public:
  explicit Init_WarningStatus_warning(::teleop_bridge_msgs::msg::WarningStatus & msg)
  : msg_(msg)
  {}
  Init_WarningStatus_score warning(::teleop_bridge_msgs::msg::WarningStatus::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return Init_WarningStatus_score(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::WarningStatus msg_;
};

class Init_WarningStatus_stamp
{
public:
  Init_WarningStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WarningStatus_warning stamp(::teleop_bridge_msgs::msg::WarningStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_WarningStatus_warning(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::WarningStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_bridge_msgs::msg::WarningStatus>()
{
  return teleop_bridge_msgs::msg::builder::Init_WarningStatus_stamp();
}

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__BUILDER_HPP_
