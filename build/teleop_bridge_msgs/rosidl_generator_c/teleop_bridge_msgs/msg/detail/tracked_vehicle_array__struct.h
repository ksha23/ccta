// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_bridge_msgs:msg/TrackedVehicleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle_array.h"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__STRUCT_H_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__STRUCT_H_

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
// Member 'vehicles'
#include "teleop_bridge_msgs/msg/detail/tracked_vehicle__struct.h"

/// Struct defined in msg/TrackedVehicleArray in the package teleop_bridge_msgs.
typedef struct teleop_bridge_msgs__msg__TrackedVehicleArray
{
  builtin_interfaces__msg__Time stamp;
  teleop_bridge_msgs__msg__TrackedVehicle__Sequence vehicles;
} teleop_bridge_msgs__msg__TrackedVehicleArray;

// Struct for a sequence of teleop_bridge_msgs__msg__TrackedVehicleArray.
typedef struct teleop_bridge_msgs__msg__TrackedVehicleArray__Sequence
{
  teleop_bridge_msgs__msg__TrackedVehicleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_bridge_msgs__msg__TrackedVehicleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__STRUCT_H_
