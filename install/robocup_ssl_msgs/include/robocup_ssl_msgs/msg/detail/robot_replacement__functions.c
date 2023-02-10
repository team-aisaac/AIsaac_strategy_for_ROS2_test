// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/RobotReplacement.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/robot_replacement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turnon`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__RobotReplacement__init(robocup_ssl_msgs__msg__RobotReplacement * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // dir
  // id
  // yellowteam
  // turnon
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->turnon, 0)) {
    robocup_ssl_msgs__msg__RobotReplacement__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__RobotReplacement__fini(robocup_ssl_msgs__msg__RobotReplacement * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // dir
  // id
  // yellowteam
  // turnon
  rosidl_runtime_c__boolean__Sequence__fini(&msg->turnon);
}

bool
robocup_ssl_msgs__msg__RobotReplacement__are_equal(const robocup_ssl_msgs__msg__RobotReplacement * lhs, const robocup_ssl_msgs__msg__RobotReplacement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // dir
  if (lhs->dir != rhs->dir) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // yellowteam
  if (lhs->yellowteam != rhs->yellowteam) {
    return false;
  }
  // turnon
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->turnon), &(rhs->turnon)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotReplacement__copy(
  const robocup_ssl_msgs__msg__RobotReplacement * input,
  robocup_ssl_msgs__msg__RobotReplacement * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // dir
  output->dir = input->dir;
  // id
  output->id = input->id;
  // yellowteam
  output->yellowteam = input->yellowteam;
  // turnon
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->turnon), &(output->turnon)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__RobotReplacement *
robocup_ssl_msgs__msg__RobotReplacement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotReplacement * msg = (robocup_ssl_msgs__msg__RobotReplacement *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotReplacement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__RobotReplacement));
  bool success = robocup_ssl_msgs__msg__RobotReplacement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__RobotReplacement__destroy(robocup_ssl_msgs__msg__RobotReplacement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__RobotReplacement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__RobotReplacement__Sequence__init(robocup_ssl_msgs__msg__RobotReplacement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotReplacement * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__RobotReplacement *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__RobotReplacement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__RobotReplacement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__RobotReplacement__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__RobotReplacement__Sequence__fini(robocup_ssl_msgs__msg__RobotReplacement__Sequence * array)
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
      robocup_ssl_msgs__msg__RobotReplacement__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__RobotReplacement__Sequence *
robocup_ssl_msgs__msg__RobotReplacement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotReplacement__Sequence * array = (robocup_ssl_msgs__msg__RobotReplacement__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotReplacement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__RobotReplacement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__RobotReplacement__Sequence__destroy(robocup_ssl_msgs__msg__RobotReplacement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__RobotReplacement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__RobotReplacement__Sequence__are_equal(const robocup_ssl_msgs__msg__RobotReplacement__Sequence * lhs, const robocup_ssl_msgs__msg__RobotReplacement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__RobotReplacement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotReplacement__Sequence__copy(
  const robocup_ssl_msgs__msg__RobotReplacement__Sequence * input,
  robocup_ssl_msgs__msg__RobotReplacement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__RobotReplacement);
    robocup_ssl_msgs__msg__RobotReplacement * data =
      (robocup_ssl_msgs__msg__RobotReplacement *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__RobotReplacement__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__RobotReplacement__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__RobotReplacement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
