// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/KickedBall.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/kicked_ball__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos`
// Member `stop_pos`
#include "robocup_ssl_msgs/msg/detail/vector2__functions.h"
// Member `vel`
#include "robocup_ssl_msgs/msg/detail/vector3__functions.h"
// Member `stop_timestamp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `robot_id`
#include "robocup_ssl_msgs/msg/detail/robot_id__functions.h"

bool
robocup_ssl_msgs__msg__KickedBall__init(robocup_ssl_msgs__msg__KickedBall * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector2__init(&msg->pos)) {
    robocup_ssl_msgs__msg__KickedBall__fini(msg);
    return false;
  }
  // vel
  if (!robocup_ssl_msgs__msg__Vector3__init(&msg->vel)) {
    robocup_ssl_msgs__msg__KickedBall__fini(msg);
    return false;
  }
  // start_timestamp
  // stop_timestamp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->stop_timestamp, 0)) {
    robocup_ssl_msgs__msg__KickedBall__fini(msg);
    return false;
  }
  // stop_pos
  if (!robocup_ssl_msgs__msg__Vector2__Sequence__init(&msg->stop_pos, 0)) {
    robocup_ssl_msgs__msg__KickedBall__fini(msg);
    return false;
  }
  // robot_id
  if (!robocup_ssl_msgs__msg__RobotId__Sequence__init(&msg->robot_id, 0)) {
    robocup_ssl_msgs__msg__KickedBall__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__KickedBall__fini(robocup_ssl_msgs__msg__KickedBall * msg)
{
  if (!msg) {
    return;
  }
  // pos
  robocup_ssl_msgs__msg__Vector2__fini(&msg->pos);
  // vel
  robocup_ssl_msgs__msg__Vector3__fini(&msg->vel);
  // start_timestamp
  // stop_timestamp
  rosidl_runtime_c__double__Sequence__fini(&msg->stop_timestamp);
  // stop_pos
  robocup_ssl_msgs__msg__Vector2__Sequence__fini(&msg->stop_pos);
  // robot_id
  robocup_ssl_msgs__msg__RobotId__Sequence__fini(&msg->robot_id);
}

bool
robocup_ssl_msgs__msg__KickedBall__are_equal(const robocup_ssl_msgs__msg__KickedBall * lhs, const robocup_ssl_msgs__msg__KickedBall * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector2__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // vel
  if (!robocup_ssl_msgs__msg__Vector3__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // start_timestamp
  if (lhs->start_timestamp != rhs->start_timestamp) {
    return false;
  }
  // stop_timestamp
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->stop_timestamp), &(rhs->stop_timestamp)))
  {
    return false;
  }
  // stop_pos
  if (!robocup_ssl_msgs__msg__Vector2__Sequence__are_equal(
      &(lhs->stop_pos), &(rhs->stop_pos)))
  {
    return false;
  }
  // robot_id
  if (!robocup_ssl_msgs__msg__RobotId__Sequence__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__KickedBall__copy(
  const robocup_ssl_msgs__msg__KickedBall * input,
  robocup_ssl_msgs__msg__KickedBall * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector2__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // vel
  if (!robocup_ssl_msgs__msg__Vector3__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // start_timestamp
  output->start_timestamp = input->start_timestamp;
  // stop_timestamp
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->stop_timestamp), &(output->stop_timestamp)))
  {
    return false;
  }
  // stop_pos
  if (!robocup_ssl_msgs__msg__Vector2__Sequence__copy(
      &(input->stop_pos), &(output->stop_pos)))
  {
    return false;
  }
  // robot_id
  if (!robocup_ssl_msgs__msg__RobotId__Sequence__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__KickedBall *
robocup_ssl_msgs__msg__KickedBall__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__KickedBall * msg = (robocup_ssl_msgs__msg__KickedBall *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__KickedBall), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__KickedBall));
  bool success = robocup_ssl_msgs__msg__KickedBall__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__KickedBall__destroy(robocup_ssl_msgs__msg__KickedBall * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__KickedBall__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__KickedBall__Sequence__init(robocup_ssl_msgs__msg__KickedBall__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__KickedBall * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__KickedBall *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__KickedBall), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__KickedBall__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__KickedBall__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__KickedBall__Sequence__fini(robocup_ssl_msgs__msg__KickedBall__Sequence * array)
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
      robocup_ssl_msgs__msg__KickedBall__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__KickedBall__Sequence *
robocup_ssl_msgs__msg__KickedBall__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__KickedBall__Sequence * array = (robocup_ssl_msgs__msg__KickedBall__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__KickedBall__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__KickedBall__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__KickedBall__Sequence__destroy(robocup_ssl_msgs__msg__KickedBall__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__KickedBall__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__KickedBall__Sequence__are_equal(const robocup_ssl_msgs__msg__KickedBall__Sequence * lhs, const robocup_ssl_msgs__msg__KickedBall__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__KickedBall__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__KickedBall__Sequence__copy(
  const robocup_ssl_msgs__msg__KickedBall__Sequence * input,
  robocup_ssl_msgs__msg__KickedBall__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__KickedBall);
    robocup_ssl_msgs__msg__KickedBall * data =
      (robocup_ssl_msgs__msg__KickedBall *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__KickedBall__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__KickedBall__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__KickedBall__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
