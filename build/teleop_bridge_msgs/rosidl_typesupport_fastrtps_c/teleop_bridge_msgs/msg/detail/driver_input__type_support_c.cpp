// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from teleop_bridge_msgs:msg/DriverInput.idl
// generated code does not contain a copyright notice
#include "teleop_bridge_msgs/msg/detail/driver_input__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "teleop_bridge_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "teleop_bridge_msgs/msg/detail/driver_input__struct.h"
#include "teleop_bridge_msgs/msg/detail/driver_input__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_teleop_bridge_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _DriverInput__ros_msg_type = teleop_bridge_msgs__msg__DriverInput;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
bool cdr_serialize_teleop_bridge_msgs__msg__DriverInput(
  const teleop_bridge_msgs__msg__DriverInput * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: auto_mode
  {
    cdr << (ros_message->auto_mode ? true : false);
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: braking
  {
    cdr << ros_message->braking;
  }

  // Field name: raw_steering
  {
    cdr << ros_message->raw_steering;
  }

  // Field name: raw_throttle
  {
    cdr << ros_message->raw_throttle;
  }

  // Field name: raw_braking
  {
    cdr << ros_message->raw_braking;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
bool cdr_deserialize_teleop_bridge_msgs__msg__DriverInput(
  eprosima::fastcdr::Cdr & cdr,
  teleop_bridge_msgs__msg__DriverInput * ros_message)
{
  // Field name: stamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->stamp);
  }

  // Field name: auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mode = tmp ? true : false;
  }

  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  // Field name: braking
  {
    cdr >> ros_message->braking;
  }

  // Field name: raw_steering
  {
    cdr >> ros_message->raw_steering;
  }

  // Field name: raw_throttle
  {
    cdr >> ros_message->raw_throttle;
  }

  // Field name: raw_braking
  {
    cdr >> ros_message->raw_braking;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t get_serialized_size_teleop_bridge_msgs__msg__DriverInput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriverInput__ros_msg_type * ros_message = static_cast<const _DriverInput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: auto_mode
  {
    size_t item_size = sizeof(ros_message->auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: braking
  {
    size_t item_size = sizeof(ros_message->braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_steering
  {
    size_t item_size = sizeof(ros_message->raw_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_throttle
  {
    size_t item_size = sizeof(ros_message->raw_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_braking
  {
    size_t item_size = sizeof(ros_message->raw_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t max_serialized_size_teleop_bridge_msgs__msg__DriverInput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: auto_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: steering
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: raw_steering
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: raw_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: raw_braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = teleop_bridge_msgs__msg__DriverInput;
    is_plain =
      (
      offsetof(DataType, raw_braking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
bool cdr_serialize_key_teleop_bridge_msgs__msg__DriverInput(
  const teleop_bridge_msgs__msg__DriverInput * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: auto_mode
  {
    cdr << (ros_message->auto_mode ? true : false);
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: braking
  {
    cdr << ros_message->braking;
  }

  // Field name: raw_steering
  {
    cdr << ros_message->raw_steering;
  }

  // Field name: raw_throttle
  {
    cdr << ros_message->raw_throttle;
  }

  // Field name: raw_braking
  {
    cdr << ros_message->raw_braking;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t get_serialized_size_key_teleop_bridge_msgs__msg__DriverInput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriverInput__ros_msg_type * ros_message = static_cast<const _DriverInput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: auto_mode
  {
    size_t item_size = sizeof(ros_message->auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: braking
  {
    size_t item_size = sizeof(ros_message->braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_steering
  {
    size_t item_size = sizeof(ros_message->raw_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_throttle
  {
    size_t item_size = sizeof(ros_message->raw_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_braking
  {
    size_t item_size = sizeof(ros_message->raw_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_bridge_msgs
size_t max_serialized_size_key_teleop_bridge_msgs__msg__DriverInput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: auto_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: steering
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: raw_steering
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: raw_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: raw_braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = teleop_bridge_msgs__msg__DriverInput;
    is_plain =
      (
      offsetof(DataType, raw_braking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DriverInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const teleop_bridge_msgs__msg__DriverInput * ros_message = static_cast<const teleop_bridge_msgs__msg__DriverInput *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_teleop_bridge_msgs__msg__DriverInput(ros_message, cdr);
}

static bool _DriverInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  teleop_bridge_msgs__msg__DriverInput * ros_message = static_cast<teleop_bridge_msgs__msg__DriverInput *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_teleop_bridge_msgs__msg__DriverInput(cdr, ros_message);
}

static uint32_t _DriverInput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_teleop_bridge_msgs__msg__DriverInput(
      untyped_ros_message, 0));
}

static size_t _DriverInput__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_teleop_bridge_msgs__msg__DriverInput(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DriverInput = {
  "teleop_bridge_msgs::msg",
  "DriverInput",
  _DriverInput__cdr_serialize,
  _DriverInput__cdr_deserialize,
  _DriverInput__get_serialized_size,
  _DriverInput__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DriverInput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DriverInput,
  get_message_typesupport_handle_function,
  &teleop_bridge_msgs__msg__DriverInput__get_type_hash,
  &teleop_bridge_msgs__msg__DriverInput__get_type_description,
  &teleop_bridge_msgs__msg__DriverInput__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_bridge_msgs, msg, DriverInput)() {
  return &_DriverInput__type_support;
}

#if defined(__cplusplus)
}
#endif
