// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from teleop_bridge_msgs:msg/EgoState.idl
// generated code does not contain a copyright notice
#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "teleop_bridge_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "teleop_bridge_msgs/msg/detail/ego_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
bool cdr_serialize_teleop_bridge_msgs__msg__EgoState(
  const teleop_bridge_msgs__msg__EgoState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
bool cdr_deserialize_teleop_bridge_msgs__msg__EgoState(
  eprosima::fastcdr::Cdr &,
  teleop_bridge_msgs__msg__EgoState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t get_serialized_size_teleop_bridge_msgs__msg__EgoState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t max_serialized_size_teleop_bridge_msgs__msg__EgoState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
bool cdr_serialize_key_teleop_bridge_msgs__msg__EgoState(
  const teleop_bridge_msgs__msg__EgoState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t get_serialized_size_key_teleop_bridge_msgs__msg__EgoState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t max_serialized_size_key_teleop_bridge_msgs__msg__EgoState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_bridge_msgs, msg, EgoState)();

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
