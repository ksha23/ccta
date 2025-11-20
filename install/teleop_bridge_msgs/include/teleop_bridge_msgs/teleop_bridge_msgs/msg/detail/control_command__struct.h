// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_bridge_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/control_command.h"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

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

/// Struct defined in msg/ControlCommand in the package teleop_bridge_msgs.
typedef struct teleop_bridge_msgs__msg__ControlCommand
{
  builtin_interfaces__msg__Time stamp;
  float throttle;
  float steering;
  bool valid;
} teleop_bridge_msgs__msg__ControlCommand;

// Struct for a sequence of teleop_bridge_msgs__msg__ControlCommand.
typedef struct teleop_bridge_msgs__msg__ControlCommand__Sequence
{
  teleop_bridge_msgs__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_bridge_msgs__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
