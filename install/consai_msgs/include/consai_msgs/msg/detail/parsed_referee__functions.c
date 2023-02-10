// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:msg/ParsedReferee.idl
// generated code does not contain a copyright notice
#include "consai_msgs/msg/detail/parsed_referee__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `designated_position`
#include "consai_msgs/msg/detail/state2_d__functions.h"

bool
consai_msgs__msg__ParsedReferee__init(consai_msgs__msg__ParsedReferee * msg)
{
  if (!msg) {
    return false;
  }
  // designated_position
  if (!consai_msgs__msg__State2D__init(&msg->designated_position)) {
    consai_msgs__msg__ParsedReferee__fini(msg);
    return false;
  }
  // is_placement
  // is_inplay
  // is_their_setplay
  // is_our_setplay
  return true;
}

void
consai_msgs__msg__ParsedReferee__fini(consai_msgs__msg__ParsedReferee * msg)
{
  if (!msg) {
    return;
  }
  // designated_position
  consai_msgs__msg__State2D__fini(&msg->designated_position);
  // is_placement
  // is_inplay
  // is_their_setplay
  // is_our_setplay
}

bool
consai_msgs__msg__ParsedReferee__are_equal(const consai_msgs__msg__ParsedReferee * lhs, const consai_msgs__msg__ParsedReferee * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // designated_position
  if (!consai_msgs__msg__State2D__are_equal(
      &(lhs->designated_position), &(rhs->designated_position)))
  {
    return false;
  }
  // is_placement
  if (lhs->is_placement != rhs->is_placement) {
    return false;
  }
  // is_inplay
  if (lhs->is_inplay != rhs->is_inplay) {
    return false;
  }
  // is_their_setplay
  if (lhs->is_their_setplay != rhs->is_their_setplay) {
    return false;
  }
  // is_our_setplay
  if (lhs->is_our_setplay != rhs->is_our_setplay) {
    return false;
  }
  return true;
}

bool
consai_msgs__msg__ParsedReferee__copy(
  const consai_msgs__msg__ParsedReferee * input,
  consai_msgs__msg__ParsedReferee * output)
{
  if (!input || !output) {
    return false;
  }
  // designated_position
  if (!consai_msgs__msg__State2D__copy(
      &(input->designated_position), &(output->designated_position)))
  {
    return false;
  }
  // is_placement
  output->is_placement = input->is_placement;
  // is_inplay
  output->is_inplay = input->is_inplay;
  // is_their_setplay
  output->is_their_setplay = input->is_their_setplay;
  // is_our_setplay
  output->is_our_setplay = input->is_our_setplay;
  return true;
}

consai_msgs__msg__ParsedReferee *
consai_msgs__msg__ParsedReferee__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ParsedReferee * msg = (consai_msgs__msg__ParsedReferee *)allocator.allocate(sizeof(consai_msgs__msg__ParsedReferee), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__msg__ParsedReferee));
  bool success = consai_msgs__msg__ParsedReferee__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__msg__ParsedReferee__destroy(consai_msgs__msg__ParsedReferee * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__msg__ParsedReferee__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__msg__ParsedReferee__Sequence__init(consai_msgs__msg__ParsedReferee__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ParsedReferee * data = NULL;

  if (size) {
    data = (consai_msgs__msg__ParsedReferee *)allocator.zero_allocate(size, sizeof(consai_msgs__msg__ParsedReferee), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__msg__ParsedReferee__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__msg__ParsedReferee__fini(&data[i - 1]);
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
consai_msgs__msg__ParsedReferee__Sequence__fini(consai_msgs__msg__ParsedReferee__Sequence * array)
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
      consai_msgs__msg__ParsedReferee__fini(&array->data[i]);
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

consai_msgs__msg__ParsedReferee__Sequence *
consai_msgs__msg__ParsedReferee__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__ParsedReferee__Sequence * array = (consai_msgs__msg__ParsedReferee__Sequence *)allocator.allocate(sizeof(consai_msgs__msg__ParsedReferee__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__msg__ParsedReferee__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__msg__ParsedReferee__Sequence__destroy(consai_msgs__msg__ParsedReferee__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__msg__ParsedReferee__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__msg__ParsedReferee__Sequence__are_equal(const consai_msgs__msg__ParsedReferee__Sequence * lhs, const consai_msgs__msg__ParsedReferee__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__msg__ParsedReferee__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__msg__ParsedReferee__Sequence__copy(
  const consai_msgs__msg__ParsedReferee__Sequence * input,
  consai_msgs__msg__ParsedReferee__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__msg__ParsedReferee);
    consai_msgs__msg__ParsedReferee * data =
      (consai_msgs__msg__ParsedReferee *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__msg__ParsedReferee__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__msg__ParsedReferee__fini(&data[i]);
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
    if (!consai_msgs__msg__ParsedReferee__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
