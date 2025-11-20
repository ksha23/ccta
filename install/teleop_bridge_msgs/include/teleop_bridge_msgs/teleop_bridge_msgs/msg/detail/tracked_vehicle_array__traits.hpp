// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle_array.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__TRAITS_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_bridge_msgs/msg/detail/tracked_vehicle_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'vehicles'
#include "teleop_bridge_msgs/msg/detail/tracked_vehicle__traits.hpp"

namespace teleop_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedVehicleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: vehicles
  {
    if (msg.vehicles.size() == 0) {
      out << "vehicles: []";
    } else {
      out << "vehicles: [";
      size_t pending_items = msg.vehicles.size();
      for (auto item : msg.vehicles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedVehicleArray & msg,
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

  // member: vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicles.size() == 0) {
      out << "vehicles: []\n";
    } else {
      out << "vehicles:\n";
      for (auto item : msg.vehicles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedVehicleArray & msg, bool use_flow_style = false)
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
  const teleop_bridge_msgs::msg::TrackedVehicleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_bridge_msgs::msg::TrackedVehicleArray & msg)
{
  return teleop_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_bridge_msgs::msg::TrackedVehicleArray>()
{
  return "teleop_bridge_msgs::msg::TrackedVehicleArray";
}

template<>
inline const char * name<teleop_bridge_msgs::msg::TrackedVehicleArray>()
{
  return "teleop_bridge_msgs/msg/TrackedVehicleArray";
}

template<>
struct has_fixed_size<teleop_bridge_msgs::msg::TrackedVehicleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_bridge_msgs::msg::TrackedVehicleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_bridge_msgs::msg::TrackedVehicleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__TRAITS_HPP_
