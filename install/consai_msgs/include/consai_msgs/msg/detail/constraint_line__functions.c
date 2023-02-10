// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:msg/ConstraintLine.idl
// generated code does not contain a copyright notice
#include "consai_msgs/msg/detail/constraint_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `p1`
// Member `p2`
// Member `p3`
// Member `p4`
#include "consai_msgs/msg/detail/constraint_xy__functions.h"
// Member `theta`
#include "consai_msgs/msg/detail/constraint_theta__functions.h"

bool
consai_msgs__msg__ConstraintLine__init(consai_msgs__msg__ConstraintLine * msg)
{
  if (!msg) {
    return false;
  }
  // p1
  if (!consai_msgs__msg__ConstraintXY__init(&msg->p1)) {
    consai_msgs__msg__ConstraintLine__fini(msg);
    return false;
  }
  // p2
  if (!consai_msgs__msg__ConstraintXY__init(&msg->p2)) {
    consai_msgs__msg__ConstraintLine__fini(msg);
    return false;
  }
  // distance
  // theta
  if (!consai_msgs__msg__ConstraintTheta__init(&msg->theta)) {
    consai_msgs__msg__ConstraintLine__fini(msg);
    return false;
  }
  // p3
  if (!consai_msgs__msg__ConstraintXY__Sequence__init(&msg->p3, 0)) {
    consai_msgs__msg__ConstraintLine__fini(msg);
    return false;
  }
  // p4
  if (!consai_msgs__msg__ConstraintXY__Sequence__init(&msg->p4, 0)) {
    consai_msgs__msg__ConstraintLine__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__msg__ConstraintLine__fini(consai_msgs__msg__ConstraintLine * msg)
{
  if (!msg) {
    return;
  }
  // p1
  consai_msgs__msg__ConstraintXY__fini(&msg->p1);
  // p2
  consai_msgs__msg__ConstraintXY__fini(&msg->p2);
  // distance
  // theta
  consai_msgs__msg__ConstraintTheta__fini(&msg->theta);
  // p3
  consai_msgs__msg__ConstraintXY__Sequence__fini(&msg->p3);
  // p4
  consai_msgs__msg__ConstraintXY__Sequence__fini(&msg->p4);
}

bool
consai_msgs__msg__ConstraintLine__are_equal(const consai_msgs__msg__ConstraintLine * lhs, const consai_msgs__msg__ConstraintLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // p1
  if (!consai_msgs__msg__ConstraintXY__are_equal(
      &(lhs->p1), &(rhs->p1)))
  {
    return false;
  }
  // p2
  if (!consai_msgs__msg__ConstraintXY__are_equal(
      &(lhs->p2), &(rhs->p2)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // theta
  if (!consai_msgs__msg__ConstraintTheta__are_equal(
      &(lhs->theta), &(rhs->theta)))
  {
    return false;
  }
  // p3
  if (!consai_msgs__msg__ConstraintXY__Sequence__are_equal(
      &(lhs->p3), &(rhs->p3)))
  {
    return false;
  }
  // p4
  if (!consai_msgs__msg__ConstraintXY__Sequence__are_equal(
      &(lhs->p4), &(rhs->p4)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__msg__ConstraintLine__copy(
  const consai_msgs__msg__ConstraintLine * input,
  consai_msgs__msg__ConstraintLine * output)
{
  if (!input || !output) {
    return false;
  }
  // p1
  if (!consai_msgs__msg__ConstraintXY__copy(
      &(input->p1), &(output->p1)))
  {
    return false;
  }
  // p2
  if (!consai_msgs__msg__ConstraintXY__copy(
      &(input->p2), &(output->p2)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // theta
  if (!consai_msgs__msg__ConstraintTheta__copy(
      &(input->theta), &(output->theta)))
  {
    return false;
  }
  // p3
  if (!consai_msgs__msg__ConstraintXY__Sequence__copy(
      &(input->p3), &(output->p3)))
  {
    return false;
  }
  // p4
  if (!consai_msgs__msg__ConstraintXY__Sequence__copy(
      &(input->p4), &(output->p4)))
  {
    return false;
  }
  return true;
}

consai_msgs__msg__ConstraintLine *
consai_msgs__msg__ConstraintLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintLine * msg = (consai_msgs__msg__ConstraintLine *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__msg__ConstraintLine));
  bool success = consai_msgs__msg__ConstraintLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__msg__ConstraintLine__destroy(consai_msgs__msg__ConstraintLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__msg__ConstraintLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__msg__ConstraintLine__Sequence__init(consai_msgs__msg__ConstraintLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintLine * data = NULL;

  if (size) {
    data = (consai_msgs__msg__ConstraintLine *)allocator.zero_allocate(size, sizeof(consai_msgs__msg__ConstraintLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__msg__ConstraintLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__msg__ConstraintLine__fini(&data[i - 1]);
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
consai_msgs__msg__ConstraintLine__Sequence__fini(consai_msgs__msg__ConstraintLine__Sequence * array)
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
      consai_msgs__msg__ConstraintLine__fini(&array->data[i]);
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

consai_msgs__msg__ConstraintLine__Sequence *
consai_msgs__msg__ConstraintLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintLine__Sequence * array = (consai_msgs__msg__ConstraintLine__Sequence *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__msg__ConstraintLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__msg__ConstraintLine__Sequence__destroy(consai_msgs__msg__ConstraintLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__msg__ConstraintLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__msg__ConstraintLine__Sequence__are_equal(const consai_msgs__msg__ConstraintLine__Sequence * lhs, const consai_msgs__msg__ConstraintLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__msg__ConstraintLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__msg__ConstraintLine__Sequence__copy(
  const consai_msgs__msg__ConstraintLine__Sequence * input,
  consai_msgs__msg__ConstraintLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__msg__ConstraintLine);
    consai_msgs__msg__ConstraintLine * data =
      (consai_msgs__msg__ConstraintLine *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__msg__ConstraintLine__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__msg__ConstraintLine__fini(&data[i]);
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
    if (!consai_msgs__msg__ConstraintLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
