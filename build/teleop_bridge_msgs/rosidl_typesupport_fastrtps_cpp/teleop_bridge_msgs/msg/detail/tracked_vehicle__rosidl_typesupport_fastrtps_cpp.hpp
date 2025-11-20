// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicle.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "teleop_bridge_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "teleop_bridge_msgs/msg/detail/tracked_vehicle__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace teleop_bridge_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
cdr_serialize(
  const teleop_bridge_msgs::msg::TrackedVehicle & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  teleop_bridge_msgs::msg::TrackedVehicle & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
get_serialized_size(
  const teleop_bridge_msgs::msg::TrackedVehicle & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
max_serialized_size_TrackedVehicle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
cdr_serialize_key(
  const teleop_bridge_msgs::msg::TrackedVehicle & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
get_serialized_size_key(
  const teleop_bridge_msgs::msg::TrackedVehicle & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
max_serialized_size_key_TrackedVehicle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace teleop_bridge_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_bridge_msgs, msg, TrackedVehicle)();

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
