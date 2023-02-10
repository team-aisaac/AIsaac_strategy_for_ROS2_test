// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:msg/ConstraintTheta.idl
// generated code does not contain a copyright notice
#include "consai_msgs/msg/detail/constraint_theta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `value_theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `object`
#include "consai_msgs/msg/detail/constraint_object__functions.h"

bool
consai_msgs__msg__ConstraintTheta__init(consai_msgs__msg__ConstraintTheta * msg)
{
  if (!msg) {
    return false;
  }
  // value_theta
  if (!rosidl_runtime_c__double__Sequence__init(&msg->value_theta, 0)) {
    consai_msgs__msg__ConstraintTheta__fini(msg);
    return false;
  }
  // object
  if (!consai_msgs__msg__ConstraintObject__Sequence__init(&msg->object, 0)) {
    consai_msgs__msg__ConstraintTheta__fini(msg);
    return false;
  }
  // param
  msg->param = 0ul;
  return true;
}

void
consai_msgs__msg__ConstraintTheta__fini(consai_msgs__msg__ConstraintTheta * msg)
{
  if (!msg) {
    return;
  }
  // value_theta
  rosidl_runtime_c__double__Sequence__fini(&msg->value_theta);
  // object
  consai_msgs__msg__ConstraintObject__Sequence__fini(&msg->object);
  // param
}

bool
consai_msgs__msg__ConstraintTheta__are_equal(const consai_msgs__msg__ConstraintTheta * lhs, const consai_msgs__msg__ConstraintTheta * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value_theta
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->value_theta), &(rhs->value_theta)))
  {
    return false;
  }
  // object
  if (!consai_msgs__msg__ConstraintObject__Sequence__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // param
  if (lhs->param != rhs->param) {
    return false;
  }
  return true;
}

bool
consai_msgs__msg__ConstraintTheta__copy(
  const consai_msgs__msg__ConstraintTheta * input,
  consai_msgs__msg__ConstraintTheta * output)
{
  if (!input || !output) {
    return false;
  }
  // value_theta
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->value_theta), &(output->value_theta)))
  {
    return false;
  }
  // object
  if (!consai_msgs__msg__ConstraintObject__Sequence__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // param
  output->param = input->param;
  return true;
}

consai_msgs__msg__ConstraintTheta *
consai_msgs__msg__ConstraintTheta__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintTheta * msg = (consai_msgs__msg__ConstraintTheta *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintTheta), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__msg__ConstraintTheta));
  bool success = consai_msgs__msg__ConstraintTheta__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__msg__ConstraintTheta__destroy(consai_msgs__msg__ConstraintTheta * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__msg__ConstraintTheta__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__msg__ConstraintTheta__Sequence__init(consai_msgs__msg__ConstraintTheta__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintTheta * data = NULL;

  if (size) {
    data = (consai_msgs__msg__ConstraintTheta *)allocator.zero_allocate(size, sizeof(consai_msgs__msg__ConstraintTheta), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__msg__ConstraintTheta__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__msg__ConstraintTheta__fini(&data[i - 1]);
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
consai_msgs__msg__ConstraintTheta__Sequence__fini(consai_msgs__msg__ConstraintTheta__Sequence * array)
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
      consai_msgs__msg__ConstraintTheta__fini(&array->data[i]);
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

consai_msgs__msg__ConstraintTheta__Sequence *
consai_msgs__msg__ConstraintTheta__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintTheta__Sequence * array = (consai_msgs__msg__ConstraintTheta__Sequence *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintTheta__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__msg__ConstraintTheta__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__msg__ConstraintTheta__Sequence__destroy(consai_msgs__msg__ConstraintTheta__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__msg__ConstraintTheta__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__msg__ConstraintTheta__Sequence__are_equal(const consai_msgs__msg__ConstraintTheta__Sequence * lhs, const consai_msgs__msg__ConstraintTheta__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__msg__ConstraintTheta__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__msg__ConstraintTheta__Sequence__copy(
  const consai_msgs__msg__ConstraintTheta__Sequence * input,
  consai_msgs__msg__ConstraintTheta__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__msg__ConstraintTheta);
    consai_msgs__msg__ConstraintTheta * data =
      (consai_msgs__msg__ConstraintTheta *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__msg__ConstraintTheta__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__msg__ConstraintTheta__fini(&data[i]);
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
    if (!consai_msgs__msg__ConstraintTheta__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
