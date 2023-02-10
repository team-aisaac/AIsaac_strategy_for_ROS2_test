// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/BallReplacement.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/ball_replacement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `vx`
// Member `vy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__BallReplacement__init(robocup_ssl_msgs__msg__BallReplacement * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x, 0)) {
    robocup_ssl_msgs__msg__BallReplacement__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y, 0)) {
    robocup_ssl_msgs__msg__BallReplacement__fini(msg);
    return false;
  }
  // vx
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vx, 0)) {
    robocup_ssl_msgs__msg__BallReplacement__fini(msg);
    return false;
  }
  // vy
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vy, 0)) {
    robocup_ssl_msgs__msg__BallReplacement__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__BallReplacement__fini(robocup_ssl_msgs__msg__BallReplacement * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__double__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__double__Sequence__fini(&msg->y);
  // vx
  rosidl_runtime_c__double__Sequence__fini(&msg->vx);
  // vy
  rosidl_runtime_c__double__Sequence__fini(&msg->vy);
}

bool
robocup_ssl_msgs__msg__BallReplacement__are_equal(const robocup_ssl_msgs__msg__BallReplacement * lhs, const robocup_ssl_msgs__msg__BallReplacement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // vx
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vx), &(rhs->vx)))
  {
    return false;
  }
  // vy
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vy), &(rhs->vy)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__BallReplacement__copy(
  const robocup_ssl_msgs__msg__BallReplacement * input,
  robocup_ssl_msgs__msg__BallReplacement * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // vx
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vx), &(output->vx)))
  {
    return false;
  }
  // vy
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vy), &(output->vy)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__BallReplacement *
robocup_ssl_msgs__msg__BallReplacement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallReplacement * msg = (robocup_ssl_msgs__msg__BallReplacement *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__BallReplacement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__BallReplacement));
  bool success = robocup_ssl_msgs__msg__BallReplacement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__BallReplacement__destroy(robocup_ssl_msgs__msg__BallReplacement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__BallReplacement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__BallReplacement__Sequence__init(robocup_ssl_msgs__msg__BallReplacement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallReplacement * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__BallReplacement *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__BallReplacement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__BallReplacement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__BallReplacement__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__BallReplacement__Sequence__fini(robocup_ssl_msgs__msg__BallReplacement__Sequence * array)
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
      robocup_ssl_msgs__msg__BallReplacement__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__BallReplacement__Sequence *
robocup_ssl_msgs__msg__BallReplacement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallReplacement__Sequence * array = (robocup_ssl_msgs__msg__BallReplacement__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__BallReplacement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__BallReplacement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__BallReplacement__Sequence__destroy(robocup_ssl_msgs__msg__BallReplacement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__BallReplacement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__BallReplacement__Sequence__are_equal(const robocup_ssl_msgs__msg__BallReplacement__Sequence * lhs, const robocup_ssl_msgs__msg__BallReplacement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__BallReplacement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__BallReplacement__Sequence__copy(
  const robocup_ssl_msgs__msg__BallReplacement__Sequence * input,
  robocup_ssl_msgs__msg__BallReplacement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__BallReplacement);
    robocup_ssl_msgs__msg__BallReplacement * data =
      (robocup_ssl_msgs__msg__BallReplacement *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__BallReplacement__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__BallReplacement__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__BallReplacement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
