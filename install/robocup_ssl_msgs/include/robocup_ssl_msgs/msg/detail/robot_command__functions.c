// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/robot_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wheel1`
// Member `wheel2`
// Member `wheel3`
// Member `wheel4`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__RobotCommand__init(robocup_ssl_msgs__msg__RobotCommand * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // kickspeedx
  // kickspeedz
  // veltangent
  // velnormal
  // velangular
  // spinner
  // wheelsspeed
  // wheel1
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wheel1, 0)) {
    robocup_ssl_msgs__msg__RobotCommand__fini(msg);
    return false;
  }
  // wheel2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wheel2, 0)) {
    robocup_ssl_msgs__msg__RobotCommand__fini(msg);
    return false;
  }
  // wheel3
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wheel3, 0)) {
    robocup_ssl_msgs__msg__RobotCommand__fini(msg);
    return false;
  }
  // wheel4
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wheel4, 0)) {
    robocup_ssl_msgs__msg__RobotCommand__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__RobotCommand__fini(robocup_ssl_msgs__msg__RobotCommand * msg)
{
  if (!msg) {
    return;
  }
  // id
  // kickspeedx
  // kickspeedz
  // veltangent
  // velnormal
  // velangular
  // spinner
  // wheelsspeed
  // wheel1
  rosidl_runtime_c__float__Sequence__fini(&msg->wheel1);
  // wheel2
  rosidl_runtime_c__float__Sequence__fini(&msg->wheel2);
  // wheel3
  rosidl_runtime_c__float__Sequence__fini(&msg->wheel3);
  // wheel4
  rosidl_runtime_c__float__Sequence__fini(&msg->wheel4);
}

bool
robocup_ssl_msgs__msg__RobotCommand__are_equal(const robocup_ssl_msgs__msg__RobotCommand * lhs, const robocup_ssl_msgs__msg__RobotCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // kickspeedx
  if (lhs->kickspeedx != rhs->kickspeedx) {
    return false;
  }
  // kickspeedz
  if (lhs->kickspeedz != rhs->kickspeedz) {
    return false;
  }
  // veltangent
  if (lhs->veltangent != rhs->veltangent) {
    return false;
  }
  // velnormal
  if (lhs->velnormal != rhs->velnormal) {
    return false;
  }
  // velangular
  if (lhs->velangular != rhs->velangular) {
    return false;
  }
  // spinner
  if (lhs->spinner != rhs->spinner) {
    return false;
  }
  // wheelsspeed
  if (lhs->wheelsspeed != rhs->wheelsspeed) {
    return false;
  }
  // wheel1
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wheel1), &(rhs->wheel1)))
  {
    return false;
  }
  // wheel2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wheel2), &(rhs->wheel2)))
  {
    return false;
  }
  // wheel3
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wheel3), &(rhs->wheel3)))
  {
    return false;
  }
  // wheel4
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wheel4), &(rhs->wheel4)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotCommand__copy(
  const robocup_ssl_msgs__msg__RobotCommand * input,
  robocup_ssl_msgs__msg__RobotCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // kickspeedx
  output->kickspeedx = input->kickspeedx;
  // kickspeedz
  output->kickspeedz = input->kickspeedz;
  // veltangent
  output->veltangent = input->veltangent;
  // velnormal
  output->velnormal = input->velnormal;
  // velangular
  output->velangular = input->velangular;
  // spinner
  output->spinner = input->spinner;
  // wheelsspeed
  output->wheelsspeed = input->wheelsspeed;
  // wheel1
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wheel1), &(output->wheel1)))
  {
    return false;
  }
  // wheel2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wheel2), &(output->wheel2)))
  {
    return false;
  }
  // wheel3
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wheel3), &(output->wheel3)))
  {
    return false;
  }
  // wheel4
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wheel4), &(output->wheel4)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__RobotCommand *
robocup_ssl_msgs__msg__RobotCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotCommand * msg = (robocup_ssl_msgs__msg__RobotCommand *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__RobotCommand));
  bool success = robocup_ssl_msgs__msg__RobotCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__RobotCommand__destroy(robocup_ssl_msgs__msg__RobotCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__RobotCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__RobotCommand__Sequence__init(robocup_ssl_msgs__msg__RobotCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotCommand * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__RobotCommand *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__RobotCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__RobotCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__RobotCommand__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__RobotCommand__Sequence__fini(robocup_ssl_msgs__msg__RobotCommand__Sequence * array)
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
      robocup_ssl_msgs__msg__RobotCommand__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__RobotCommand__Sequence *
robocup_ssl_msgs__msg__RobotCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__RobotCommand__Sequence * array = (robocup_ssl_msgs__msg__RobotCommand__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__RobotCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__RobotCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__RobotCommand__Sequence__destroy(robocup_ssl_msgs__msg__RobotCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__RobotCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__RobotCommand__Sequence__are_equal(const robocup_ssl_msgs__msg__RobotCommand__Sequence * lhs, const robocup_ssl_msgs__msg__RobotCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__RobotCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__RobotCommand__Sequence__copy(
  const robocup_ssl_msgs__msg__RobotCommand__Sequence * input,
  robocup_ssl_msgs__msg__RobotCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__RobotCommand);
    robocup_ssl_msgs__msg__RobotCommand * data =
      (robocup_ssl_msgs__msg__RobotCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__RobotCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__RobotCommand__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__RobotCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
