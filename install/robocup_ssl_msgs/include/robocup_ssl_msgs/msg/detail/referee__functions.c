// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/Referee.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/referee__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stage_time_left`
// Member `blue_team_on_positive_half`
// Member `next_command`
// Member `current_action_time_remaining`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `yellow`
// Member `blue`
#include "robocup_ssl_msgs/msg/detail/team_info__functions.h"
// Member `designated_position`
#include "robocup_ssl_msgs/msg/detail/point__functions.h"

bool
robocup_ssl_msgs__msg__Referee__init(robocup_ssl_msgs__msg__Referee * msg)
{
  if (!msg) {
    return false;
  }
  // packet_timestamp
  // stage
  // stage_time_left
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->stage_time_left, 0)) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
    return false;
  }
  // command
  // command_counter
  // command_timestamp
  // yellow
  if (!robocup_ssl_msgs__msg__TeamInfo__init(&msg->yellow)) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
    return false;
  }
  // blue
  if (!robocup_ssl_msgs__msg__TeamInfo__init(&msg->blue)) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
    return false;
  }
  // designated_position
  if (!robocup_ssl_msgs__msg__Point__Sequence__init(&msg->designated_position, 0)) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
    return false;
  }
  // blue_team_on_positive_half
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->blue_team_on_positive_half, 0)) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
    return false;
  }
  // next_command
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->next_command, 0)) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
    return false;
  }
  // current_action_time_remaining
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->current_action_time_remaining, 0)) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__Referee__fini(robocup_ssl_msgs__msg__Referee * msg)
{
  if (!msg) {
    return;
  }
  // packet_timestamp
  // stage
  // stage_time_left
  rosidl_runtime_c__int32__Sequence__fini(&msg->stage_time_left);
  // command
  // command_counter
  // command_timestamp
  // yellow
  robocup_ssl_msgs__msg__TeamInfo__fini(&msg->yellow);
  // blue
  robocup_ssl_msgs__msg__TeamInfo__fini(&msg->blue);
  // designated_position
  robocup_ssl_msgs__msg__Point__Sequence__fini(&msg->designated_position);
  // blue_team_on_positive_half
  rosidl_runtime_c__boolean__Sequence__fini(&msg->blue_team_on_positive_half);
  // next_command
  rosidl_runtime_c__uint32__Sequence__fini(&msg->next_command);
  // current_action_time_remaining
  rosidl_runtime_c__int32__Sequence__fini(&msg->current_action_time_remaining);
}

bool
robocup_ssl_msgs__msg__Referee__are_equal(const robocup_ssl_msgs__msg__Referee * lhs, const robocup_ssl_msgs__msg__Referee * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // packet_timestamp
  if (lhs->packet_timestamp != rhs->packet_timestamp) {
    return false;
  }
  // stage
  if (lhs->stage != rhs->stage) {
    return false;
  }
  // stage_time_left
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->stage_time_left), &(rhs->stage_time_left)))
  {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // command_counter
  if (lhs->command_counter != rhs->command_counter) {
    return false;
  }
  // command_timestamp
  if (lhs->command_timestamp != rhs->command_timestamp) {
    return false;
  }
  // yellow
  if (!robocup_ssl_msgs__msg__TeamInfo__are_equal(
      &(lhs->yellow), &(rhs->yellow)))
  {
    return false;
  }
  // blue
  if (!robocup_ssl_msgs__msg__TeamInfo__are_equal(
      &(lhs->blue), &(rhs->blue)))
  {
    return false;
  }
  // designated_position
  if (!robocup_ssl_msgs__msg__Point__Sequence__are_equal(
      &(lhs->designated_position), &(rhs->designated_position)))
  {
    return false;
  }
  // blue_team_on_positive_half
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->blue_team_on_positive_half), &(rhs->blue_team_on_positive_half)))
  {
    return false;
  }
  // next_command
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->next_command), &(rhs->next_command)))
  {
    return false;
  }
  // current_action_time_remaining
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->current_action_time_remaining), &(rhs->current_action_time_remaining)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Referee__copy(
  const robocup_ssl_msgs__msg__Referee * input,
  robocup_ssl_msgs__msg__Referee * output)
{
  if (!input || !output) {
    return false;
  }
  // packet_timestamp
  output->packet_timestamp = input->packet_timestamp;
  // stage
  output->stage = input->stage;
  // stage_time_left
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->stage_time_left), &(output->stage_time_left)))
  {
    return false;
  }
  // command
  output->command = input->command;
  // command_counter
  output->command_counter = input->command_counter;
  // command_timestamp
  output->command_timestamp = input->command_timestamp;
  // yellow
  if (!robocup_ssl_msgs__msg__TeamInfo__copy(
      &(input->yellow), &(output->yellow)))
  {
    return false;
  }
  // blue
  if (!robocup_ssl_msgs__msg__TeamInfo__copy(
      &(input->blue), &(output->blue)))
  {
    return false;
  }
  // designated_position
  if (!robocup_ssl_msgs__msg__Point__Sequence__copy(
      &(input->designated_position), &(output->designated_position)))
  {
    return false;
  }
  // blue_team_on_positive_half
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->blue_team_on_positive_half), &(output->blue_team_on_positive_half)))
  {
    return false;
  }
  // next_command
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->next_command), &(output->next_command)))
  {
    return false;
  }
  // current_action_time_remaining
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->current_action_time_remaining), &(output->current_action_time_remaining)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__Referee *
robocup_ssl_msgs__msg__Referee__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Referee * msg = (robocup_ssl_msgs__msg__Referee *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Referee), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__Referee));
  bool success = robocup_ssl_msgs__msg__Referee__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__Referee__destroy(robocup_ssl_msgs__msg__Referee * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__Referee__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__Referee__Sequence__init(robocup_ssl_msgs__msg__Referee__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Referee * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__Referee *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__Referee), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__Referee__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__Referee__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__Referee__Sequence__fini(robocup_ssl_msgs__msg__Referee__Sequence * array)
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
      robocup_ssl_msgs__msg__Referee__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__Referee__Sequence *
robocup_ssl_msgs__msg__Referee__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__Referee__Sequence * array = (robocup_ssl_msgs__msg__Referee__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__Referee__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__Referee__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__Referee__Sequence__destroy(robocup_ssl_msgs__msg__Referee__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__Referee__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__Referee__Sequence__are_equal(const robocup_ssl_msgs__msg__Referee__Sequence * lhs, const robocup_ssl_msgs__msg__Referee__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__Referee__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__Referee__Sequence__copy(
  const robocup_ssl_msgs__msg__Referee__Sequence * input,
  robocup_ssl_msgs__msg__Referee__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__Referee);
    robocup_ssl_msgs__msg__Referee * data =
      (robocup_ssl_msgs__msg__Referee *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__Referee__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__Referee__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__Referee__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
