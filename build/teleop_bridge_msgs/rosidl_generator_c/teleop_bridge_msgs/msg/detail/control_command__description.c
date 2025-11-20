// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_bridge_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#include "teleop_bridge_msgs/msg/detail/control_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_bridge_msgs
const rosidl_type_hash_t *
teleop_bridge_msgs__msg__ControlCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x0a, 0x48, 0x3d, 0x3a, 0xd2, 0x29, 0xc0,
      0x22, 0xe6, 0x45, 0x6e, 0xe5, 0x2a, 0x2d, 0x64,
      0xc4, 0x31, 0x7b, 0x83, 0x52, 0x6d, 0x5d, 0x00,
      0x88, 0xa4, 0x40, 0x32, 0x74, 0x2b, 0x84, 0xb3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char teleop_bridge_msgs__msg__ControlCommand__TYPE_NAME[] = "teleop_bridge_msgs/msg/ControlCommand";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__stamp[] = "stamp";
static char teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__throttle[] = "throttle";
static char teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__steering[] = "steering";
static char teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__valid[] = "valid";

static rosidl_runtime_c__type_description__Field teleop_bridge_msgs__msg__ControlCommand__FIELDS[] = {
  {
    {teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__steering, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__ControlCommand__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_bridge_msgs__msg__ControlCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_bridge_msgs__msg__ControlCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_bridge_msgs__msg__ControlCommand__TYPE_NAME, 37, 37},
      {teleop_bridge_msgs__msg__ControlCommand__FIELDS, 4, 4},
    },
    {teleop_bridge_msgs__msg__ControlCommand__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "float32 throttle\n"
  "float32 steering\n"
  "bool valid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_bridge_msgs__msg__ControlCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_bridge_msgs__msg__ControlCommand__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_bridge_msgs__msg__ControlCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_bridge_msgs__msg__ControlCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
