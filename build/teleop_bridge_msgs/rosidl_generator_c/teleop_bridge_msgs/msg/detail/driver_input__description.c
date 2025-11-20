// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_bridge_msgs:msg/DriverInput.idl
// generated code does not contain a copyright notice

#include "teleop_bridge_msgs/msg/detail/driver_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_bridge_msgs
const rosidl_type_hash_t *
teleop_bridge_msgs__msg__DriverInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0xa2, 0xaf, 0x17, 0x75, 0x2b, 0xe2, 0xac,
      0xa0, 0xff, 0x31, 0xd4, 0xf8, 0x13, 0xa5, 0x1c,
      0xc1, 0x6a, 0xbc, 0xad, 0x26, 0xdd, 0xaf, 0xbb,
      0x02, 0x31, 0x79, 0xa0, 0xfb, 0x04, 0x71, 0x61,
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

static char teleop_bridge_msgs__msg__DriverInput__TYPE_NAME[] = "teleop_bridge_msgs/msg/DriverInput";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__stamp[] = "stamp";
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__auto_mode[] = "auto_mode";
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__steering[] = "steering";
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__throttle[] = "throttle";
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__braking[] = "braking";
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__raw_steering[] = "raw_steering";
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__raw_throttle[] = "raw_throttle";
static char teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__raw_braking[] = "raw_braking";

static rosidl_runtime_c__type_description__Field teleop_bridge_msgs__msg__DriverInput__FIELDS[] = {
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__auto_mode, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__steering, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__braking, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__raw_steering, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__raw_throttle, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__DriverInput__FIELD_NAME__raw_braking, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_bridge_msgs__msg__DriverInput__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_bridge_msgs__msg__DriverInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_bridge_msgs__msg__DriverInput__TYPE_NAME, 34, 34},
      {teleop_bridge_msgs__msg__DriverInput__FIELDS, 8, 8},
    },
    {teleop_bridge_msgs__msg__DriverInput__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "bool auto_mode\n"
  "float32 steering\n"
  "float32 throttle\n"
  "float32 braking\n"
  "float32 raw_steering\n"
  "float32 raw_throttle\n"
  "float32 raw_braking";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_bridge_msgs__msg__DriverInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_bridge_msgs__msg__DriverInput__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 157, 157},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_bridge_msgs__msg__DriverInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_bridge_msgs__msg__DriverInput__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
