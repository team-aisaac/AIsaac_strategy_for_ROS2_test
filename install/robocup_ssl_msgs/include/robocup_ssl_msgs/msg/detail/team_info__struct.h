// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/TeamInfo.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'yellow_card_times'
// Member 'foul_counter'
// Member 'ball_placement_failures'
// Member 'can_place_ball'
// Member 'max_allowed_bots'
// Member 'bot_substitution_intent'
// Member 'ball_placement_failures_reached'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// foul_counter
enum
{
  robocup_ssl_msgs__msg__TeamInfo__foul_counter__MAX_SIZE = 1
};
// ball_placement_failures
enum
{
  robocup_ssl_msgs__msg__TeamInfo__ball_placement_failures__MAX_SIZE = 1
};
// can_place_ball
enum
{
  robocup_ssl_msgs__msg__TeamInfo__can_place_ball__MAX_SIZE = 1
};
// max_allowed_bots
enum
{
  robocup_ssl_msgs__msg__TeamInfo__max_allowed_bots__MAX_SIZE = 1
};
// bot_substitution_intent
enum
{
  robocup_ssl_msgs__msg__TeamInfo__bot_substitution_intent__MAX_SIZE = 1
};
// ball_placement_failures_reached
enum
{
  robocup_ssl_msgs__msg__TeamInfo__ball_placement_failures_reached__MAX_SIZE = 1
};

// Struct defined in msg/TeamInfo in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__TeamInfo
{
  rosidl_runtime_c__String name;
  uint32_t score;
  uint32_t red_cards;
  rosidl_runtime_c__uint32__Sequence yellow_card_times;
  uint32_t yellow_cards;
  uint32_t timeouts;
  uint32_t timeout_time;
  uint32_t goalkeeper;
  rosidl_runtime_c__uint32__Sequence foul_counter;
  rosidl_runtime_c__uint32__Sequence ball_placement_failures;
  rosidl_runtime_c__boolean__Sequence can_place_ball;
  rosidl_runtime_c__uint32__Sequence max_allowed_bots;
  rosidl_runtime_c__boolean__Sequence bot_substitution_intent;
  rosidl_runtime_c__boolean__Sequence ball_placement_failures_reached;
} robocup_ssl_msgs__msg__TeamInfo;

// Struct for a sequence of robocup_ssl_msgs__msg__TeamInfo.
typedef struct robocup_ssl_msgs__msg__TeamInfo__Sequence
{
  robocup_ssl_msgs__msg__TeamInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__TeamInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__STRUCT_H_
