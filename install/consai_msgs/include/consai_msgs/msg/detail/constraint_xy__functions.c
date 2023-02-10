// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:msg/ConstraintXY.idl
// generated code does not contain a copyright notice
#include "consai_msgs/msg/detail/constraint_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `value_x`
// Member `value_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `object`
#include "consai_msgs/msg/detail/constraint_object__functions.h"

bool
consai_msgs__msg__ConstraintXY__init(consai_msgs__msg__ConstraintXY * msg)
{
  if (!msg) {
    return false;
  }
  // normalized
  msg->normalized = false;
  // value_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->value_x, 0)) {
    consai_msgs__msg__ConstraintXY__fini(msg);
    return false;
  }
  // value_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->value_y, 0)) {
    consai_msgs__msg__ConstraintXY__fini(msg);
    return false;
  }
  // object
  if (!consai_msgs__msg__ConstraintObject__Sequence__init(&msg->object, 0)) {
    consai_msgs__msg__ConstraintXY__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__msg__ConstraintXY__fini(consai_msgs__msg__ConstraintXY * msg)
{
  if (!msg) {
    return;
  }
  // normalized
  // value_x
  rosidl_runtime_c__double__Sequence__fini(&msg->value_x);
  // value_y
  rosidl_runtime_c__double__Sequence__fini(&msg->value_y);
  // object
  consai_msgs__msg__ConstraintObject__Sequence__fini(&msg->object);
}

bool
consai_msgs__msg__ConstraintXY__are_equal(const consai_msgs__msg__ConstraintXY * lhs, const consai_msgs__msg__ConstraintXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // normalized
  if (lhs->normalized != rhs->normalized) {
    return false;
  }
  // value_x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->value_x), &(rhs->value_x)))
  {
    return false;
  }
  // value_y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->value_y), &(rhs->value_y)))
  {
    return false;
  }
  // object
  if (!consai_msgs__msg__ConstraintObject__Sequence__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__msg__ConstraintXY__copy(
  const consai_msgs__msg__ConstraintXY * input,
  consai_msgs__msg__ConstraintXY * output)
{
  if (!input || !output) {
    return false;
  }
  // normalized
  output->normalized = input->normalized;
  // value_x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->value_x), &(output->value_x)))
  {
    return false;
  }
  // value_y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->value_y), &(output->value_y)))
  {
    return false;
  }
  // object
  if (!consai_msgs__msg__ConstraintObject__Sequence__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  return true;
}

consai_msgs__msg__ConstraintXY *
consai_msgs__msg__ConstraintXY__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintXY * msg = (consai_msgs__msg__ConstraintXY *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__msg__ConstraintXY));
  bool success = consai_msgs__msg__ConstraintXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__msg__ConstraintXY__destroy(consai_msgs__msg__ConstraintXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__msg__ConstraintXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__msg__ConstraintXY__Sequence__init(consai_msgs__msg__ConstraintXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintXY * data = NULL;

  if (size) {
    data = (consai_msgs__msg__ConstraintXY *)allocator.zero_allocate(size, sizeof(consai_msgs__msg__ConstraintXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__msg__ConstraintXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__msg__ConstraintXY__fini(&data[i - 1]);
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
consai_msgs__msg__ConstraintXY__Sequence__fini(consai_msgs__msg__ConstraintXY__Sequence * array)
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
      consai_msgs__msg__ConstraintXY__fini(&array->data[i]);
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

consai_msgs__msg__ConstraintXY__Sequence *
consai_msgs__msg__ConstraintXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintXY__Sequence * array = (consai_msgs__msg__ConstraintXY__Sequence *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__msg__ConstraintXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__msg__ConstraintXY__Sequence__destroy(consai_msgs__msg__ConstraintXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__msg__ConstraintXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__msg__ConstraintXY__Sequence__are_equal(const consai_msgs__msg__ConstraintXY__Sequence * lhs, const consai_msgs__msg__ConstraintXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__msg__ConstraintXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__msg__ConstraintXY__Sequence__copy(
  const consai_msgs__msg__ConstraintXY__Sequence * input,
  consai_msgs__msg__ConstraintXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__msg__ConstraintXY);
    consai_msgs__msg__ConstraintXY * data =
      (consai_msgs__msg__ConstraintXY *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__msg__ConstraintXY__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__msg__ConstraintXY__fini(&data[i]);
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
    if (!consai_msgs__msg__ConstraintXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
