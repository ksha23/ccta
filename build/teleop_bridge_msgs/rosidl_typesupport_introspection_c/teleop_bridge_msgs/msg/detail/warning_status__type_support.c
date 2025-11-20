// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_bridge_msgs:msg/WarningStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_bridge_msgs/msg/detail/warning_status__rosidl_typesupport_introspection_c.h"
#include "teleop_bridge_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_bridge_msgs/msg/detail/warning_status__functions.h"
#include "teleop_bridge_msgs/msg/detail/warning_status__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_bridge_msgs__msg__WarningStatus__init(message_memory);
}

void teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_fini_function(void * message_memory)
{
  teleop_bridge_msgs__msg__WarningStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_bridge_msgs__msg__WarningStatus, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_bridge_msgs__msg__WarningStatus, warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_bridge_msgs__msg__WarningStatus, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_members = {
  "teleop_bridge_msgs__msg",  // message namespace
  "WarningStatus",  // message name
  3,  // number of fields
  sizeof(teleop_bridge_msgs__msg__WarningStatus),
  false,  // has_any_key_member_
  teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_member_array,  // message members
  teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_type_support_handle = {
  0,
  &teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_members,
  get_message_typesupport_handle_function,
  &teleop_bridge_msgs__msg__WarningStatus__get_type_hash,
  &teleop_bridge_msgs__msg__WarningStatus__get_type_description,
  &teleop_bridge_msgs__msg__WarningStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_bridge_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_bridge_msgs, msg, WarningStatus)() {
  teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_type_support_handle.typesupport_identifier) {
    teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &teleop_bridge_msgs__msg__WarningStatus__rosidl_typesupport_introspection_c__WarningStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
