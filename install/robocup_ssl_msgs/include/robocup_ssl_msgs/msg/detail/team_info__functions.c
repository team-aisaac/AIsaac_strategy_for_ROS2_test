// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/TeamInfo.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/team_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `yellow_card_times`
// Member `foul_counter`
// Member `ball_placement_failures`
// Member `can_place_ball`
// Member `max_allowed_bots`
// Member `bot_substitution_intent`
// Member `ball_placement_failures_reached`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__TeamInfo__init(robocup_ssl_msgs__msg__TeamInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  // score
  // red_cards
  // yellow_card_times
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->yellow_card_times, 0)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  // yellow_cards
  // timeouts
  // timeout_time
  // goalkeeper
  // foul_counter
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->foul_counter, 0)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  // ball_placement_failures
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->ball_placement_failures, 0)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  // can_place_ball
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->can_place_ball, 0)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  // max_allowed_bots
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->max_allowed_bots, 0)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  // bot_substitution_intent
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->bot_substitution_intent, 0)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  // ball_placement_failures_reached
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->ball_placement_failures_reached, 0)) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__TeamInfo__fini(robocup_ssl_msgs__msg__TeamInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // score
  // red_cards
  // yellow_card_times
  rosidl_runtime_c__uint32__Sequence__fini(&msg->yellow_card_times);
  // yellow_cards
  // timeouts
  // timeout_time
  // goalkeeper
  // foul_counter
  rosidl_runtime_c__uint32__Sequence__fini(&msg->foul_counter);
  // ball_placement_failures
  rosidl_runtime_c__uint32__Sequence__fini(&msg->ball_placement_failures);
  // can_place_ball
  rosidl_runtime_c__boolean__Sequence__fini(&msg->can_place_ball);
  // max_allowed_bots
  rosidl_runtime_c__uint32__Sequence__fini(&msg->max_allowed_bots);
  // bot_substitution_intent
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bot_substitution_intent);
  // ball_placement_failures_reached
  rosidl_runtime_c__boolean__Sequence__fini(&msg->ball_placement_failures_reached);
}

bool
robocup_ssl_msgs__msg__TeamInfo__are_equal(const robocup_ssl_msgs__msg__TeamInfo * lhs, const robocup_ssl_msgs__msg__TeamInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // red_cards
  if (lhs->red_cards != rhs->red_cards) {
    return false;
  }
  // yellow_card_times
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->yellow_card_times), &(rhs->yellow_card_times)))
  {
    return false;
  }
  // yellow_cards
  if (lhs->yellow_cards != rhs->yellow_cards) {
    return false;
  }
  // timeouts
  if (lhs->timeouts != rhs->timeouts) {
    return false;
  }
  // timeout_time
  if (lhs->timeout_time != rhs->timeout_time) {
    return false;
  }
  // goalkeeper
  if (lhs->goalkeeper != rhs->goalkeeper) {
    return false;
  }
  // foul_counter
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->foul_counter), &(rhs->foul_counter)))
  {
    return false;
  }
  // ball_placement_failures
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->ball_placement_failures), &(rhs->ball_placement_failures)))
  {
    return false;
  }
  // can_place_ball
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->can_place_ball), &(rhs->can_place_ball)))
  {
    return false;
  }
  // max_allowed_bots
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->max_allowed_bots), &(rhs->max_allowed_bots)))
  {
    return false;
  }
  // bot_substitution_intent
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->bot_substitution_intent), &(rhs->bot_substitution_intent)))
  {
    return false;
  }
  // ball_placement_failures_reached
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->ball_placement_failures_reached), &(rhs->ball_placement_failures_reached)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__TeamInfo__copy(
  const robocup_ssl_msgs__msg__TeamInfo * input,
  robocup_ssl_msgs__msg__TeamInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // red_cards
  output->red_cards = input->red_cards;
  // yellow_card_times
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->yellow_card_times), &(output->yellow_card_times)))
  {
    return false;
  }
  // yellow_cards
  output->yellow_cards = input->yellow_cards;
  // timeouts
  output->timeouts = input->timeouts;
  // timeout_time
  output->timeout_time = input->timeout_time;
  // goalkeeper
  output->goalkeeper = input->goalkeeper;
  // foul_counter
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->foul_counter), &(output->foul_counter)))
  {
    return false;
  }
  // ball_placement_failures
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->ball_placement_failures), &(output->ball_placement_failures)))
  {
    return false;
  }
  // can_place_ball
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->can_place_ball), &(output->can_place_ball)))
  {
    return false;
  }
  // max_allowed_bots
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->max_allowed_bots), &(output->max_allowed_bots)))
  {
    return false;
  }
  // bot_substitution_intent
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->bot_substitution_intent), &(output->bot_substitution_intent)))
  {
    return false;
  }
  // ball_placement_failures_reached
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->ball_placement_failures_reached), &(output->ball_placement_failures_reached)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__TeamInfo *
robocup_ssl_msgs__msg__TeamInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TeamInfo * msg = (robocup_ssl_msgs__msg__TeamInfo *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TeamInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__TeamInfo));
  bool success = robocup_ssl_msgs__msg__TeamInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__TeamInfo__destroy(robocup_ssl_msgs__msg__TeamInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__TeamInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__TeamInfo__Sequence__init(robocup_ssl_msgs__msg__TeamInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TeamInfo * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__TeamInfo *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__TeamInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__TeamInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__TeamInfo__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__TeamInfo__Sequence__fini(robocup_ssl_msgs__msg__TeamInfo__Sequence * array)
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
      robocup_ssl_msgs__msg__TeamInfo__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__TeamInfo__Sequence *
robocup_ssl_msgs__msg__TeamInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__TeamInfo__Sequence * array = (robocup_ssl_msgs__msg__TeamInfo__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__TeamInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__TeamInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__TeamInfo__Sequence__destroy(robocup_ssl_msgs__msg__TeamInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__TeamInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__TeamInfo__Sequence__are_equal(const robocup_ssl_msgs__msg__TeamInfo__Sequence * lhs, const robocup_ssl_msgs__msg__TeamInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__TeamInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__TeamInfo__Sequence__copy(
  const robocup_ssl_msgs__msg__TeamInfo__Sequence * input,
  robocup_ssl_msgs__msg__TeamInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__TeamInfo);
    robocup_ssl_msgs__msg__TeamInfo * data =
      (robocup_ssl_msgs__msg__TeamInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__TeamInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__TeamInfo__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__TeamInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
