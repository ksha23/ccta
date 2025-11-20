// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_bridge_msgs:msg/TrackedVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle.h"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__STRUCT_H_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__STRUCT_H_

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
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TrackedVehicle in the package teleop_bridge_msgs.
typedef struct teleop_bridge_msgs__msg__TrackedVehicle
{
  builtin_interfaces__msg__Time stamp;
  uint32_t id;
  rosidl_runtime_c__String label;
  bool active;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
} teleop_bridge_msgs__msg__TrackedVehicle;

// Struct for a sequence of teleop_bridge_msgs__msg__TrackedVehicle.
typedef struct teleop_bridge_msgs__msg__TrackedVehicle__Sequence
{
  teleop_bridge_msgs__msg__TrackedVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_bridge_msgs__msg__TrackedVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__STRUCT_H_
