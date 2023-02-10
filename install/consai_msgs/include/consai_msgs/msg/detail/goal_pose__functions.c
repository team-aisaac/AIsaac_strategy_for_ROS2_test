// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:msg/GoalPose.idl
// generated code does not contain a copyright notice
#include "consai_msgs/msg/detail/goal_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "consai_msgs/msg/detail/state2_d__functions.h"

bool
consai_msgs__msg__GoalPose__init(consai_msgs__msg__GoalPose * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // team_is_yellow
  // pose
  if (!consai_msgs__msg__State2D__init(&msg->pose)) {
    consai_msgs__msg__GoalPose__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__msg__GoalPose__fini(consai_msgs__msg__GoalPose * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // team_is_yellow
  // pose
  consai_msgs__msg__State2D__fini(&msg->pose);
}

bool
consai_msgs__msg__GoalPose__are_equal(const consai_msgs__msg__GoalPose * lhs, const consai_msgs__msg__GoalPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // team_is_yellow
  if (lhs->team_is_yellow != rhs->team_is_yellow) {
    return false;
  }
  // pose
  if (!consai_msgs__msg__State2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__msg__GoalPose__copy(
  const consai_msgs__msg__GoalPose * input,
  consai_msgs__msg__GoalPose * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // team_is_yellow
  output->team_is_yellow = input->team_is_yellow;
  // pose
  if (!consai_msgs__msg__State2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

consai_msgs__msg__GoalPose *
consai_msgs__msg__GoalPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__GoalPose * msg = (consai_msgs__msg__GoalPose *)allocator.allocate(sizeof(consai_msgs__msg__GoalPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__msg__GoalPose));
  bool success = consai_msgs__msg__GoalPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__msg__GoalPose__destroy(consai_msgs__msg__GoalPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__msg__GoalPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__msg__GoalPose__Sequence__init(consai_msgs__msg__GoalPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__GoalPose * data = NULL;

  if (size) {
    data = (consai_msgs__msg__GoalPose *)allocator.zero_allocate(size, sizeof(consai_msgs__msg__GoalPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__msg__GoalPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__msg__GoalPose__fini(&data[i - 1]);
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
consai_msgs__msg__GoalPose__Sequence__fini(consai_msgs__msg__GoalPose__Sequence * array)
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
      consai_msgs__msg__GoalPose__fini(&array->data[i]);
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

consai_msgs__msg__GoalPose__Sequence *
consai_msgs__msg__GoalPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__msg__GoalPose__Sequence * array = (consai_msgs__msg__GoalPose__Sequence *)allocator.allocate(sizeof(consai_msgs__msg__GoalPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__msg__GoalPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__msg__GoalPose__Sequence__destroy(consai_msgs__msg__GoalPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__msg__GoalPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__msg__GoalPose__Sequence__are_equal(const consai_msgs__msg__GoalPose__Sequence * lhs, const consai_msgs__msg__GoalPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__msg__GoalPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__msg__GoalPose__Sequence__copy(
  const consai_msgs__msg__GoalPose__Sequence * input,
  consai_msgs__msg__GoalPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__msg__GoalPose);
    consai_msgs__msg__GoalPose * data =
      (consai_msgs__msg__GoalPose *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__msg__GoalPose__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__msg__GoalPose__fini(&data[i]);
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
    if (!consai_msgs__msg__GoalPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
