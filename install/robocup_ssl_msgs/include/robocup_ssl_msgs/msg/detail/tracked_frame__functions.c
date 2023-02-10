// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/TrackedFrame.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/tracked_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `balls`
#include "robocup_ssl_msgs/msg/detail/tracked_ball__functions.h"
// Member `robots`
#include "robocup_ssl_msgs/msg/detail/tracked_robot__functions.h"
// Member `kicked_ball`
#include "robocup_ssl_msgs/msg/detail/kicked_ball__functions.h"
// Member `capabilities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__TrackedFrame__init(robocup_ssl_msgs__msg__TrackedFrame * msg)
{
  if (!msg) {
    return false;
  }
  // frame_number
  // timestamp
  // balls
  if (!robocup_ssl_msgs__msg__TrackedBall__Sequence__init(&msg->balls, 0)) {
    robocup_ssl_msgs__msg__TrackedFrame__fini(msg);
    return false;
  }
  // robots
  if (!robocup_ssl_msgs__msg__TrackedRobot__Sequence__init(&msg->robots, 0)) {
    robocup_ssl_msgs__msg__TrackedFrame__fini(msg);
    return false;
  }
  // kicked_ball
  if (!robocup_ssl_msgs__msg__KickedBall__Sequence__init(&msg->kicked_ball, 0)) {
    robocup_ssl_msgs__msg__TrackedFrame__fini(msg);
    return false;
  }
  // capabilities
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->capabilities, 0)) {
    robocup_ssl_msgs__msg__TrackedFrame__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__TrackedFrame__fini(robocup_ssl_msgs__msg__TrackedFrame * msg)
{
  if (!msg) {
    return;
  }
  // frame_number
  // timestamp
  // balls
  robocup_ssl_msgs__msg__TrackedBall__Sequence__fini(&msg->balls);
  // robots
  robocup_ssl_msgs__msg__TrackedRobot__Sequence__fini(&msg->robots);
  // kicked_ball
  robocup_ssl_msgs__msg__KickedBall__Sequence__fini(&msg->kicked_ball);
  // capabilities
  rosidl_runtime_c__uint32__Sequence__fini(&msg->capabilities);
}

bool
robocup_ssl_msgs__msg__TrackedFrame__are_equal(const robocup_ssl_msgs__msg__TrackedFrame * lhs, const robocup_ssl_msgs__msg__TrackedFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_number
  if (lhs->frame_number != rhs->frame_number) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // balls
  if (!robocup_ssl_msgs__msg__TrackedBall__Sequence__are_equal(
      &(lhs->balls), &(rhs->balls)))
  {
    return false;
  }
  // robots
  if (!robocup_ssl_msgs__msg__TrackedRobot__Sequence__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  // kicked_ball
  if (!robocup_ssl_msgs__msg__KickedBall__Sequence__are_equal(
      &(lhs->kicked_ball), &(rhs->kicked_ball)))
  {
    return false;
  }
  // capabilities
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->capabilities), &(rhs->capabilities)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__TrackedFrame__copy(
  const robocup_ssl_msgs__msg__TrackedFrame * input,
  robocup_ssl_msgs__msg__TrackedFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_number
  output->frame_number = input->frame_number;
  // timestamp
  output->timestamp = input->timestamp;
  // balls
  if (!robocup_ssl_msgs__msg__TrackedBall__Sequence__copy(
      &(input->balls), &(output->balls)))
  {
    return false;
  }
  // robots
  if (!robocup_ssl_msgs__msg__TrackedRobot__Sequence__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  // kicked_ball
  if (!robocup_ssl_msgs__msg__KickedBall__Sequence__copy(
      &(input->kicked_ball), &(output->kicked_ball)))
  {
    return false;
  }
  // capabilities
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->capabilities), &(output->capabilities)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__TrackedFrame *
robocup_ssl_msgs__msg__TrackedFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedFrame * msg = (robocup_ssl_msgs__msg__TrackedFrame *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TrackedFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__TrackedFrame));
  bool success = robocup_ssl_msgs__msg__TrackedFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__TrackedFrame__destroy(robocup_ssl_msgs__msg__TrackedFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__TrackedFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__TrackedFrame__Sequence__init(robocup_ssl_msgs__msg__TrackedFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedFrame * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__TrackedFrame *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__TrackedFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__TrackedFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__TrackedFrame__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__TrackedFrame__Sequence__fini(robocup_ssl_msgs__msg__TrackedFrame__Sequence * array)
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
      robocup_ssl_msgs__msg__TrackedFrame__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__TrackedFrame__Sequence *
robocup_ssl_msgs__msg__TrackedFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedFrame__Sequence * array = (robocup_ssl_msgs__msg__TrackedFrame__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TrackedFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__TrackedFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__TrackedFrame__Sequence__destroy(robocup_ssl_msgs__msg__TrackedFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__TrackedFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__TrackedFrame__Sequence__are_equal(const robocup_ssl_msgs__msg__TrackedFrame__Sequence * lhs, const robocup_ssl_msgs__msg__TrackedFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__TrackedFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__TrackedFrame__Sequence__copy(
  const robocup_ssl_msgs__msg__TrackedFrame__Sequence * input,
  robocup_ssl_msgs__msg__TrackedFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__TrackedFrame);
    robocup_ssl_msgs__msg__TrackedFrame * data =
      (robocup_ssl_msgs__msg__TrackedFrame *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__TrackedFrame__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__TrackedFrame__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__TrackedFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
