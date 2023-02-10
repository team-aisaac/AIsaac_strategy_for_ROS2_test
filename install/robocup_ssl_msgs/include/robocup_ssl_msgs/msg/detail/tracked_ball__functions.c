// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/TrackedBall.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/tracked_ball__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos`
// Member `vel`
#include "robocup_ssl_msgs/msg/detail/vector3__functions.h"
// Member `visibility`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__TrackedBall__init(robocup_ssl_msgs__msg__TrackedBall * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector3__init(&msg->pos)) {
    robocup_ssl_msgs__msg__TrackedBall__fini(msg);
    return false;
  }
  // vel
  if (!robocup_ssl_msgs__msg__Vector3__Sequence__init(&msg->vel, 0)) {
    robocup_ssl_msgs__msg__TrackedBall__fini(msg);
    return false;
  }
  // visibility
  if (!rosidl_runtime_c__float__Sequence__init(&msg->visibility, 0)) {
    robocup_ssl_msgs__msg__TrackedBall__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__TrackedBall__fini(robocup_ssl_msgs__msg__TrackedBall * msg)
{
  if (!msg) {
    return;
  }
  // pos
  robocup_ssl_msgs__msg__Vector3__fini(&msg->pos);
  // vel
  robocup_ssl_msgs__msg__Vector3__Sequence__fini(&msg->vel);
  // visibility
  rosidl_runtime_c__float__Sequence__fini(&msg->visibility);
}

bool
robocup_ssl_msgs__msg__TrackedBall__are_equal(const robocup_ssl_msgs__msg__TrackedBall * lhs, const robocup_ssl_msgs__msg__TrackedBall * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector3__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // vel
  if (!robocup_ssl_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->vel), &(rhs->vel)))
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
robocup_ssl_msgs__msg__TrackedBall__copy(
  const robocup_ssl_msgs__msg__TrackedBall * input,
  robocup_ssl_msgs__msg__TrackedBall * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  if (!robocup_ssl_msgs__msg__Vector3__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // vel
  if (!robocup_ssl_msgs__msg__Vector3__Sequence__copy(
      &(input->vel), &(output->vel)))
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

robocup_ssl_msgs__msg__TrackedBall *
robocup_ssl_msgs__msg__TrackedBall__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedBall * msg = (robocup_ssl_msgs__msg__TrackedBall *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TrackedBall), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__TrackedBall));
  bool success = robocup_ssl_msgs__msg__TrackedBall__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__TrackedBall__destroy(robocup_ssl_msgs__msg__TrackedBall * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__TrackedBall__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__TrackedBall__Sequence__init(robocup_ssl_msgs__msg__TrackedBall__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedBall * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__TrackedBall *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__TrackedBall), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__TrackedBall__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__TrackedBall__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__TrackedBall__Sequence__fini(robocup_ssl_msgs__msg__TrackedBall__Sequence * array)
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
      robocup_ssl_msgs__msg__TrackedBall__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__TrackedBall__Sequence *
robocup_ssl_msgs__msg__TrackedBall__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TrackedBall__Sequence * array = (robocup_ssl_msgs__msg__TrackedBall__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TrackedBall__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__TrackedBall__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__TrackedBall__Sequence__destroy(robocup_ssl_msgs__msg__TrackedBall__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__TrackedBall__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__TrackedBall__Sequence__are_equal(const robocup_ssl_msgs__msg__TrackedBall__Sequence * lhs, const robocup_ssl_msgs__msg__TrackedBall__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__TrackedBall__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__TrackedBall__Sequence__copy(
  const robocup_ssl_msgs__msg__TrackedBall__Sequence * input,
  robocup_ssl_msgs__msg__TrackedBall__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__TrackedBall);
    robocup_ssl_msgs__msg__TrackedBall * data =
      (robocup_ssl_msgs__msg__TrackedBall *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__TrackedBall__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__TrackedBall__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__TrackedBall__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
