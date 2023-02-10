// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/GeometryFieldSize.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `field_lines`
#include "robocup_ssl_msgs/msg/detail/field_line_segment__functions.h"
// Member `field_arcs`
#include "robocup_ssl_msgs/msg/detail/field_circular_arc__functions.h"
// Member `penalty_area_depth`
// Member `penalty_area_width`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__GeometryFieldSize__init(robocup_ssl_msgs__msg__GeometryFieldSize * msg)
{
  if (!msg) {
    return false;
  }
  // field_length
  // field_width
  // goal_width
  // goal_depth
  // boundary_width
  // field_lines
  if (!robocup_ssl_msgs__msg__FieldLineSegment__Sequence__init(&msg->field_lines, 0)) {
    robocup_ssl_msgs__msg__GeometryFieldSize__fini(msg);
    return false;
  }
  // field_arcs
  if (!robocup_ssl_msgs__msg__FieldCircularArc__Sequence__init(&msg->field_arcs, 0)) {
    robocup_ssl_msgs__msg__GeometryFieldSize__fini(msg);
    return false;
  }
  // penalty_area_depth
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->penalty_area_depth, 0)) {
    robocup_ssl_msgs__msg__GeometryFieldSize__fini(msg);
    return false;
  }
  // penalty_area_width
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->penalty_area_width, 0)) {
    robocup_ssl_msgs__msg__GeometryFieldSize__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__GeometryFieldSize__fini(robocup_ssl_msgs__msg__GeometryFieldSize * msg)
{
  if (!msg) {
    return;
  }
  // field_length
  // field_width
  // goal_width
  // goal_depth
  // boundary_width
  // field_lines
  robocup_ssl_msgs__msg__FieldLineSegment__Sequence__fini(&msg->field_lines);
  // field_arcs
  robocup_ssl_msgs__msg__FieldCircularArc__Sequence__fini(&msg->field_arcs);
  // penalty_area_depth
  rosidl_runtime_c__int32__Sequence__fini(&msg->penalty_area_depth);
  // penalty_area_width
  rosidl_runtime_c__int32__Sequence__fini(&msg->penalty_area_width);
}

bool
robocup_ssl_msgs__msg__GeometryFieldSize__are_equal(const robocup_ssl_msgs__msg__GeometryFieldSize * lhs, const robocup_ssl_msgs__msg__GeometryFieldSize * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // field_length
  if (lhs->field_length != rhs->field_length) {
    return false;
  }
  // field_width
  if (lhs->field_width != rhs->field_width) {
    return false;
  }
  // goal_width
  if (lhs->goal_width != rhs->goal_width) {
    return false;
  }
  // goal_depth
  if (lhs->goal_depth != rhs->goal_depth) {
    return false;
  }
  // boundary_width
  if (lhs->boundary_width != rhs->boundary_width) {
    return false;
  }
  // field_lines
  if (!robocup_ssl_msgs__msg__FieldLineSegment__Sequence__are_equal(
      &(lhs->field_lines), &(rhs->field_lines)))
  {
    return false;
  }
  // field_arcs
  if (!robocup_ssl_msgs__msg__FieldCircularArc__Sequence__are_equal(
      &(lhs->field_arcs), &(rhs->field_arcs)))
  {
    return false;
  }
  // penalty_area_depth
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->penalty_area_depth), &(rhs->penalty_area_depth)))
  {
    return false;
  }
  // penalty_area_width
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->penalty_area_width), &(rhs->penalty_area_width)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryFieldSize__copy(
  const robocup_ssl_msgs__msg__GeometryFieldSize * input,
  robocup_ssl_msgs__msg__GeometryFieldSize * output)
{
  if (!input || !output) {
    return false;
  }
  // field_length
  output->field_length = input->field_length;
  // field_width
  output->field_width = input->field_width;
  // goal_width
  output->goal_width = input->goal_width;
  // goal_depth
  output->goal_depth = input->goal_depth;
  // boundary_width
  output->boundary_width = input->boundary_width;
  // field_lines
  if (!robocup_ssl_msgs__msg__FieldLineSegment__Sequence__copy(
      &(input->field_lines), &(output->field_lines)))
  {
    return false;
  }
  // field_arcs
  if (!robocup_ssl_msgs__msg__FieldCircularArc__Sequence__copy(
      &(input->field_arcs), &(output->field_arcs)))
  {
    return false;
  }
  // penalty_area_depth
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->penalty_area_depth), &(output->penalty_area_depth)))
  {
    return false;
  }
  // penalty_area_width
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->penalty_area_width), &(output->penalty_area_width)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__GeometryFieldSize *
robocup_ssl_msgs__msg__GeometryFieldSize__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryFieldSize * msg = (robocup_ssl_msgs__msg__GeometryFieldSize *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryFieldSize), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__GeometryFieldSize));
  bool success = robocup_ssl_msgs__msg__GeometryFieldSize__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__GeometryFieldSize__destroy(robocup_ssl_msgs__msg__GeometryFieldSize * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__GeometryFieldSize__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__init(robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryFieldSize * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__GeometryFieldSize *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__GeometryFieldSize), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__GeometryFieldSize__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__GeometryFieldSize__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__fini(robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * array)
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
      robocup_ssl_msgs__msg__GeometryFieldSize__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__GeometryFieldSize__Sequence *
robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * array = (robocup_ssl_msgs__msg__GeometryFieldSize__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryFieldSize__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__destroy(robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__are_equal(const robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * lhs, const robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__GeometryFieldSize__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryFieldSize__Sequence__copy(
  const robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * input,
  robocup_ssl_msgs__msg__GeometryFieldSize__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__GeometryFieldSize);
    robocup_ssl_msgs__msg__GeometryFieldSize * data =
      (robocup_ssl_msgs__msg__GeometryFieldSize *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__GeometryFieldSize__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__GeometryFieldSize__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__GeometryFieldSize__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
