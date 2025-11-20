// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_bridge_msgs:msg/EgoState.idl
// generated code does not contain a copyright notice
#include "teleop_bridge_msgs/msg/detail/ego_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
teleop_bridge_msgs__msg__EgoState__init(teleop_bridge_msgs__msg__EgoState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    teleop_bridge_msgs__msg__EgoState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    teleop_bridge_msgs__msg__EgoState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    teleop_bridge_msgs__msg__EgoState__fini(msg);
    return false;
  }
  // speed
  // steering
  // beta
  return true;
}

void
teleop_bridge_msgs__msg__EgoState__fini(teleop_bridge_msgs__msg__EgoState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // speed
  // steering
  // beta
}

bool
teleop_bridge_msgs__msg__EgoState__are_equal(const teleop_bridge_msgs__msg__EgoState * lhs, const teleop_bridge_msgs__msg__EgoState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  // beta
  if (lhs->beta != rhs->beta) {
    return false;
  }
  return true;
}

bool
teleop_bridge_msgs__msg__EgoState__copy(
  const teleop_bridge_msgs__msg__EgoState * input,
  teleop_bridge_msgs__msg__EgoState * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // steering
  output->steering = input->steering;
  // beta
  output->beta = input->beta;
  return true;
}

teleop_bridge_msgs__msg__EgoState *
teleop_bridge_msgs__msg__EgoState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_bridge_msgs__msg__EgoState * msg = (teleop_bridge_msgs__msg__EgoState *)allocator.allocate(sizeof(teleop_bridge_msgs__msg__EgoState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_bridge_msgs__msg__EgoState));
  bool success = teleop_bridge_msgs__msg__EgoState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_bridge_msgs__msg__EgoState__destroy(teleop_bridge_msgs__msg__EgoState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_bridge_msgs__msg__EgoState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_bridge_msgs__msg__EgoState__Sequence__init(teleop_bridge_msgs__msg__EgoState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_bridge_msgs__msg__EgoState * data = NULL;

  if (size) {
    data = (teleop_bridge_msgs__msg__EgoState *)allocator.zero_allocate(size, sizeof(teleop_bridge_msgs__msg__EgoState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_bridge_msgs__msg__EgoState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_bridge_msgs__msg__EgoState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
teleop_bridge_msgs__msg__EgoState__Sequence__fini(teleop_bridge_msgs__msg__EgoState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      teleop_bridge_msgs__msg__EgoState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

teleop_bridge_msgs__msg__EgoState__Sequence *
teleop_bridge_msgs__msg__EgoState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_bridge_msgs__msg__EgoState__Sequence * array = (teleop_bridge_msgs__msg__EgoState__Sequence *)allocator.allocate(sizeof(teleop_bridge_msgs__msg__EgoState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_bridge_msgs__msg__EgoState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_bridge_msgs__msg__EgoState__Sequence__destroy(teleop_bridge_msgs__msg__EgoState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_bridge_msgs__msg__EgoState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_bridge_msgs__msg__EgoState__Sequence__are_equal(const teleop_bridge_msgs__msg__EgoState__Sequence * lhs, const teleop_bridge_msgs__msg__EgoState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_bridge_msgs__msg__EgoState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_bridge_msgs__msg__EgoState__Sequence__copy(
  const teleop_bridge_msgs__msg__EgoState__Sequence * input,
  teleop_bridge_msgs__msg__EgoState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_bridge_msgs__msg__EgoState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_bridge_msgs__msg__EgoState * data =
      (teleop_bridge_msgs__msg__EgoState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_bridge_msgs__msg__EgoState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_bridge_msgs__msg__EgoState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_bridge_msgs__msg__EgoState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
