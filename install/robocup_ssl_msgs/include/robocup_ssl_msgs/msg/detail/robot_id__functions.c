// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/robot_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robocup_ssl_msgs__msg__RobotId__init(robocup_ssl_msgs__msg__RobotId * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // team_color
  return true;
}

void
robocup_ssl_msgs__msg__RobotId__fini(robocup_ssl_msgs__msg__RobotId * msg)
{
  if (!msg) {
    return;
  }
  // id
  // team_color
}

bool
robocup_ssl_msgs__msg__RobotId__are_equal(const robocup_ssl_msgs__msg__RobotId * lhs, const robocup_ssl_msgs__msg__RobotId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // team_color
  if (lhs->team_color != rhs->team_color) {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotId__copy(
  const robocup_ssl_msgs__msg__RobotId * input,
  robocup_ssl_msgs__msg__RobotId * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // team_color
  output->team_color = input->team_color;
  return true;
}

robocup_ssl_msgs__msg__RobotId *
robocup_ssl_msgs__msg__RobotId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotId * msg = (robocup_ssl_msgs__msg__RobotId *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__RobotId));
  bool success = robocup_ssl_msgs__msg__RobotId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__RobotId__destroy(robocup_ssl_msgs__msg__RobotId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__RobotId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__RobotId__Sequence__init(robocup_ssl_msgs__msg__RobotId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotId * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__RobotId *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__RobotId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__RobotId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__RobotId__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__RobotId__Sequence__fini(robocup_ssl_msgs__msg__RobotId__Sequence * array)
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
      robocup_ssl_msgs__msg__RobotId__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__RobotId__Sequence *
robocup_ssl_msgs__msg__RobotId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotId__Sequence * array = (robocup_ssl_msgs__msg__RobotId__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__RobotId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__RobotId__Sequence__destroy(robocup_ssl_msgs__msg__RobotId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__RobotId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__RobotId__Sequence__are_equal(const robocup_ssl_msgs__msg__RobotId__Sequence * lhs, const robocup_ssl_msgs__msg__RobotId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__RobotId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotId__Sequence__copy(
  const robocup_ssl_msgs__msg__RobotId__Sequence * input,
  robocup_ssl_msgs__msg__RobotId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__RobotId);
    robocup_ssl_msgs__msg__RobotId * data =
      (robocup_ssl_msgs__msg__RobotId *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__RobotId__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__RobotId__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__RobotId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
