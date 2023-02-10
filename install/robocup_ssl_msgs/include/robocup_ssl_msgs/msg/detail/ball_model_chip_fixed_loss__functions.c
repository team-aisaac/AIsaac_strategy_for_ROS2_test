// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/BallModelChipFixedLoss.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robocup_ssl_msgs__msg__BallModelChipFixedLoss__init(robocup_ssl_msgs__msg__BallModelChipFixedLoss * msg)
{
  if (!msg) {
    return false;
  }
  // damping_xy_first_hop
  // damping_xy_other_hops
  // damping_z
  return true;
}

void
robocup_ssl_msgs__msg__BallModelChipFixedLoss__fini(robocup_ssl_msgs__msg__BallModelChipFixedLoss * msg)
{
  if (!msg) {
    return;
  }
  // damping_xy_first_hop
  // damping_xy_other_hops
  // damping_z
}

bool
robocup_ssl_msgs__msg__BallModelChipFixedLoss__are_equal(const robocup_ssl_msgs__msg__BallModelChipFixedLoss * lhs, const robocup_ssl_msgs__msg__BallModelChipFixedLoss * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // damping_xy_first_hop
  if (lhs->damping_xy_first_hop != rhs->damping_xy_first_hop) {
    return false;
  }
  // damping_xy_other_hops
  if (lhs->damping_xy_other_hops != rhs->damping_xy_other_hops) {
    return false;
  }
  // damping_z
  if (lhs->damping_z != rhs->damping_z) {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__BallModelChipFixedLoss__copy(
  const robocup_ssl_msgs__msg__BallModelChipFixedLoss * input,
  robocup_ssl_msgs__msg__BallModelChipFixedLoss * output)
{
  if (!input || !output) {
    return false;
  }
  // damping_xy_first_hop
  output->damping_xy_first_hop = input->damping_xy_first_hop;
  // damping_xy_other_hops
  output->damping_xy_other_hops = input->damping_xy_other_hops;
  // damping_z
  output->damping_z = input->damping_z;
  return true;
}

robocup_ssl_msgs__msg__BallModelChipFixedLoss *
robocup_ssl_msgs__msg__BallModelChipFixedLoss__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallModelChipFixedLoss * msg = (robocup_ssl_msgs__msg__BallModelChipFixedLoss *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__BallModelChipFixedLoss), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__BallModelChipFixedLoss));
  bool success = robocup_ssl_msgs__msg__BallModelChipFixedLoss__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__BallModelChipFixedLoss__destroy(robocup_ssl_msgs__msg__BallModelChipFixedLoss * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__BallModelChipFixedLoss__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__init(robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallModelChipFixedLoss * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__BallModelChipFixedLoss *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__BallModelChipFixedLoss), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__BallModelChipFixedLoss__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__BallModelChipFixedLoss__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__fini(robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * array)
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
      robocup_ssl_msgs__msg__BallModelChipFixedLoss__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence *
robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * array = (robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__destroy(robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__are_equal(const robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * lhs, const robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__BallModelChipFixedLoss__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__copy(
  const robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * input,
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__BallModelChipFixedLoss);
    robocup_ssl_msgs__msg__BallModelChipFixedLoss * data =
      (robocup_ssl_msgs__msg__BallModelChipFixedLoss *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__BallModelChipFixedLoss__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__BallModelChipFixedLoss__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__BallModelChipFixedLoss__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
