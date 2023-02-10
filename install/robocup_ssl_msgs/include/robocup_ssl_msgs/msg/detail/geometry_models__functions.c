// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/GeometryModels.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/geometry_models__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `straight_two_phase`
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__functions.h"
// Member `chip_fixed_loss`
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__functions.h"

bool
robocup_ssl_msgs__msg__GeometryModels__init(robocup_ssl_msgs__msg__GeometryModels * msg)
{
  if (!msg) {
    return false;
  }
  // straight_two_phase
  if (!robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__init(&msg->straight_two_phase, 0)) {
    robocup_ssl_msgs__msg__GeometryModels__fini(msg);
    return false;
  }
  // chip_fixed_loss
  if (!robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__init(&msg->chip_fixed_loss, 0)) {
    robocup_ssl_msgs__msg__GeometryModels__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__GeometryModels__fini(robocup_ssl_msgs__msg__GeometryModels * msg)
{
  if (!msg) {
    return;
  }
  // straight_two_phase
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__fini(&msg->straight_two_phase);
  // chip_fixed_loss
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__fini(&msg->chip_fixed_loss);
}

bool
robocup_ssl_msgs__msg__GeometryModels__are_equal(const robocup_ssl_msgs__msg__GeometryModels * lhs, const robocup_ssl_msgs__msg__GeometryModels * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // straight_two_phase
  if (!robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__are_equal(
      &(lhs->straight_two_phase), &(rhs->straight_two_phase)))
  {
    return false;
  }
  // chip_fixed_loss
  if (!robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__are_equal(
      &(lhs->chip_fixed_loss), &(rhs->chip_fixed_loss)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryModels__copy(
  const robocup_ssl_msgs__msg__GeometryModels * input,
  robocup_ssl_msgs__msg__GeometryModels * output)
{
  if (!input || !output) {
    return false;
  }
  // straight_two_phase
  if (!robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__copy(
      &(input->straight_two_phase), &(output->straight_two_phase)))
  {
    return false;
  }
  // chip_fixed_loss
  if (!robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__copy(
      &(input->chip_fixed_loss), &(output->chip_fixed_loss)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__GeometryModels *
robocup_ssl_msgs__msg__GeometryModels__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryModels * msg = (robocup_ssl_msgs__msg__GeometryModels *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryModels), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__GeometryModels));
  bool success = robocup_ssl_msgs__msg__GeometryModels__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__GeometryModels__destroy(robocup_ssl_msgs__msg__GeometryModels * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__GeometryModels__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__GeometryModels__Sequence__init(robocup_ssl_msgs__msg__GeometryModels__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryModels * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__GeometryModels *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__GeometryModels), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__GeometryModels__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__GeometryModels__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__GeometryModels__Sequence__fini(robocup_ssl_msgs__msg__GeometryModels__Sequence * array)
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
      robocup_ssl_msgs__msg__GeometryModels__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__GeometryModels__Sequence *
robocup_ssl_msgs__msg__GeometryModels__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryModels__Sequence * array = (robocup_ssl_msgs__msg__GeometryModels__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryModels__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__GeometryModels__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__GeometryModels__Sequence__destroy(robocup_ssl_msgs__msg__GeometryModels__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__GeometryModels__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__GeometryModels__Sequence__are_equal(const robocup_ssl_msgs__msg__GeometryModels__Sequence * lhs, const robocup_ssl_msgs__msg__GeometryModels__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__GeometryModels__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryModels__Sequence__copy(
  const robocup_ssl_msgs__msg__GeometryModels__Sequence * input,
  robocup_ssl_msgs__msg__GeometryModels__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__GeometryModels);
    robocup_ssl_msgs__msg__GeometryModels * data =
      (robocup_ssl_msgs__msg__GeometryModels *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__GeometryModels__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__GeometryModels__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__GeometryModels__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
