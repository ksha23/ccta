// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_bridge_msgs:msg/DriverInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/driver_input.h"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__STRUCT_H_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__STRUCT_H_

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

/// Struct defined in msg/DriverInput in the package teleop_bridge_msgs.
typedef struct teleop_bridge_msgs__msg__DriverInput
{
  builtin_interfaces__msg__Time stamp;
  bool auto_mode;
  float steering;
  float throttle;
  float braking;
  float raw_steering;
  float raw_throttle;
  float raw_braking;
} teleop_bridge_msgs__msg__DriverInput;

// Struct for a sequence of teleop_bridge_msgs__msg__DriverInput.
typedef struct teleop_bridge_msgs__msg__DriverInput__Sequence
{
  teleop_bridge_msgs__msg__DriverInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_bridge_msgs__msg__DriverInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__STRUCT_H_
