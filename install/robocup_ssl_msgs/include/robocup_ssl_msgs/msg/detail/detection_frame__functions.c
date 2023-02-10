// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/DetectionFrame.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/detection_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `balls`
#include "robocup_ssl_msgs/msg/detail/detection_ball__functions.h"
// Member `robots_yellow`
// Member `robots_blue`
#include "robocup_ssl_msgs/msg/detail/detection_robot__functions.h"

bool
robocup_ssl_msgs__msg__DetectionFrame__init(robocup_ssl_msgs__msg__DetectionFrame * msg)
{
  if (!msg) {
    return false;
  }
  // frame_number
  // t_capture
  // t_sent
  // camera_id
  // balls
  if (!robocup_ssl_msgs__msg__DetectionBall__Sequence__init(&msg->balls, 0)) {
    robocup_ssl_msgs__msg__DetectionFrame__fini(msg);
    return false;
  }
  // robots_yellow
  if (!robocup_ssl_msgs__msg__DetectionRobot__Sequence__init(&msg->robots_yellow, 0)) {
    robocup_ssl_msgs__msg__DetectionFrame__fini(msg);
    return false;
  }
  // robots_blue
  if (!robocup_ssl_msgs__msg__DetectionRobot__Sequence__init(&msg->robots_blue, 0)) {
    robocup_ssl_msgs__msg__DetectionFrame__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__DetectionFrame__fini(robocup_ssl_msgs__msg__DetectionFrame * msg)
{
  if (!msg) {
    return;
  }
  // frame_number
  // t_capture
  // t_sent
  // camera_id
  // balls
  robocup_ssl_msgs__msg__DetectionBall__Sequence__fini(&msg->balls);
  // robots_yellow
  robocup_ssl_msgs__msg__DetectionRobot__Sequence__fini(&msg->robots_yellow);
  // robots_blue
  robocup_ssl_msgs__msg__DetectionRobot__Sequence__fini(&msg->robots_blue);
}

bool
robocup_ssl_msgs__msg__DetectionFrame__are_equal(const robocup_ssl_msgs__msg__DetectionFrame * lhs, const robocup_ssl_msgs__msg__DetectionFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_number
  if (lhs->frame_number != rhs->frame_number) {
    return false;
  }
  // t_capture
  if (lhs->t_capture != rhs->t_capture) {
    return false;
  }
  // t_sent
  if (lhs->t_sent != rhs->t_sent) {
    return false;
  }
  // camera_id
  if (lhs->camera_id != rhs->camera_id) {
    return false;
  }
  // balls
  if (!robocup_ssl_msgs__msg__DetectionBall__Sequence__are_equal(
      &(lhs->balls), &(rhs->balls)))
  {
    return false;
  }
  // robots_yellow
  if (!robocup_ssl_msgs__msg__DetectionRobot__Sequence__are_equal(
      &(lhs->robots_yellow), &(rhs->robots_yellow)))
  {
    return false;
  }
  // robots_blue
  if (!robocup_ssl_msgs__msg__DetectionRobot__Sequence__are_equal(
      &(lhs->robots_blue), &(rhs->robots_blue)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__DetectionFrame__copy(
  const robocup_ssl_msgs__msg__DetectionFrame * input,
  robocup_ssl_msgs__msg__DetectionFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_number
  output->frame_number = input->frame_number;
  // t_capture
  output->t_capture = input->t_capture;
  // t_sent
  output->t_sent = input->t_sent;
  // camera_id
  output->camera_id = input->camera_id;
  // balls
  if (!robocup_ssl_msgs__msg__DetectionBall__Sequence__copy(
      &(input->balls), &(output->balls)))
  {
    return false;
  }
  // robots_yellow
  if (!robocup_ssl_msgs__msg__DetectionRobot__Sequence__copy(
      &(input->robots_yellow), &(output->robots_yellow)))
  {
    return false;
  }
  // robots_blue
  if (!robocup_ssl_msgs__msg__DetectionRobot__Sequence__copy(
      &(input->robots_blue), &(output->robots_blue)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__DetectionFrame *
robocup_ssl_msgs__msg__DetectionFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionFrame * msg = (robocup_ssl_msgs__msg__DetectionFrame *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__DetectionFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__DetectionFrame));
  bool success = robocup_ssl_msgs__msg__DetectionFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__DetectionFrame__destroy(robocup_ssl_msgs__msg__DetectionFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__DetectionFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__DetectionFrame__Sequence__init(robocup_ssl_msgs__msg__DetectionFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionFrame * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__DetectionFrame *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__DetectionFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__DetectionFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__DetectionFrame__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__DetectionFrame__Sequence__fini(robocup_ssl_msgs__msg__DetectionFrame__Sequence * array)
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
      robocup_ssl_msgs__msg__DetectionFrame__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__DetectionFrame__Sequence *
robocup_ssl_msgs__msg__DetectionFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__DetectionFrame__Sequence * array = (robocup_ssl_msgs__msg__DetectionFrame__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__DetectionFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__DetectionFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__DetectionFrame__Sequence__destroy(robocup_ssl_msgs__msg__DetectionFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__DetectionFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__DetectionFrame__Sequence__are_equal(const robocup_ssl_msgs__msg__DetectionFrame__Sequence * lhs, const robocup_ssl_msgs__msg__DetectionFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__DetectionFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__DetectionFrame__Sequence__copy(
  const robocup_ssl_msgs__msg__DetectionFrame__Sequence * input,
  robocup_ssl_msgs__msg__DetectionFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__DetectionFrame);
    robocup_ssl_msgs__msg__DetectionFrame * data =
      (robocup_ssl_msgs__msg__DetectionFrame *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__DetectionFrame__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__DetectionFrame__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__DetectionFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
