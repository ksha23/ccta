// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_bridge_msgs:msg/WarningStatus.idl
// generated code does not contain a copyright notice

#include "teleop_bridge_msgs/msg/detail/warning_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_bridge_msgs
const rosidl_type_hash_t *
teleop_bridge_msgs__msg__WarningStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xe1, 0x3c, 0x49, 0xb6, 0xb5, 0x98, 0x99,
      0xac, 0x95, 0xec, 0x0e, 0xfe, 0x9c, 0xc6, 0x71,
      0x9e, 0xdf, 0x20, 0xac, 0x40, 0xb3, 0xe1, 0xe9,
      0xa6, 0x49, 0xe0, 0xec, 0x86, 0x4d, 0x9e, 0x1d,
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

static char teleop_bridge_msgs__msg__WarningStatus__TYPE_NAME[] = "teleop_bridge_msgs/msg/WarningStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char teleop_bridge_msgs__msg__WarningStatus__FIELD_NAME__stamp[] = "stamp";
static char teleop_bridge_msgs__msg__WarningStatus__FIELD_NAME__warning[] = "warning";
static char teleop_bridge_msgs__msg__WarningStatus__FIELD_NAME__score[] = "score";

static rosidl_runtime_c__type_description__Field teleop_bridge_msgs__msg__WarningStatus__FIELDS[] = {
  {
    {teleop_bridge_msgs__msg__WarningStatus__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__WarningStatus__FIELD_NAME__warning, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_bridge_msgs__msg__WarningStatus__FIELD_NAME__score, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_bridge_msgs__msg__WarningStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_bridge_msgs__msg__WarningStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_bridge_msgs__msg__WarningStatus__TYPE_NAME, 36, 36},
      {teleop_bridge_msgs__msg__WarningStatus__FIELDS, 3, 3},
    },
    {teleop_bridge_msgs__msg__WarningStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "bool warning\n"
  "float32 score";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_bridge_msgs__msg__WarningStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_bridge_msgs__msg__WarningStatus__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 57, 57},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_bridge_msgs__msg__WarningStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_bridge_msgs__msg__WarningStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
