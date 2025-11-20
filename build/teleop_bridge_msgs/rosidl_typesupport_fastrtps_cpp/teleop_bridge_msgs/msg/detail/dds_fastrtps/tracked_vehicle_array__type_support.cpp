// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicleArray.idl
// generated code does not contain a copyright notice
#include "teleop_bridge_msgs/msg/detail/tracked_vehicle_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "teleop_bridge_msgs/msg/detail/tracked_vehicle_array__functions.h"
#include "teleop_bridge_msgs/msg/detail/tracked_vehicle_array__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_key_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace teleop_bridge_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const teleop_bridge_msgs::msg::TrackedVehicle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  teleop_bridge_msgs::msg::TrackedVehicle &);
size_t get_serialized_size(
  const teleop_bridge_msgs::msg::TrackedVehicle &,
  size_t current_alignment);
size_t
max_serialized_size_TrackedVehicle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const teleop_bridge_msgs::msg::TrackedVehicle &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const teleop_bridge_msgs::msg::TrackedVehicle &,
  size_t current_alignment);
size_t
max_serialized_size_key_TrackedVehicle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace teleop_bridge_msgs


namespace teleop_bridge_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
cdr_serialize(
  const teleop_bridge_msgs::msg::TrackedVehicleArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  // Member: vehicles
  {
    size_t size = ros_message.vehicles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vehicles[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  teleop_bridge_msgs::msg::TrackedVehicleArray & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: vehicles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.vehicles.resize(size);
    for (size_t i = 0; i < size; i++) {
      teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vehicles[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
get_serialized_size(
  const teleop_bridge_msgs::msg::TrackedVehicleArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  // Member: vehicles
  {
    size_t array_size = ros_message.vehicles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vehicles[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
max_serialized_size_TrackedVehicleArray(
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

  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: vehicles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrackedVehicle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = teleop_bridge_msgs::msg::TrackedVehicleArray;
    is_plain =
      (
      offsetof(DataType, vehicles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
cdr_serialize_key(
  const teleop_bridge_msgs::msg::TrackedVehicleArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.stamp,
    cdr);

  // Member: vehicles
  {
    size_t size = ros_message.vehicles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.vehicles[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
get_serialized_size_key(
  const teleop_bridge_msgs::msg::TrackedVehicleArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.stamp, current_alignment);

  // Member: vehicles
  {
    size_t array_size = ros_message.vehicles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.vehicles[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_bridge_msgs
max_serialized_size_key_TrackedVehicleArray(
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

  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: vehicles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TrackedVehicle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = teleop_bridge_msgs::msg::TrackedVehicleArray;
    is_plain =
      (
      offsetof(DataType, vehicles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TrackedVehicleArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const teleop_bridge_msgs::msg::TrackedVehicleArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrackedVehicleArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<teleop_bridge_msgs::msg::TrackedVehicleArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrackedVehicleArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const teleop_bridge_msgs::msg::TrackedVehicleArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrackedVehicleArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrackedVehicleArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrackedVehicleArray__callbacks = {
  "teleop_bridge_msgs::msg",
  "TrackedVehicleArray",
  _TrackedVehicleArray__cdr_serialize,
  _TrackedVehicleArray__cdr_deserialize,
  _TrackedVehicleArray__get_serialized_size,
  _TrackedVehicleArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrackedVehicleArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrackedVehicleArray__callbacks,
  get_message_typesupport_handle_function,
  &teleop_bridge_msgs__msg__TrackedVehicleArray__get_type_hash,
  &teleop_bridge_msgs__msg__TrackedVehicleArray__get_type_description,
  &teleop_bridge_msgs__msg__TrackedVehicleArray__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace teleop_bridge_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_teleop_bridge_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_bridge_msgs::msg::TrackedVehicleArray>()
{
  return &teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::_TrackedVehicleArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_bridge_msgs, msg, TrackedVehicleArray)() {
  return &teleop_bridge_msgs::msg::typesupport_fastrtps_cpp::_TrackedVehicleArray__handle;
}

#ifdef __cplusplus
}
#endif
