// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/DetectionRobot.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/detection_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
// Member `orientation`
// Member `height`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__DetectionRobot__init(robocup_ssl_msgs__msg__DetectionRobot * msg)
{
  if (!msg) {
    return false;
  }
  // confidence
  // robot_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->robot_id, 0)) {
    robocup_ssl_msgs__msg__DetectionRobot__fini(msg);
    return false;
  }
  // x
  // y
  // orientation
  if (!rosidl_runtime_c__float__Sequence__init(&msg->orientation, 0)) {
    robocup_ssl_msgs__msg__DetectionRobot__fini(msg);
    return false;
  }
  // pixel_x
  // pixel_y
  // height
  if (!rosidl_runtime_c__float__Sequence__init(&msg->height, 0)) {
    robocup_ssl_msgs__msg__DetectionRobot__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__DetectionRobot__fini(robocup_ssl_msgs__msg__DetectionRobot * msg)
{
  if (!msg) {
    return;
  }
  // confidence
  // robot_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->robot_id);
  // x
  // y
  // orientation
  rosidl_runtime_c__float__Sequence__fini(&msg->orientation);
  // pixel_x
  // pixel_y
  // height
  rosidl_runtime_c__float__Sequence__fini(&msg->height);
}

bool
robocup_ssl_msgs__msg__DetectionRobot__are_equal(const robocup_ssl_msgs__msg__DetectionRobot * lhs, const robocup_ssl_msgs__msg__DetectionRobot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
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
  // orientation
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
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
  // height
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__DetectionRobot__copy(
  const robocup_ssl_msgs__msg__DetectionRobot * input,
  robocup_ssl_msgs__msg__DetectionRobot * output)
{
  if (!input || !output) {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // robot_id
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // orientation
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // pixel_x
  output->pixel_x = input->pixel_x;
  // pixel_y
  output->pixel_y = input->pixel_y;
  // height
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__DetectionRobot *
robocup_ssl_msgs__msg__DetectionRobot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionRobot * msg = (robocup_ssl_msgs__msg__DetectionRobot *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__DetectionRobot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__DetectionRobot));
  bool success = robocup_ssl_msgs__msg__DetectionRobot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__DetectionRobot__destroy(robocup_ssl_msgs__msg__DetectionRobot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__DetectionRobot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__DetectionRobot__Sequence__init(robocup_ssl_msgs__msg__DetectionRobot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionRobot * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__DetectionRobot *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__DetectionRobot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__DetectionRobot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__DetectionRobot__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__DetectionRobot__Sequence__fini(robocup_ssl_msgs__msg__DetectionRobot__Sequence * array)
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
      robocup_ssl_msgs__msg__DetectionRobot__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__DetectionRobot__Sequence *
robocup_ssl_msgs__msg__DetectionRobot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionRobot__Sequence * array = (robocup_ssl_msgs__msg__DetectionRobot__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__DetectionRobot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__DetectionRobot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__DetectionRobot__Sequence__destroy(robocup_ssl_msgs__msg__DetectionRobot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__DetectionRobot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__DetectionRobot__Sequence__are_equal(const robocup_ssl_msgs__msg__DetectionRobot__Sequence * lhs, const robocup_ssl_msgs__msg__DetectionRobot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__DetectionRobot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__DetectionRobot__Sequence__copy(
  const robocup_ssl_msgs__msg__DetectionRobot__Sequence * input,
  robocup_ssl_msgs__msg__DetectionRobot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__DetectionRobot);
    robocup_ssl_msgs__msg__DetectionRobot * data =
      (robocup_ssl_msgs__msg__DetectionRobot *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__DetectionRobot__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__DetectionRobot__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__DetectionRobot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
