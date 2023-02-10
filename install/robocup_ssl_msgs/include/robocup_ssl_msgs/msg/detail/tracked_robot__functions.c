// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/TrackedRobot.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/tracked_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
#include "robocup_ssl_msgs/msg/detail/robot_id__functions.h"
// Member `pos`
// Member `vel`
#include "robocup_ssl_msgs/msg/detail/vector2__functions.h"
// Member `vel_angular`
// Member `visibility`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__TrackedRobot__init(robocup_ssl_msgs__msg__TrackedRobot * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!robocup_ssl_msgs__msg__RobotId__init(&msg->robot_id)) {
    robocup_ssl_msgs__msg__TrackedRobot__fini(msg);
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector2__init(&msg->pos)) {
    robocup_ssl_msgs__msg__TrackedRobot__fini(msg);
    return false;
  }
  // orientation
  // vel
  if (!robocup_ssl_msgs__msg__Vector2__Sequence__init(&msg->vel, 0)) {
    robocup_ssl_msgs__msg__TrackedRobot__fini(msg);
    return false;
  }
  // vel_angular
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vel_angular, 0)) {
    robocup_ssl_msgs__msg__TrackedRobot__fini(msg);
    return false;
  }
  // visibility
  if (!rosidl_runtime_c__float__Sequence__init(&msg->visibility, 0)) {
    robocup_ssl_msgs__msg__TrackedRobot__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__TrackedRobot__fini(robocup_ssl_msgs__msg__TrackedRobot * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  robocup_ssl_msgs__msg__RobotId__fini(&msg->robot_id);
  // pos
  robocup_ssl_msgs__msg__Vector2__fini(&msg->pos);
  // orientation
  // vel
  robocup_ssl_msgs__msg__Vector2__Sequence__fini(&msg->vel);
  // vel_angular
  rosidl_runtime_c__float__Sequence__fini(&msg->vel_angular);
  // visibility
  rosidl_runtime_c__float__Sequence__fini(&msg->visibility);
}

bool
robocup_ssl_msgs__msg__TrackedRobot__are_equal(const robocup_ssl_msgs__msg__TrackedRobot * lhs, const robocup_ssl_msgs__msg__TrackedRobot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (!robocup_ssl_msgs__msg__RobotId__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector2__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // vel
  if (!robocup_ssl_msgs__msg__Vector2__Sequence__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // vel_angular
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vel_angular), &(rhs->vel_angular)))
  {
    return false;
  }
  // visibility
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->visibility), &(rhs->visibility)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__TrackedRobot__copy(
  const robocup_ssl_msgs__msg__TrackedRobot * input,
  robocup_ssl_msgs__msg__TrackedRobot * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  if (!robocup_ssl_msgs__msg__RobotId__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector2__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // orientation
  output->orientation = input->orientation;
  // vel
  if (!robocup_ssl_msgs__msg__Vector2__Sequence__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // vel_angular
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vel_angular), &(output->vel_angular)))
  {
    return false;
  }
  // visibility
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->visibility), &(output->visibility)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__TrackedRobot *
robocup_ssl_msgs__msg__TrackedRobot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedRobot * msg = (robocup_ssl_msgs__msg__TrackedRobot *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TrackedRobot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__TrackedRobot));
  bool success = robocup_ssl_msgs__msg__TrackedRobot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__TrackedRobot__destroy(robocup_ssl_msgs__msg__TrackedRobot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__TrackedRobot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__TrackedRobot__Sequence__init(robocup_ssl_msgs__msg__TrackedRobot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedRobot * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__TrackedRobot *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__TrackedRobot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__TrackedRobot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__TrackedRobot__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__TrackedRobot__Sequence__fini(robocup_ssl_msgs__msg__TrackedRobot__Sequence * array)
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
      robocup_ssl_msgs__msg__TrackedRobot__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__TrackedRobot__Sequence *
robocup_ssl_msgs__msg__TrackedRobot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedRobot__Sequence * array = (robocup_ssl_msgs__msg__TrackedRobot__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TrackedRobot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__TrackedRobot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__TrackedRobot__Sequence__destroy(robocup_ssl_msgs__msg__TrackedRobot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__TrackedRobot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__TrackedRobot__Sequence__are_equal(const robocup_ssl_msgs__msg__TrackedRobot__Sequence * lhs, const robocup_ssl_msgs__msg__TrackedRobot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__TrackedRobot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__TrackedRobot__Sequence__copy(
  const robocup_ssl_msgs__msg__TrackedRobot__Sequence * input,
  robocup_ssl_msgs__msg__TrackedRobot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__TrackedRobot);
    robocup_ssl_msgs__msg__TrackedRobot * data =
      (robocup_ssl_msgs__msg__TrackedRobot *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__TrackedRobot__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__TrackedRobot__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__TrackedRobot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
