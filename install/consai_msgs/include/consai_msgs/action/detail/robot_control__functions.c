// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai_msgs:action/RobotControl.idl
// generated code does not contain a copyright notice
#include "consai_msgs/action/detail/robot_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `max_velocity_xy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pose`
#include "consai_msgs/msg/detail/constraint_pose__functions.h"
// Member `line`
#include "consai_msgs/msg/detail/constraint_line__functions.h"
// Member `kick_target`
// Member `dribble_target`
#include "consai_msgs/msg/detail/constraint_xy__functions.h"

bool
consai_msgs__action__RobotControl_Goal__init(consai_msgs__action__RobotControl_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // stop
  msg->stop = false;
  // keep_control
  msg->keep_control = false;
  // max_velocity_xy
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_velocity_xy, 0)) {
    consai_msgs__action__RobotControl_Goal__fini(msg);
    return false;
  }
  // pose
  if (!consai_msgs__msg__ConstraintPose__Sequence__init(&msg->pose, 0)) {
    consai_msgs__action__RobotControl_Goal__fini(msg);
    return false;
  }
  // line
  if (!consai_msgs__msg__ConstraintLine__Sequence__init(&msg->line, 0)) {
    consai_msgs__action__RobotControl_Goal__fini(msg);
    return false;
  }
  // kick_enable
  msg->kick_enable = false;
  // kick_pass
  msg->kick_pass = false;
  // kick_setplay
  msg->kick_setplay = false;
  // kick_target
  if (!consai_msgs__msg__ConstraintXY__init(&msg->kick_target)) {
    consai_msgs__action__RobotControl_Goal__fini(msg);
    return false;
  }
  // dribble_enable
  msg->dribble_enable = false;
  // dribble_target
  if (!consai_msgs__msg__ConstraintXY__init(&msg->dribble_target)) {
    consai_msgs__action__RobotControl_Goal__fini(msg);
    return false;
  }
  // receive_ball
  msg->receive_ball = false;
  // reflect_shoot
  msg->reflect_shoot = false;
  // avoid_obstacles
  msg->avoid_obstacles = true;
  // avoid_placement
  msg->avoid_placement = true;
  return true;
}

void
consai_msgs__action__RobotControl_Goal__fini(consai_msgs__action__RobotControl_Goal * msg)
{
  if (!msg) {
    return;
  }
  // stop
  // keep_control
  // max_velocity_xy
  rosidl_runtime_c__double__Sequence__fini(&msg->max_velocity_xy);
  // pose
  consai_msgs__msg__ConstraintPose__Sequence__fini(&msg->pose);
  // line
  consai_msgs__msg__ConstraintLine__Sequence__fini(&msg->line);
  // kick_enable
  // kick_pass
  // kick_setplay
  // kick_target
  consai_msgs__msg__ConstraintXY__fini(&msg->kick_target);
  // dribble_enable
  // dribble_target
  consai_msgs__msg__ConstraintXY__fini(&msg->dribble_target);
  // receive_ball
  // reflect_shoot
  // avoid_obstacles
  // avoid_placement
}

bool
consai_msgs__action__RobotControl_Goal__are_equal(const consai_msgs__action__RobotControl_Goal * lhs, const consai_msgs__action__RobotControl_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stop
  if (lhs->stop != rhs->stop) {
    return false;
  }
  // keep_control
  if (lhs->keep_control != rhs->keep_control) {
    return false;
  }
  // max_velocity_xy
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_velocity_xy), &(rhs->max_velocity_xy)))
  {
    return false;
  }
  // pose
  if (!consai_msgs__msg__ConstraintPose__Sequence__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // line
  if (!consai_msgs__msg__ConstraintLine__Sequence__are_equal(
      &(lhs->line), &(rhs->line)))
  {
    return false;
  }
  // kick_enable
  if (lhs->kick_enable != rhs->kick_enable) {
    return false;
  }
  // kick_pass
  if (lhs->kick_pass != rhs->kick_pass) {
    return false;
  }
  // kick_setplay
  if (lhs->kick_setplay != rhs->kick_setplay) {
    return false;
  }
  // kick_target
  if (!consai_msgs__msg__ConstraintXY__are_equal(
      &(lhs->kick_target), &(rhs->kick_target)))
  {
    return false;
  }
  // dribble_enable
  if (lhs->dribble_enable != rhs->dribble_enable) {
    return false;
  }
  // dribble_target
  if (!consai_msgs__msg__ConstraintXY__are_equal(
      &(lhs->dribble_target), &(rhs->dribble_target)))
  {
    return false;
  }
  // receive_ball
  if (lhs->receive_ball != rhs->receive_ball) {
    return false;
  }
  // reflect_shoot
  if (lhs->reflect_shoot != rhs->reflect_shoot) {
    return false;
  }
  // avoid_obstacles
  if (lhs->avoid_obstacles != rhs->avoid_obstacles) {
    return false;
  }
  // avoid_placement
  if (lhs->avoid_placement != rhs->avoid_placement) {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_Goal__copy(
  const consai_msgs__action__RobotControl_Goal * input,
  consai_msgs__action__RobotControl_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // stop
  output->stop = input->stop;
  // keep_control
  output->keep_control = input->keep_control;
  // max_velocity_xy
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_velocity_xy), &(output->max_velocity_xy)))
  {
    return false;
  }
  // pose
  if (!consai_msgs__msg__ConstraintPose__Sequence__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // line
  if (!consai_msgs__msg__ConstraintLine__Sequence__copy(
      &(input->line), &(output->line)))
  {
    return false;
  }
  // kick_enable
  output->kick_enable = input->kick_enable;
  // kick_pass
  output->kick_pass = input->kick_pass;
  // kick_setplay
  output->kick_setplay = input->kick_setplay;
  // kick_target
  if (!consai_msgs__msg__ConstraintXY__copy(
      &(input->kick_target), &(output->kick_target)))
  {
    return false;
  }
  // dribble_enable
  output->dribble_enable = input->dribble_enable;
  // dribble_target
  if (!consai_msgs__msg__ConstraintXY__copy(
      &(input->dribble_target), &(output->dribble_target)))
  {
    return false;
  }
  // receive_ball
  output->receive_ball = input->receive_ball;
  // reflect_shoot
  output->reflect_shoot = input->reflect_shoot;
  // avoid_obstacles
  output->avoid_obstacles = input->avoid_obstacles;
  // avoid_placement
  output->avoid_placement = input->avoid_placement;
  return true;
}

consai_msgs__action__RobotControl_Goal *
consai_msgs__action__RobotControl_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Goal * msg = (consai_msgs__action__RobotControl_Goal *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_Goal));
  bool success = consai_msgs__action__RobotControl_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_Goal__destroy(consai_msgs__action__RobotControl_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_Goal__Sequence__init(consai_msgs__action__RobotControl_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Goal * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_Goal *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_Goal__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_Goal__Sequence__fini(consai_msgs__action__RobotControl_Goal__Sequence * array)
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
      consai_msgs__action__RobotControl_Goal__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_Goal__Sequence *
consai_msgs__action__RobotControl_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Goal__Sequence * array = (consai_msgs__action__RobotControl_Goal__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_Goal__Sequence__destroy(consai_msgs__action__RobotControl_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_Goal__Sequence__are_equal(const consai_msgs__action__RobotControl_Goal__Sequence * lhs, const consai_msgs__action__RobotControl_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_Goal__Sequence__copy(
  const consai_msgs__action__RobotControl_Goal__Sequence * input,
  consai_msgs__action__RobotControl_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_Goal);
    consai_msgs__action__RobotControl_Goal * data =
      (consai_msgs__action__RobotControl_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_Goal__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
consai_msgs__action__RobotControl_Result__init(consai_msgs__action__RobotControl_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    consai_msgs__action__RobotControl_Result__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__action__RobotControl_Result__fini(consai_msgs__action__RobotControl_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
consai_msgs__action__RobotControl_Result__are_equal(const consai_msgs__action__RobotControl_Result * lhs, const consai_msgs__action__RobotControl_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_Result__copy(
  const consai_msgs__action__RobotControl_Result * input,
  consai_msgs__action__RobotControl_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

consai_msgs__action__RobotControl_Result *
consai_msgs__action__RobotControl_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Result * msg = (consai_msgs__action__RobotControl_Result *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_Result));
  bool success = consai_msgs__action__RobotControl_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_Result__destroy(consai_msgs__action__RobotControl_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_Result__Sequence__init(consai_msgs__action__RobotControl_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Result * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_Result *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_Result__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_Result__Sequence__fini(consai_msgs__action__RobotControl_Result__Sequence * array)
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
      consai_msgs__action__RobotControl_Result__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_Result__Sequence *
consai_msgs__action__RobotControl_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Result__Sequence * array = (consai_msgs__action__RobotControl_Result__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_Result__Sequence__destroy(consai_msgs__action__RobotControl_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_Result__Sequence__are_equal(const consai_msgs__action__RobotControl_Result__Sequence * lhs, const consai_msgs__action__RobotControl_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_Result__Sequence__copy(
  const consai_msgs__action__RobotControl_Result__Sequence * input,
  consai_msgs__action__RobotControl_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_Result);
    consai_msgs__action__RobotControl_Result * data =
      (consai_msgs__action__RobotControl_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_Result__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `remaining_pose`
// Member `present_velocity`
#include "consai_msgs/msg/detail/state2_d__functions.h"

bool
consai_msgs__action__RobotControl_Feedback__init(consai_msgs__action__RobotControl_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining_pose
  if (!consai_msgs__msg__State2D__init(&msg->remaining_pose)) {
    consai_msgs__action__RobotControl_Feedback__fini(msg);
    return false;
  }
  // present_velocity
  if (!consai_msgs__msg__State2D__init(&msg->present_velocity)) {
    consai_msgs__action__RobotControl_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__action__RobotControl_Feedback__fini(consai_msgs__action__RobotControl_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining_pose
  consai_msgs__msg__State2D__fini(&msg->remaining_pose);
  // present_velocity
  consai_msgs__msg__State2D__fini(&msg->present_velocity);
}

bool
consai_msgs__action__RobotControl_Feedback__are_equal(const consai_msgs__action__RobotControl_Feedback * lhs, const consai_msgs__action__RobotControl_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remaining_pose
  if (!consai_msgs__msg__State2D__are_equal(
      &(lhs->remaining_pose), &(rhs->remaining_pose)))
  {
    return false;
  }
  // present_velocity
  if (!consai_msgs__msg__State2D__are_equal(
      &(lhs->present_velocity), &(rhs->present_velocity)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_Feedback__copy(
  const consai_msgs__action__RobotControl_Feedback * input,
  consai_msgs__action__RobotControl_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // remaining_pose
  if (!consai_msgs__msg__State2D__copy(
      &(input->remaining_pose), &(output->remaining_pose)))
  {
    return false;
  }
  // present_velocity
  if (!consai_msgs__msg__State2D__copy(
      &(input->present_velocity), &(output->present_velocity)))
  {
    return false;
  }
  return true;
}

consai_msgs__action__RobotControl_Feedback *
consai_msgs__action__RobotControl_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Feedback * msg = (consai_msgs__action__RobotControl_Feedback *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_Feedback));
  bool success = consai_msgs__action__RobotControl_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_Feedback__destroy(consai_msgs__action__RobotControl_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_Feedback__Sequence__init(consai_msgs__action__RobotControl_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Feedback * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_Feedback *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_Feedback__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_Feedback__Sequence__fini(consai_msgs__action__RobotControl_Feedback__Sequence * array)
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
      consai_msgs__action__RobotControl_Feedback__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_Feedback__Sequence *
consai_msgs__action__RobotControl_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_Feedback__Sequence * array = (consai_msgs__action__RobotControl_Feedback__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_Feedback__Sequence__destroy(consai_msgs__action__RobotControl_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_Feedback__Sequence__are_equal(const consai_msgs__action__RobotControl_Feedback__Sequence * lhs, const consai_msgs__action__RobotControl_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_Feedback__Sequence__copy(
  const consai_msgs__action__RobotControl_Feedback__Sequence * input,
  consai_msgs__action__RobotControl_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_Feedback);
    consai_msgs__action__RobotControl_Feedback * data =
      (consai_msgs__action__RobotControl_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_Feedback__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"

bool
consai_msgs__action__RobotControl_SendGoal_Request__init(consai_msgs__action__RobotControl_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    consai_msgs__action__RobotControl_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!consai_msgs__action__RobotControl_Goal__init(&msg->goal)) {
    consai_msgs__action__RobotControl_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__action__RobotControl_SendGoal_Request__fini(consai_msgs__action__RobotControl_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  consai_msgs__action__RobotControl_Goal__fini(&msg->goal);
}

bool
consai_msgs__action__RobotControl_SendGoal_Request__are_equal(const consai_msgs__action__RobotControl_SendGoal_Request * lhs, const consai_msgs__action__RobotControl_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!consai_msgs__action__RobotControl_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_SendGoal_Request__copy(
  const consai_msgs__action__RobotControl_SendGoal_Request * input,
  consai_msgs__action__RobotControl_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!consai_msgs__action__RobotControl_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

consai_msgs__action__RobotControl_SendGoal_Request *
consai_msgs__action__RobotControl_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_SendGoal_Request * msg = (consai_msgs__action__RobotControl_SendGoal_Request *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_SendGoal_Request));
  bool success = consai_msgs__action__RobotControl_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_SendGoal_Request__destroy(consai_msgs__action__RobotControl_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_SendGoal_Request__Sequence__init(consai_msgs__action__RobotControl_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_SendGoal_Request * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_SendGoal_Request *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_SendGoal_Request__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_SendGoal_Request__Sequence__fini(consai_msgs__action__RobotControl_SendGoal_Request__Sequence * array)
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
      consai_msgs__action__RobotControl_SendGoal_Request__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_SendGoal_Request__Sequence *
consai_msgs__action__RobotControl_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_SendGoal_Request__Sequence * array = (consai_msgs__action__RobotControl_SendGoal_Request__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_SendGoal_Request__Sequence__destroy(consai_msgs__action__RobotControl_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_SendGoal_Request__Sequence__are_equal(const consai_msgs__action__RobotControl_SendGoal_Request__Sequence * lhs, const consai_msgs__action__RobotControl_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_SendGoal_Request__Sequence__copy(
  const consai_msgs__action__RobotControl_SendGoal_Request__Sequence * input,
  consai_msgs__action__RobotControl_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_SendGoal_Request);
    consai_msgs__action__RobotControl_SendGoal_Request * data =
      (consai_msgs__action__RobotControl_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_SendGoal_Request__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
consai_msgs__action__RobotControl_SendGoal_Response__init(consai_msgs__action__RobotControl_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    consai_msgs__action__RobotControl_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__action__RobotControl_SendGoal_Response__fini(consai_msgs__action__RobotControl_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
consai_msgs__action__RobotControl_SendGoal_Response__are_equal(const consai_msgs__action__RobotControl_SendGoal_Response * lhs, const consai_msgs__action__RobotControl_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_SendGoal_Response__copy(
  const consai_msgs__action__RobotControl_SendGoal_Response * input,
  consai_msgs__action__RobotControl_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

consai_msgs__action__RobotControl_SendGoal_Response *
consai_msgs__action__RobotControl_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_SendGoal_Response * msg = (consai_msgs__action__RobotControl_SendGoal_Response *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_SendGoal_Response));
  bool success = consai_msgs__action__RobotControl_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_SendGoal_Response__destroy(consai_msgs__action__RobotControl_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_SendGoal_Response__Sequence__init(consai_msgs__action__RobotControl_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_SendGoal_Response * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_SendGoal_Response *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_SendGoal_Response__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_SendGoal_Response__Sequence__fini(consai_msgs__action__RobotControl_SendGoal_Response__Sequence * array)
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
      consai_msgs__action__RobotControl_SendGoal_Response__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_SendGoal_Response__Sequence *
consai_msgs__action__RobotControl_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_SendGoal_Response__Sequence * array = (consai_msgs__action__RobotControl_SendGoal_Response__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_SendGoal_Response__Sequence__destroy(consai_msgs__action__RobotControl_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_SendGoal_Response__Sequence__are_equal(const consai_msgs__action__RobotControl_SendGoal_Response__Sequence * lhs, const consai_msgs__action__RobotControl_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_SendGoal_Response__Sequence__copy(
  const consai_msgs__action__RobotControl_SendGoal_Response__Sequence * input,
  consai_msgs__action__RobotControl_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_SendGoal_Response);
    consai_msgs__action__RobotControl_SendGoal_Response * data =
      (consai_msgs__action__RobotControl_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_SendGoal_Response__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
consai_msgs__action__RobotControl_GetResult_Request__init(consai_msgs__action__RobotControl_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    consai_msgs__action__RobotControl_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__action__RobotControl_GetResult_Request__fini(consai_msgs__action__RobotControl_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
consai_msgs__action__RobotControl_GetResult_Request__are_equal(const consai_msgs__action__RobotControl_GetResult_Request * lhs, const consai_msgs__action__RobotControl_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_GetResult_Request__copy(
  const consai_msgs__action__RobotControl_GetResult_Request * input,
  consai_msgs__action__RobotControl_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

consai_msgs__action__RobotControl_GetResult_Request *
consai_msgs__action__RobotControl_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_GetResult_Request * msg = (consai_msgs__action__RobotControl_GetResult_Request *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_GetResult_Request));
  bool success = consai_msgs__action__RobotControl_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_GetResult_Request__destroy(consai_msgs__action__RobotControl_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_GetResult_Request__Sequence__init(consai_msgs__action__RobotControl_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_GetResult_Request * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_GetResult_Request *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_GetResult_Request__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_GetResult_Request__Sequence__fini(consai_msgs__action__RobotControl_GetResult_Request__Sequence * array)
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
      consai_msgs__action__RobotControl_GetResult_Request__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_GetResult_Request__Sequence *
consai_msgs__action__RobotControl_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_GetResult_Request__Sequence * array = (consai_msgs__action__RobotControl_GetResult_Request__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_GetResult_Request__Sequence__destroy(consai_msgs__action__RobotControl_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_GetResult_Request__Sequence__are_equal(const consai_msgs__action__RobotControl_GetResult_Request__Sequence * lhs, const consai_msgs__action__RobotControl_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_GetResult_Request__Sequence__copy(
  const consai_msgs__action__RobotControl_GetResult_Request__Sequence * input,
  consai_msgs__action__RobotControl_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_GetResult_Request);
    consai_msgs__action__RobotControl_GetResult_Request * data =
      (consai_msgs__action__RobotControl_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_GetResult_Request__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"

bool
consai_msgs__action__RobotControl_GetResult_Response__init(consai_msgs__action__RobotControl_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!consai_msgs__action__RobotControl_Result__init(&msg->result)) {
    consai_msgs__action__RobotControl_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__action__RobotControl_GetResult_Response__fini(consai_msgs__action__RobotControl_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  consai_msgs__action__RobotControl_Result__fini(&msg->result);
}

bool
consai_msgs__action__RobotControl_GetResult_Response__are_equal(const consai_msgs__action__RobotControl_GetResult_Response * lhs, const consai_msgs__action__RobotControl_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!consai_msgs__action__RobotControl_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_GetResult_Response__copy(
  const consai_msgs__action__RobotControl_GetResult_Response * input,
  consai_msgs__action__RobotControl_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!consai_msgs__action__RobotControl_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

consai_msgs__action__RobotControl_GetResult_Response *
consai_msgs__action__RobotControl_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_GetResult_Response * msg = (consai_msgs__action__RobotControl_GetResult_Response *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_GetResult_Response));
  bool success = consai_msgs__action__RobotControl_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_GetResult_Response__destroy(consai_msgs__action__RobotControl_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_GetResult_Response__Sequence__init(consai_msgs__action__RobotControl_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_GetResult_Response * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_GetResult_Response *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_GetResult_Response__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_GetResult_Response__Sequence__fini(consai_msgs__action__RobotControl_GetResult_Response__Sequence * array)
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
      consai_msgs__action__RobotControl_GetResult_Response__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_GetResult_Response__Sequence *
consai_msgs__action__RobotControl_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_GetResult_Response__Sequence * array = (consai_msgs__action__RobotControl_GetResult_Response__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_GetResult_Response__Sequence__destroy(consai_msgs__action__RobotControl_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_GetResult_Response__Sequence__are_equal(const consai_msgs__action__RobotControl_GetResult_Response__Sequence * lhs, const consai_msgs__action__RobotControl_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_GetResult_Response__Sequence__copy(
  const consai_msgs__action__RobotControl_GetResult_Response__Sequence * input,
  consai_msgs__action__RobotControl_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_GetResult_Response);
    consai_msgs__action__RobotControl_GetResult_Response * data =
      (consai_msgs__action__RobotControl_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_GetResult_Response__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"

bool
consai_msgs__action__RobotControl_FeedbackMessage__init(consai_msgs__action__RobotControl_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    consai_msgs__action__RobotControl_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!consai_msgs__action__RobotControl_Feedback__init(&msg->feedback)) {
    consai_msgs__action__RobotControl_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
consai_msgs__action__RobotControl_FeedbackMessage__fini(consai_msgs__action__RobotControl_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  consai_msgs__action__RobotControl_Feedback__fini(&msg->feedback);
}

bool
consai_msgs__action__RobotControl_FeedbackMessage__are_equal(const consai_msgs__action__RobotControl_FeedbackMessage * lhs, const consai_msgs__action__RobotControl_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!consai_msgs__action__RobotControl_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
consai_msgs__action__RobotControl_FeedbackMessage__copy(
  const consai_msgs__action__RobotControl_FeedbackMessage * input,
  consai_msgs__action__RobotControl_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!consai_msgs__action__RobotControl_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

consai_msgs__action__RobotControl_FeedbackMessage *
consai_msgs__action__RobotControl_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_FeedbackMessage * msg = (consai_msgs__action__RobotControl_FeedbackMessage *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai_msgs__action__RobotControl_FeedbackMessage));
  bool success = consai_msgs__action__RobotControl_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
consai_msgs__action__RobotControl_FeedbackMessage__destroy(consai_msgs__action__RobotControl_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    consai_msgs__action__RobotControl_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
consai_msgs__action__RobotControl_FeedbackMessage__Sequence__init(consai_msgs__action__RobotControl_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_FeedbackMessage * data = NULL;

  if (size) {
    data = (consai_msgs__action__RobotControl_FeedbackMessage *)allocator.zero_allocate(size, sizeof(consai_msgs__action__RobotControl_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai_msgs__action__RobotControl_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai_msgs__action__RobotControl_FeedbackMessage__fini(&data[i - 1]);
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
consai_msgs__action__RobotControl_FeedbackMessage__Sequence__fini(consai_msgs__action__RobotControl_FeedbackMessage__Sequence * array)
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
      consai_msgs__action__RobotControl_FeedbackMessage__fini(&array->data[i]);
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

consai_msgs__action__RobotControl_FeedbackMessage__Sequence *
consai_msgs__action__RobotControl_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  consai_msgs__action__RobotControl_FeedbackMessage__Sequence * array = (consai_msgs__action__RobotControl_FeedbackMessage__Sequence *)allocator.allocate(sizeof(consai_msgs__action__RobotControl_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = consai_msgs__action__RobotControl_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
consai_msgs__action__RobotControl_FeedbackMessage__Sequence__destroy(consai_msgs__action__RobotControl_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    consai_msgs__action__RobotControl_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
consai_msgs__action__RobotControl_FeedbackMessage__Sequence__are_equal(const consai_msgs__action__RobotControl_FeedbackMessage__Sequence * lhs, const consai_msgs__action__RobotControl_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!consai_msgs__action__RobotControl_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
consai_msgs__action__RobotControl_FeedbackMessage__Sequence__copy(
  const consai_msgs__action__RobotControl_FeedbackMessage__Sequence * input,
  consai_msgs__action__RobotControl_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(consai_msgs__action__RobotControl_FeedbackMessage);
    consai_msgs__action__RobotControl_FeedbackMessage * data =
      (consai_msgs__action__RobotControl_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!consai_msgs__action__RobotControl_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          consai_msgs__action__RobotControl_FeedbackMessage__fini(&data[i]);
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
    if (!consai_msgs__action__RobotControl_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
