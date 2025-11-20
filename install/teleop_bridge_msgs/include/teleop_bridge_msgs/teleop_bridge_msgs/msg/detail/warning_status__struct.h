// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_bridge_msgs:msg/WarningStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/warning_status.h"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__STRUCT_H_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/WarningStatus in the package teleop_bridge_msgs.
typedef struct teleop_bridge_msgs__msg__WarningStatus
{
  builtin_interfaces__msg__Time stamp;
  bool warning;
  float score;
} teleop_bridge_msgs__msg__WarningStatus;

// Struct for a sequence of teleop_bridge_msgs__msg__WarningStatus.
typedef struct teleop_bridge_msgs__msg__WarningStatus__Sequence
{
  teleop_bridge_msgs__msg__WarningStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_bridge_msgs__msg__WarningStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__STRUCT_H_
