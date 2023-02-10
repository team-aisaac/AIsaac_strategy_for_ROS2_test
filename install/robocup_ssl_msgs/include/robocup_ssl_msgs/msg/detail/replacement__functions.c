// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/Replacement.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/replacement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ball`
#include "robocup_ssl_msgs/msg/detail/ball_replacement__functions.h"
// Member `robots`
#include "robocup_ssl_msgs/msg/detail/robot_replacement__functions.h"

bool
robocup_ssl_msgs__msg__Replacement__init(robocup_ssl_msgs__msg__Replacement * msg)
{
  if (!msg) {
    return false;
  }
  // ball
  if (!robocup_ssl_msgs__msg__BallReplacement__Sequence__init(&msg->ball, 0)) {
    robocup_ssl_msgs__msg__Replacement__fini(msg);
    return false;
  }
  // robots
  if (!robocup_ssl_msgs__msg__RobotReplacement__Sequence__init(&msg->robots, 0)) {
    robocup_ssl_msgs__msg__Replacement__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__Replacement__fini(robocup_ssl_msgs__msg__Replacement * msg)
{
  if (!msg) {
    return;
  }
  // ball
  robocup_ssl_msgs__msg__BallReplacement__Sequence__fini(&msg->ball);
  // robots
  robocup_ssl_msgs__msg__RobotReplacement__Sequence__fini(&msg->robots);
}

bool
robocup_ssl_msgs__msg__Replacement__are_equal(const robocup_ssl_msgs__msg__Replacement * lhs, const robocup_ssl_msgs__msg__Replacement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ball
  if (!robocup_ssl_msgs__msg__BallReplacement__Sequence__are_equal(
      &(lhs->ball), &(rhs->ball)))
  {
    return false;
  }
  // robots
  if (!robocup_ssl_msgs__msg__RobotReplacement__Sequence__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Replacement__copy(
  const robocup_ssl_msgs__msg__Replacement * input,
  robocup_ssl_msgs__msg__Replacement * output)
{
  if (!input || !output) {
    return false;
  }
  // ball
  if (!robocup_ssl_msgs__msg__BallReplacement__Sequence__copy(
      &(input->ball), &(output->ball)))
  {
    return false;
  }
  // robots
  if (!robocup_ssl_msgs__msg__RobotReplacement__Sequence__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__Replacement *
robocup_ssl_msgs__msg__Replacement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Replacement * msg = (robocup_ssl_msgs__msg__Replacement *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Replacement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__Replacement));
  bool success = robocup_ssl_msgs__msg__Replacement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__Replacement__destroy(robocup_ssl_msgs__msg__Replacement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__Replacement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__Replacement__Sequence__init(robocup_ssl_msgs__msg__Replacement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Replacement * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__Replacement *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__Replacement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__Replacement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__Replacement__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__Replacement__Sequence__fini(robocup_ssl_msgs__msg__Replacement__Sequence * array)
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
      robocup_ssl_msgs__msg__Replacement__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__Replacement__Sequence *
robocup_ssl_msgs__msg__Replacement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Replacement__Sequence * array = (robocup_ssl_msgs__msg__Replacement__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Replacement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__Replacement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__Replacement__Sequence__destroy(robocup_ssl_msgs__msg__Replacement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__Replacement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__Replacement__Sequence__are_equal(const robocup_ssl_msgs__msg__Replacement__Sequence * lhs, const robocup_ssl_msgs__msg__Replacement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__Replacement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Replacement__Sequence__copy(
  const robocup_ssl_msgs__msg__Replacement__Sequence * input,
  robocup_ssl_msgs__msg__Replacement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__Replacement);
    robocup_ssl_msgs__msg__Replacement * data =
      (robocup_ssl_msgs__msg__Replacement *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__Replacement__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__Replacement__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__Replacement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
