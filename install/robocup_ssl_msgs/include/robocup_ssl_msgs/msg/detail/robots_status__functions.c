// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/RobotsStatus.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/robots_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robots_status`
#include "robocup_ssl_msgs/msg/detail/robot_status__functions.h"

bool
robocup_ssl_msgs__msg__RobotsStatus__init(robocup_ssl_msgs__msg__RobotsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robots_status
  if (!robocup_ssl_msgs__msg__RobotStatus__Sequence__init(&msg->robots_status, 0)) {
    robocup_ssl_msgs__msg__RobotsStatus__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__RobotsStatus__fini(robocup_ssl_msgs__msg__RobotsStatus * msg)
{
  if (!msg) {
    return;
  }
  // robots_status
  robocup_ssl_msgs__msg__RobotStatus__Sequence__fini(&msg->robots_status);
}

bool
robocup_ssl_msgs__msg__RobotsStatus__are_equal(const robocup_ssl_msgs__msg__RobotsStatus * lhs, const robocup_ssl_msgs__msg__RobotsStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robots_status
  if (!robocup_ssl_msgs__msg__RobotStatus__Sequence__are_equal(
      &(lhs->robots_status), &(rhs->robots_status)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotsStatus__copy(
  const robocup_ssl_msgs__msg__RobotsStatus * input,
  robocup_ssl_msgs__msg__RobotsStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robots_status
  if (!robocup_ssl_msgs__msg__RobotStatus__Sequence__copy(
      &(input->robots_status), &(output->robots_status)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__RobotsStatus *
robocup_ssl_msgs__msg__RobotsStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotsStatus * msg = (robocup_ssl_msgs__msg__RobotsStatus *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotsStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__RobotsStatus));
  bool success = robocup_ssl_msgs__msg__RobotsStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__RobotsStatus__destroy(robocup_ssl_msgs__msg__RobotsStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__RobotsStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__RobotsStatus__Sequence__init(robocup_ssl_msgs__msg__RobotsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotsStatus * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__RobotsStatus *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__RobotsStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__RobotsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__RobotsStatus__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__RobotsStatus__Sequence__fini(robocup_ssl_msgs__msg__RobotsStatus__Sequence * array)
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
      robocup_ssl_msgs__msg__RobotsStatus__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__RobotsStatus__Sequence *
robocup_ssl_msgs__msg__RobotsStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotsStatus__Sequence * array = (robocup_ssl_msgs__msg__RobotsStatus__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotsStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__RobotsStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__RobotsStatus__Sequence__destroy(robocup_ssl_msgs__msg__RobotsStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__RobotsStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__RobotsStatus__Sequence__are_equal(const robocup_ssl_msgs__msg__RobotsStatus__Sequence * lhs, const robocup_ssl_msgs__msg__RobotsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__RobotsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotsStatus__Sequence__copy(
  const robocup_ssl_msgs__msg__RobotsStatus__Sequence * input,
  robocup_ssl_msgs__msg__RobotsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__RobotsStatus);
    robocup_ssl_msgs__msg__RobotsStatus * data =
      (robocup_ssl_msgs__msg__RobotsStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__RobotsStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__RobotsStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocup_ssl_msgs__msg__RobotsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
