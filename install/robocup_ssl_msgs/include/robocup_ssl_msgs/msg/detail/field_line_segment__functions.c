// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/FieldLineSegment.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/field_line_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `p1`
// Member `p2`
#include "robocup_ssl_msgs/msg/detail/vector2f__functions.h"
// Member `type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__FieldLineSegment__init(robocup_ssl_msgs__msg__FieldLineSegment * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    robocup_ssl_msgs__msg__FieldLineSegment__fini(msg);
    return false;
  }
  // p1
  if (!robocup_ssl_msgs__msg__Vector2f__init(&msg->p1)) {
    robocup_ssl_msgs__msg__FieldLineSegment__fini(msg);
    return false;
  }
  // p2
  if (!robocup_ssl_msgs__msg__Vector2f__init(&msg->p2)) {
    robocup_ssl_msgs__msg__FieldLineSegment__fini(msg);
    return false;
  }
  // thickness
  // type
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->type, 0)) {
    robocup_ssl_msgs__msg__FieldLineSegment__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__FieldLineSegment__fini(robocup_ssl_msgs__msg__FieldLineSegment * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // p1
  robocup_ssl_msgs__msg__Vector2f__fini(&msg->p1);
  // p2
  robocup_ssl_msgs__msg__Vector2f__fini(&msg->p2);
  // thickness
  // type
  rosidl_runtime_c__uint32__Sequence__fini(&msg->type);
}

bool
robocup_ssl_msgs__msg__FieldLineSegment__are_equal(const robocup_ssl_msgs__msg__FieldLineSegment * lhs, const robocup_ssl_msgs__msg__FieldLineSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // p1
  if (!robocup_ssl_msgs__msg__Vector2f__are_equal(
      &(lhs->p1), &(rhs->p1)))
  {
    return false;
  }
  // p2
  if (!robocup_ssl_msgs__msg__Vector2f__are_equal(
      &(lhs->p2), &(rhs->p2)))
  {
    return false;
  }
  // thickness
  if (lhs->thickness != rhs->thickness) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__FieldLineSegment__copy(
  const robocup_ssl_msgs__msg__FieldLineSegment * input,
  robocup_ssl_msgs__msg__FieldLineSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // p1
  if (!robocup_ssl_msgs__msg__Vector2f__copy(
      &(input->p1), &(output->p1)))
  {
    return false;
  }
  // p2
  if (!robocup_ssl_msgs__msg__Vector2f__copy(
      &(input->p2), &(output->p2)))
  {
    return false;
  }
  // thickness
  output->thickness = input->thickness;
  // type
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__FieldLineSegment *
robocup_ssl_msgs__msg__FieldLineSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__FieldLineSegment * msg = (robocup_ssl_msgs__msg__FieldLineSegment *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__FieldLineSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__FieldLineSegment));
  bool success = robocup_ssl_msgs__msg__FieldLineSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__FieldLineSegment__destroy(robocup_ssl_msgs__msg__FieldLineSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__FieldLineSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__FieldLineSegment__Sequence__init(robocup_ssl_msgs__msg__FieldLineSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__FieldLineSegment * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__FieldLineSegment *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__FieldLineSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__FieldLineSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__FieldLineSegment__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__FieldLineSegment__Sequence__fini(robocup_ssl_msgs__msg__FieldLineSegment__Sequence * array)
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
      robocup_ssl_msgs__msg__FieldLineSegment__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__FieldLineSegment__Sequence *
robocup_ssl_msgs__msg__FieldLineSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__FieldLineSegment__Sequence * array = (robocup_ssl_msgs__msg__FieldLineSegment__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__FieldLineSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__FieldLineSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__FieldLineSegment__Sequence__destroy(robocup_ssl_msgs__msg__FieldLineSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__FieldLineSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__FieldLineSegment__Sequence__are_equal(const robocup_ssl_msgs__msg__FieldLineSegment__Sequence * lhs, const robocup_ssl_msgs__msg__FieldLineSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__FieldLineSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__FieldLineSegment__Sequence__copy(
  const robocup_ssl_msgs__msg__FieldLineSegment__Sequence * input,
  robocup_ssl_msgs__msg__FieldLineSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__FieldLineSegment);
    robocup_ssl_msgs__msg__FieldLineSegment * data =
      (robocup_ssl_msgs__msg__FieldLineSegment *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__FieldLineSegment__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__FieldLineSegment__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__FieldLineSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
