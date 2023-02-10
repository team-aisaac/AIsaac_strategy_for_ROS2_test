// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/FieldCircularArc.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/field_circular_arc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `center`
#include "robocup_ssl_msgs/msg/detail/vector2f__functions.h"
// Member `type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__FieldCircularArc__init(robocup_ssl_msgs__msg__FieldCircularArc * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    robocup_ssl_msgs__msg__FieldCircularArc__fini(msg);
    return false;
  }
  // center
  if (!robocup_ssl_msgs__msg__Vector2f__init(&msg->center)) {
    robocup_ssl_msgs__msg__FieldCircularArc__fini(msg);
    return false;
  }
  // radius
  // a1
  // a2
  // thickness
  // type
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->type, 0)) {
    robocup_ssl_msgs__msg__FieldCircularArc__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__FieldCircularArc__fini(robocup_ssl_msgs__msg__FieldCircularArc * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // center
  robocup_ssl_msgs__msg__Vector2f__fini(&msg->center);
  // radius
  // a1
  // a2
  // thickness
  // type
  rosidl_runtime_c__uint32__Sequence__fini(&msg->type);
}

bool
robocup_ssl_msgs__msg__FieldCircularArc__are_equal(const robocup_ssl_msgs__msg__FieldCircularArc * lhs, const robocup_ssl_msgs__msg__FieldCircularArc * rhs)
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
  // center
  if (!robocup_ssl_msgs__msg__Vector2f__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // a1
  if (lhs->a1 != rhs->a1) {
    return false;
  }
  // a2
  if (lhs->a2 != rhs->a2) {
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
robocup_ssl_msgs__msg__FieldCircularArc__copy(
  const robocup_ssl_msgs__msg__FieldCircularArc * input,
  robocup_ssl_msgs__msg__FieldCircularArc * output)
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
  // center
  if (!robocup_ssl_msgs__msg__Vector2f__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  // a1
  output->a1 = input->a1;
  // a2
  output->a2 = input->a2;
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

robocup_ssl_msgs__msg__FieldCircularArc *
robocup_ssl_msgs__msg__FieldCircularArc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__FieldCircularArc * msg = (robocup_ssl_msgs__msg__FieldCircularArc *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__FieldCircularArc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__FieldCircularArc));
  bool success = robocup_ssl_msgs__msg__FieldCircularArc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__FieldCircularArc__destroy(robocup_ssl_msgs__msg__FieldCircularArc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__FieldCircularArc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__FieldCircularArc__Sequence__init(robocup_ssl_msgs__msg__FieldCircularArc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__FieldCircularArc * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__FieldCircularArc *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__FieldCircularArc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__FieldCircularArc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__FieldCircularArc__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__FieldCircularArc__Sequence__fini(robocup_ssl_msgs__msg__FieldCircularArc__Sequence * array)
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
      robocup_ssl_msgs__msg__FieldCircularArc__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__FieldCircularArc__Sequence *
robocup_ssl_msgs__msg__FieldCircularArc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__FieldCircularArc__Sequence * array = (robocup_ssl_msgs__msg__FieldCircularArc__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__FieldCircularArc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__FieldCircularArc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__FieldCircularArc__Sequence__destroy(robocup_ssl_msgs__msg__FieldCircularArc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__FieldCircularArc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__FieldCircularArc__Sequence__are_equal(const robocup_ssl_msgs__msg__FieldCircularArc__Sequence * lhs, const robocup_ssl_msgs__msg__FieldCircularArc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__FieldCircularArc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__FieldCircularArc__Sequence__copy(
  const robocup_ssl_msgs__msg__FieldCircularArc__Sequence * input,
  robocup_ssl_msgs__msg__FieldCircularArc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__FieldCircularArc);
    robocup_ssl_msgs__msg__FieldCircularArc * data =
      (robocup_ssl_msgs__msg__FieldCircularArc *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__FieldCircularArc__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__FieldCircularArc__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__FieldCircularArc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
