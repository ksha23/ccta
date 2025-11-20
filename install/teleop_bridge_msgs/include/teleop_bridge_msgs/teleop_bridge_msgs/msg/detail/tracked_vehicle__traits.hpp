// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__TRAITS_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_bridge_msgs/msg/detail/tracked_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace teleop_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedVehicle & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedVehicle & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedVehicle & msg, bool use_flow_style = false)
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
  const teleop_bridge_msgs::msg::TrackedVehicle & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_bridge_msgs::msg::TrackedVehicle & msg)
{
  return teleop_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_bridge_msgs::msg::TrackedVehicle>()
{
  return "teleop_bridge_msgs::msg::TrackedVehicle";
}

template<>
inline const char * name<teleop_bridge_msgs::msg::TrackedVehicle>()
{
  return "teleop_bridge_msgs/msg/TrackedVehicle";
}

template<>
struct has_fixed_size<teleop_bridge_msgs::msg::TrackedVehicle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_bridge_msgs::msg::TrackedVehicle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_bridge_msgs::msg::TrackedVehicle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__TRAITS_HPP_
