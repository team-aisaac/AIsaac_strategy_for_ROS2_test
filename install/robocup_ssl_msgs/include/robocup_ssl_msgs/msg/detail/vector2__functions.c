// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/vector2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robocup_ssl_msgs__msg__Vector2__init(robocup_ssl_msgs__msg__Vector2 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
robocup_ssl_msgs__msg__Vector2__fini(robocup_ssl_msgs__msg__Vector2 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
robocup_ssl_msgs__msg__Vector2__are_equal(const robocup_ssl_msgs__msg__Vector2 * lhs, const robocup_ssl_msgs__msg__Vector2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Vector2__copy(
  const robocup_ssl_msgs__msg__Vector2 * input,
  robocup_ssl_msgs__msg__Vector2 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

robocup_ssl_msgs__msg__Vector2 *
robocup_ssl_msgs__msg__Vector2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Vector2 * msg = (robocup_ssl_msgs__msg__Vector2 *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Vector2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__Vector2));
  bool success = robocup_ssl_msgs__msg__Vector2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__Vector2__destroy(robocup_ssl_msgs__msg__Vector2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__Vector2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__Vector2__Sequence__init(robocup_ssl_msgs__msg__Vector2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Vector2 * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__Vector2 *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__Vector2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__Vector2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__Vector2__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__Vector2__Sequence__fini(robocup_ssl_msgs__msg__Vector2__Sequence * array)
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
      robocup_ssl_msgs__msg__Vector2__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__Vector2__Sequence *
robocup_ssl_msgs__msg__Vector2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Vector2__Sequence * array = (robocup_ssl_msgs__msg__Vector2__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Vector2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__Vector2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__Vector2__Sequence__destroy(robocup_ssl_msgs__msg__Vector2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__Vector2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__Vector2__Sequence__are_equal(const robocup_ssl_msgs__msg__Vector2__Sequence * lhs, const robocup_ssl_msgs__msg__Vector2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__Vector2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Vector2__Sequence__copy(
  const robocup_ssl_msgs__msg__Vector2__Sequence * input,
  robocup_ssl_msgs__msg__Vector2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__Vector2);
    robocup_ssl_msgs__msg__Vector2 * data =
      (robocup_ssl_msgs__msg__Vector2 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__Vector2__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__Vector2__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__Vector2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
