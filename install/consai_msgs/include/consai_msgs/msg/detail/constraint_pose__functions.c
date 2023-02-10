// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:msg/ConstraintPose.idl
// generated code does not contain a copyright notice
#include "consai_msgs/msg/detail/constraint_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `xy`
#include "consai_msgs/msg/detail/constraint_xy__functions.h"
// Member `theta`
#include "consai_msgs/msg/detail/constraint_theta__functions.h"
// Member `offset`
#include "consai_msgs/msg/detail/state2_d__functions.h"

bool
consai_msgs__msg__ConstraintPose__init(consai_msgs__msg__ConstraintPose * msg)
{
  if (!msg) {
    return false;
  }
  // xy
  if (!consai_msgs__msg__ConstraintXY__init(&msg->xy)) {
    consai_msgs__msg__ConstraintPose__fini(msg);
    return false;
  }
  // theta
  if (!consai_msgs__msg__ConstraintTheta__init(&msg->theta)) {
    consai_msgs__msg__ConstraintPose__fini(msg);
    return false;
  }
  // offset
  if (!consai_msgs__msg__State2D__init(&msg->offset)) {
    consai_msgs__msg__ConstraintPose__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__msg__ConstraintPose__fini(consai_msgs__msg__ConstraintPose * msg)
{
  if (!msg) {
    return;
  }
  // xy
  consai_msgs__msg__ConstraintXY__fini(&msg->xy);
  // theta
  consai_msgs__msg__ConstraintTheta__fini(&msg->theta);
  // offset
  consai_msgs__msg__State2D__fini(&msg->offset);
}

bool
consai_msgs__msg__ConstraintPose__are_equal(const consai_msgs__msg__ConstraintPose * lhs, const consai_msgs__msg__ConstraintPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xy
  if (!consai_msgs__msg__ConstraintXY__are_equal(
      &(lhs->xy), &(rhs->xy)))
  {
    return false;
  }
  // theta
  if (!consai_msgs__msg__ConstraintTheta__are_equal(
      &(lhs->theta), &(rhs->theta)))
  {
    return false;
  }
  // offset
  if (!consai_msgs__msg__State2D__are_equal(
      &(lhs->offset), &(rhs->offset)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__msg__ConstraintPose__copy(
  const consai_msgs__msg__ConstraintPose * input,
  consai_msgs__msg__ConstraintPose * output)
{
  if (!input || !output) {
    return false;
  }
  // xy
  if (!consai_msgs__msg__ConstraintXY__copy(
      &(input->xy), &(output->xy)))
  {
    return false;
  }
  // theta
  if (!consai_msgs__msg__ConstraintTheta__copy(
      &(input->theta), &(output->theta)))
  {
    return false;
  }
  // offset
  if (!consai_msgs__msg__State2D__copy(
      &(input->offset), &(output->offset)))
  {
    return false;
  }
  return true;
}

consai_msgs__msg__ConstraintPose *
consai_msgs__msg__ConstraintPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintPose * msg = (consai_msgs__msg__ConstraintPose *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__msg__ConstraintPose));
  bool success = consai_msgs__msg__ConstraintPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__msg__ConstraintPose__destroy(consai_msgs__msg__ConstraintPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__msg__ConstraintPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__msg__ConstraintPose__Sequence__init(consai_msgs__msg__ConstraintPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintPose * data = NULL;

  if (size) {
    data = (consai_msgs__msg__ConstraintPose *)allocator.zero_allocate(size, sizeof(consai_msgs__msg__ConstraintPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__msg__ConstraintPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__msg__ConstraintPose__fini(&data[i - 1]);
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
consai_msgs__msg__ConstraintPose__Sequence__fini(consai_msgs__msg__ConstraintPose__Sequence * array)
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
      consai_msgs__msg__ConstraintPose__fini(&array->data[i]);
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

consai_msgs__msg__ConstraintPose__Sequence *
consai_msgs__msg__ConstraintPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintPose__Sequence * array = (consai_msgs__msg__ConstraintPose__Sequence *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__msg__ConstraintPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__msg__ConstraintPose__Sequence__destroy(consai_msgs__msg__ConstraintPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__msg__ConstraintPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__msg__ConstraintPose__Sequence__are_equal(const consai_msgs__msg__ConstraintPose__Sequence * lhs, const consai_msgs__msg__ConstraintPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__msg__ConstraintPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__msg__ConstraintPose__Sequence__copy(
  const consai_msgs__msg__ConstraintPose__Sequence * input,
  consai_msgs__msg__ConstraintPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__msg__ConstraintPose);
    consai_msgs__msg__ConstraintPose * data =
      (consai_msgs__msg__ConstraintPose *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__msg__ConstraintPose__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__msg__ConstraintPose__fini(&data[i]);
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
    if (!consai_msgs__msg__ConstraintPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
