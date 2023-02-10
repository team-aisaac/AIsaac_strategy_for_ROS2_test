// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/BallModelStraightTwoPhase.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__init(robocup_ssl_msgs__msg__BallModelStraightTwoPhase * msg)
{
  if (!msg) {
    return false;
  }
  // acc_slide
  // acc_roll
  // k_switch
  return true;
}

void
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__fini(robocup_ssl_msgs__msg__BallModelStraightTwoPhase * msg)
{
  if (!msg) {
    return;
  }
  // acc_slide
  // acc_roll
  // k_switch
}

bool
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__are_equal(const robocup_ssl_msgs__msg__BallModelStraightTwoPhase * lhs, const robocup_ssl_msgs__msg__BallModelStraightTwoPhase * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // acc_slide
  if (lhs->acc_slide != rhs->acc_slide) {
    return false;
  }
  // acc_roll
  if (lhs->acc_roll != rhs->acc_roll) {
    return false;
  }
  // k_switch
  if (lhs->k_switch != rhs->k_switch) {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__copy(
  const robocup_ssl_msgs__msg__BallModelStraightTwoPhase * input,
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase * output)
{
  if (!input || !output) {
    return false;
  }
  // acc_slide
  output->acc_slide = input->acc_slide;
  // acc_roll
  output->acc_roll = input->acc_roll;
  // k_switch
  output->k_switch = input->k_switch;
  return true;
}

robocup_ssl_msgs__msg__BallModelStraightTwoPhase *
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase * msg = (robocup_ssl_msgs__msg__BallModelStraightTwoPhase *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase));
  bool success = robocup_ssl_msgs__msg__BallModelStraightTwoPhase__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__destroy(robocup_ssl_msgs__msg__BallModelStraightTwoPhase * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__BallModelStraightTwoPhase__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__init(robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__BallModelStraightTwoPhase *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__BallModelStraightTwoPhase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__BallModelStraightTwoPhase__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__fini(robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * array)
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
      robocup_ssl_msgs__msg__BallModelStraightTwoPhase__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence *
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * array = (robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__destroy(robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__are_equal(const robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * lhs, const robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__BallModelStraightTwoPhase__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__copy(
  const robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * input,
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase);
    robocup_ssl_msgs__msg__BallModelStraightTwoPhase * data =
      (robocup_ssl_msgs__msg__BallModelStraightTwoPhase *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__BallModelStraightTwoPhase__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__BallModelStraightTwoPhase__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__BallModelStraightTwoPhase__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
