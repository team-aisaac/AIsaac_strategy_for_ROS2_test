// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/Commands.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_commands`
#include "robocup_ssl_msgs/msg/detail/robot_command__functions.h"

bool
robocup_ssl_msgs__msg__Commands__init(robocup_ssl_msgs__msg__Commands * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // isteamyellow
  // robot_commands
  if (!robocup_ssl_msgs__msg__RobotCommand__Sequence__init(&msg->robot_commands, 0)) {
    robocup_ssl_msgs__msg__Commands__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__Commands__fini(robocup_ssl_msgs__msg__Commands * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // isteamyellow
  // robot_commands
  robocup_ssl_msgs__msg__RobotCommand__Sequence__fini(&msg->robot_commands);
}

bool
robocup_ssl_msgs__msg__Commands__are_equal(const robocup_ssl_msgs__msg__Commands * lhs, const robocup_ssl_msgs__msg__Commands * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // isteamyellow
  if (lhs->isteamyellow != rhs->isteamyellow) {
    return false;
  }
  // robot_commands
  if (!robocup_ssl_msgs__msg__RobotCommand__Sequence__are_equal(
      &(lhs->robot_commands), &(rhs->robot_commands)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Commands__copy(
  const robocup_ssl_msgs__msg__Commands * input,
  robocup_ssl_msgs__msg__Commands * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // isteamyellow
  output->isteamyellow = input->isteamyellow;
  // robot_commands
  if (!robocup_ssl_msgs__msg__RobotCommand__Sequence__copy(
      &(input->robot_commands), &(output->robot_commands)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__Commands *
robocup_ssl_msgs__msg__Commands__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Commands * msg = (robocup_ssl_msgs__msg__Commands *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Commands), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__Commands));
  bool success = robocup_ssl_msgs__msg__Commands__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__Commands__destroy(robocup_ssl_msgs__msg__Commands * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__Commands__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__Commands__Sequence__init(robocup_ssl_msgs__msg__Commands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Commands * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__Commands *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__Commands), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__Commands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__Commands__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__Commands__Sequence__fini(robocup_ssl_msgs__msg__Commands__Sequence * array)
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
      robocup_ssl_msgs__msg__Commands__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__Commands__Sequence *
robocup_ssl_msgs__msg__Commands__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Commands__Sequence * array = (robocup_ssl_msgs__msg__Commands__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Commands__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__Commands__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__Commands__Sequence__destroy(robocup_ssl_msgs__msg__Commands__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__Commands__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__Commands__Sequence__are_equal(const robocup_ssl_msgs__msg__Commands__Sequence * lhs, const robocup_ssl_msgs__msg__Commands__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__Commands__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Commands__Sequence__copy(
  const robocup_ssl_msgs__msg__Commands__Sequence * input,
  robocup_ssl_msgs__msg__Commands__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__Commands);
    robocup_ssl_msgs__msg__Commands * data =
      (robocup_ssl_msgs__msg__Commands *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__Commands__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__Commands__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__Commands__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
