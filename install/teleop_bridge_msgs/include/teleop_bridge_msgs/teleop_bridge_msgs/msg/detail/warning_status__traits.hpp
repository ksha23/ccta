// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_bridge_msgs:msg/WarningStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/warning_status.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__TRAITS_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_bridge_msgs/msg/detail/warning_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace teleop_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WarningStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: warning
  {
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WarningStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WarningStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace teleop_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use teleop_bridge_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const teleop_bridge_msgs::msg::WarningStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_bridge_msgs::msg::WarningStatus & msg)
{
  return teleop_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_bridge_msgs::msg::WarningStatus>()
{
  return "teleop_bridge_msgs::msg::WarningStatus";
}

template<>
inline const char * name<teleop_bridge_msgs::msg::WarningStatus>()
{
  return "teleop_bridge_msgs/msg/WarningStatus";
}

template<>
struct has_fixed_size<teleop_bridge_msgs::msg::WarningStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<teleop_bridge_msgs::msg::WarningStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<teleop_bridge_msgs::msg::WarningStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__TRAITS_HPP_
