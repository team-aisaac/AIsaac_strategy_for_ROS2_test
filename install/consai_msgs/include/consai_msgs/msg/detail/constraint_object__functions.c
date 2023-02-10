// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:msg/ConstraintObject.idl
// generated code does not contain a copyright notice
#include "consai_msgs/msg/detail/constraint_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
consai_msgs__msg__ConstraintObject__init(consai_msgs__msg__ConstraintObject * msg)
{
  if (!msg) {
    return false;
  }
  // type
  msg->type = 0ul;
  // robot_id
  msg->robot_id = 99ul;
  return true;
}

void
consai_msgs__msg__ConstraintObject__fini(consai_msgs__msg__ConstraintObject * msg)
{
  if (!msg) {
    return;
  }
  // type
  // robot_id
}

bool
consai_msgs__msg__ConstraintObject__are_equal(const consai_msgs__msg__ConstraintObject * lhs, const consai_msgs__msg__ConstraintObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  return true;
}

bool
consai_msgs__msg__ConstraintObject__copy(
  const consai_msgs__msg__ConstraintObject * input,
  consai_msgs__msg__ConstraintObject * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // robot_id
  output->robot_id = input->robot_id;
  return true;
}

consai_msgs__msg__ConstraintObject *
consai_msgs__msg__ConstraintObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintObject * msg = (consai_msgs__msg__ConstraintObject *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__msg__ConstraintObject));
  bool success = consai_msgs__msg__ConstraintObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__msg__ConstraintObject__destroy(consai_msgs__msg__ConstraintObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__msg__ConstraintObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__msg__ConstraintObject__Sequence__init(consai_msgs__msg__ConstraintObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintObject * data = NULL;

  if (size) {
    data = (consai_msgs__msg__ConstraintObject *)allocator.zero_allocate(size, sizeof(consai_msgs__msg__ConstraintObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__msg__ConstraintObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__msg__ConstraintObject__fini(&data[i - 1]);
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
consai_msgs__msg__ConstraintObject__Sequence__fini(consai_msgs__msg__ConstraintObject__Sequence * array)
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
      consai_msgs__msg__ConstraintObject__fini(&array->data[i]);
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

consai_msgs__msg__ConstraintObject__Sequence *
consai_msgs__msg__ConstraintObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ConstraintObject__Sequence * array = (consai_msgs__msg__ConstraintObject__Sequence *)allocator.allocate(sizeof(consai_msgs__msg__ConstraintObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__msg__ConstraintObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__msg__ConstraintObject__Sequence__destroy(consai_msgs__msg__ConstraintObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__msg__ConstraintObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__msg__ConstraintObject__Sequence__are_equal(const consai_msgs__msg__ConstraintObject__Sequence * lhs, const consai_msgs__msg__ConstraintObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__msg__ConstraintObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__msg__ConstraintObject__Sequence__copy(
  const consai_msgs__msg__ConstraintObject__Sequence * input,
  consai_msgs__msg__ConstraintObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__msg__ConstraintObject);
    consai_msgs__msg__ConstraintObject * data =
      (consai_msgs__msg__ConstraintObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__msg__ConstraintObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__msg__ConstraintObject__fini(&data[i]);
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
    if (!consai_msgs__msg__ConstraintObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
