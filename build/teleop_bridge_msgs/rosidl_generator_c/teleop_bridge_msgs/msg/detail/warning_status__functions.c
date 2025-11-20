// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_bridge_msgs:msg/WarningStatus.idl
// generated code does not contain a copyright notice
#include "teleop_bridge_msgs/msg/detail/warning_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
teleop_bridge_msgs__msg__WarningStatus__init(teleop_bridge_msgs__msg__WarningStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    teleop_bridge_msgs__msg__WarningStatus__fini(msg);
    return false;
  }
  // warning
  // score
  return true;
}

void
teleop_bridge_msgs__msg__WarningStatus__fini(teleop_bridge_msgs__msg__WarningStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // warning
  // score
}

bool
teleop_bridge_msgs__msg__WarningStatus__are_equal(const teleop_bridge_msgs__msg__WarningStatus * lhs, const teleop_bridge_msgs__msg__WarningStatus * rhs)
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
  // warning
  if (lhs->warning != rhs->warning) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  return true;
}

bool
teleop_bridge_msgs__msg__WarningStatus__copy(
  const teleop_bridge_msgs__msg__WarningStatus * input,
  teleop_bridge_msgs__msg__WarningStatus * output)
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
  // warning
  output->warning = input->warning;
  // score
  output->score = input->score;
  return true;
}

teleop_bridge_msgs__msg__WarningStatus *
teleop_bridge_msgs__msg__WarningStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_bridge_msgs__msg__WarningStatus * msg = (teleop_bridge_msgs__msg__WarningStatus *)allocator.allocate(sizeof(teleop_bridge_msgs__msg__WarningStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_bridge_msgs__msg__WarningStatus));
  bool success = teleop_bridge_msgs__msg__WarningStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_bridge_msgs__msg__WarningStatus__destroy(teleop_bridge_msgs__msg__WarningStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_bridge_msgs__msg__WarningStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_bridge_msgs__msg__WarningStatus__Sequence__init(teleop_bridge_msgs__msg__WarningStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_bridge_msgs__msg__WarningStatus * data = NULL;

  if (size) {
    data = (teleop_bridge_msgs__msg__WarningStatus *)allocator.zero_allocate(size, sizeof(teleop_bridge_msgs__msg__WarningStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_bridge_msgs__msg__WarningStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_bridge_msgs__msg__WarningStatus__fini(&data[i - 1]);
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
teleop_bridge_msgs__msg__WarningStatus__Sequence__fini(teleop_bridge_msgs__msg__WarningStatus__Sequence * array)
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
      teleop_bridge_msgs__msg__WarningStatus__fini(&array->data[i]);
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

teleop_bridge_msgs__msg__WarningStatus__Sequence *
teleop_bridge_msgs__msg__WarningStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_bridge_msgs__msg__WarningStatus__Sequence * array = (teleop_bridge_msgs__msg__WarningStatus__Sequence *)allocator.allocate(sizeof(teleop_bridge_msgs__msg__WarningStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_bridge_msgs__msg__WarningStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_bridge_msgs__msg__WarningStatus__Sequence__destroy(teleop_bridge_msgs__msg__WarningStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_bridge_msgs__msg__WarningStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_bridge_msgs__msg__WarningStatus__Sequence__are_equal(const teleop_bridge_msgs__msg__WarningStatus__Sequence * lhs, const teleop_bridge_msgs__msg__WarningStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_bridge_msgs__msg__WarningStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_bridge_msgs__msg__WarningStatus__Sequence__copy(
  const teleop_bridge_msgs__msg__WarningStatus__Sequence * input,
  teleop_bridge_msgs__msg__WarningStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_bridge_msgs__msg__WarningStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_bridge_msgs__msg__WarningStatus * data =
      (teleop_bridge_msgs__msg__WarningStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_bridge_msgs__msg__WarningStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_bridge_msgs__msg__WarningStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_bridge_msgs__msg__WarningStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
