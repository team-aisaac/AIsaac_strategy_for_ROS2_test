// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/DetectionBall.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/detection_ball__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `area`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__DetectionBall__init(robocup_ssl_msgs__msg__DetectionBall * msg)
{
  if (!msg) {
    return false;
  }
  // confidence
  // area
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->area, 0)) {
    robocup_ssl_msgs__msg__DetectionBall__fini(msg);
    return false;
  }
  // x
  // y
  // z
  if (!rosidl_runtime_c__float__Sequence__init(&msg->z, 0)) {
    robocup_ssl_msgs__msg__DetectionBall__fini(msg);
    return false;
  }
  // pixel_x
  // pixel_y
  return true;
}

void
robocup_ssl_msgs__msg__DetectionBall__fini(robocup_ssl_msgs__msg__DetectionBall * msg)
{
  if (!msg) {
    return;
  }
  // confidence
  // area
  rosidl_runtime_c__uint32__Sequence__fini(&msg->area);
  // x
  // y
  // z
  rosidl_runtime_c__float__Sequence__fini(&msg->z);
  // pixel_x
  // pixel_y
}

bool
robocup_ssl_msgs__msg__DetectionBall__are_equal(const robocup_ssl_msgs__msg__DetectionBall * lhs, const robocup_ssl_msgs__msg__DetectionBall * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // area
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->area), &(rhs->area)))
  {
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
  // z
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  // pixel_x
  if (lhs->pixel_x != rhs->pixel_x) {
    return false;
  }
  // pixel_y
  if (lhs->pixel_y != rhs->pixel_y) {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__DetectionBall__copy(
  const robocup_ssl_msgs__msg__DetectionBall * input,
  robocup_ssl_msgs__msg__DetectionBall * output)
{
  if (!input || !output) {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // area
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->area), &(output->area)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  // pixel_x
  output->pixel_x = input->pixel_x;
  // pixel_y
  output->pixel_y = input->pixel_y;
  return true;
}

robocup_ssl_msgs__msg__DetectionBall *
robocup_ssl_msgs__msg__DetectionBall__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionBall * msg = (robocup_ssl_msgs__msg__DetectionBall *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__DetectionBall), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__DetectionBall));
  bool success = robocup_ssl_msgs__msg__DetectionBall__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__DetectionBall__destroy(robocup_ssl_msgs__msg__DetectionBall * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__DetectionBall__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__DetectionBall__Sequence__init(robocup_ssl_msgs__msg__DetectionBall__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionBall * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__DetectionBall *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__DetectionBall), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__DetectionBall__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__DetectionBall__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__DetectionBall__Sequence__fini(robocup_ssl_msgs__msg__DetectionBall__Sequence * array)
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
      robocup_ssl_msgs__msg__DetectionBall__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__DetectionBall__Sequence *
robocup_ssl_msgs__msg__DetectionBall__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionBall__Sequence * array = (robocup_ssl_msgs__msg__DetectionBall__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__DetectionBall__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__DetectionBall__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__DetectionBall__Sequence__destroy(robocup_ssl_msgs__msg__DetectionBall__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__DetectionBall__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__DetectionBall__Sequence__are_equal(const robocup_ssl_msgs__msg__DetectionBall__Sequence * lhs, const robocup_ssl_msgs__msg__DetectionBall__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__DetectionBall__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__DetectionBall__Sequence__copy(
  const robocup_ssl_msgs__msg__DetectionBall__Sequence * input,
  robocup_ssl_msgs__msg__DetectionBall__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__DetectionBall);
    robocup_ssl_msgs__msg__DetectionBall * data =
      (robocup_ssl_msgs__msg__DetectionBall *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__DetectionBall__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__DetectionBall__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__DetectionBall__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
