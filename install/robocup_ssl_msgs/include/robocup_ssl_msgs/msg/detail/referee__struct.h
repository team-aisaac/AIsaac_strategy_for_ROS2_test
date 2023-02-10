// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STAGE_NORMAL_FIRST_HALF_PRE'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_NORMAL_FIRST_HALF_PRE = 0ul
};

/// Constant 'STAGE_NORMAL_FIRST_HALF'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_NORMAL_FIRST_HALF = 1ul
};

/// Constant 'STAGE_NORMAL_HALF_TIME'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_NORMAL_HALF_TIME = 2ul
};

/// Constant 'STAGE_NORMAL_SECOND_HALF_PRE'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_NORMAL_SECOND_HALF_PRE = 3ul
};

/// Constant 'STAGE_NORMAL_SECOND_HALF'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_NORMAL_SECOND_HALF = 4ul
};

/// Constant 'STAGE_EXTRA_TIME_BREAK'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_EXTRA_TIME_BREAK = 5ul
};

/// Constant 'STAGE_EXTRA_FIRST_HALF_PRE'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_EXTRA_FIRST_HALF_PRE = 6ul
};

/// Constant 'STAGE_EXTRA_FIRST_HALF'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_EXTRA_FIRST_HALF = 7ul
};

/// Constant 'STAGE_EXTRA_HALF_TIME'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_EXTRA_HALF_TIME = 8ul
};

/// Constant 'STAGE_EXTRA_SECOND_HALF_PRE'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_EXTRA_SECOND_HALF_PRE = 9ul
};

/// Constant 'STAGE_EXTRA_SECOND_HALF'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_EXTRA_SECOND_HALF = 10ul
};

/// Constant 'STAGE_PENALTY_SHOOTOUT_BREAK'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_PENALTY_SHOOTOUT_BREAK = 11ul
};

/// Constant 'STAGE_PENALTY_SHOOTOUT'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_PENALTY_SHOOTOUT = 12ul
};

/// Constant 'STAGE_POST_GAME'.
enum
{
  robocup_ssl_msgs__msg__Referee__STAGE_POST_GAME = 13ul
};

/// Constant 'COMMAND_HALT'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_HALT = 0ul
};

/// Constant 'COMMAND_STOP'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_STOP = 1ul
};

/// Constant 'COMMAND_NORMAL_START'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_NORMAL_START = 2ul
};

/// Constant 'COMMAND_FORCE_START'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_FORCE_START = 3ul
};

/// Constant 'COMMAND_PREPARE_KICKOFF_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_PREPARE_KICKOFF_YELLOW = 4ul
};

/// Constant 'COMMAND_PREPARE_KICKOFF_BLUE'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_PREPARE_KICKOFF_BLUE = 5ul
};

/// Constant 'COMMAND_PREPARE_PENALTY_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_PREPARE_PENALTY_YELLOW = 6ul
};

/// Constant 'COMMAND_PREPARE_PENALTY_BLUE'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_PREPARE_PENALTY_BLUE = 7ul
};

/// Constant 'COMMAND_DIRECT_FREE_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_DIRECT_FREE_YELLOW = 8ul
};

/// Constant 'COMMAND_DIRECT_FREE_BLUE'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_DIRECT_FREE_BLUE = 9ul
};

/// Constant 'COMMAND_INDIRECT_FREE_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_INDIRECT_FREE_YELLOW = 10ul
};

/// Constant 'COMMAND_INDIRECT_FREE_BLUE'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_INDIRECT_FREE_BLUE = 11ul
};

/// Constant 'COMMAND_TIMEOUT_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_TIMEOUT_YELLOW = 12ul
};

/// Constant 'COMMAND_TIMEOUT_BLUE'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_TIMEOUT_BLUE = 13ul
};

/// Constant 'COMMAND_GOAL_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_GOAL_YELLOW = 14ul
};

/// Constant 'COMMAND_GOAL_BLUE'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_GOAL_BLUE = 15ul
};

/// Constant 'COMMAND_BALL_PLACEMENT_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_BALL_PLACEMENT_YELLOW = 16ul
};

/// Constant 'COMMAND_BALL_PLACEMENT_BLUE'.
enum
{
  robocup_ssl_msgs__msg__Referee__COMMAND_BALL_PLACEMENT_BLUE = 17ul
};

// Include directives for member types
// Member 'stage_time_left'
// Member 'blue_team_on_positive_half'
// Member 'next_command'
// Member 'current_action_time_remaining'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'yellow'
// Member 'blue'
#include "robocup_ssl_msgs/msg/detail/team_info__struct.h"
// Member 'designated_position'
#include "robocup_ssl_msgs/msg/detail/point__struct.h"

// constants for array fields with an upper bound
// stage_time_left
enum
{
  robocup_ssl_msgs__msg__Referee__stage_time_left__MAX_SIZE = 1
};
// designated_position
enum
{
  robocup_ssl_msgs__msg__Referee__designated_position__MAX_SIZE = 1
};
// blue_team_on_positive_half
enum
{
  robocup_ssl_msgs__msg__Referee__blue_team_on_positive_half__MAX_SIZE = 1
};
// next_command
enum
{
  robocup_ssl_msgs__msg__Referee__next_command__MAX_SIZE = 1
};
// current_action_time_remaining
enum
{
  robocup_ssl_msgs__msg__Referee__current_action_time_remaining__MAX_SIZE = 1
};

// Struct defined in msg/Referee in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__Referee
{
  uint64_t packet_timestamp;
  uint32_t stage;
  rosidl_runtime_c__int32__Sequence stage_time_left;
  uint32_t command;
  uint32_t command_counter;
  uint64_t command_timestamp;
  robocup_ssl_msgs__msg__TeamInfo yellow;
  robocup_ssl_msgs__msg__TeamInfo blue;
  robocup_ssl_msgs__msg__Point__Sequence designated_position;
  rosidl_runtime_c__boolean__Sequence blue_team_on_positive_half;
  rosidl_runtime_c__uint32__Sequence next_command;
  rosidl_runtime_c__int32__Sequence current_action_time_remaining;
} robocup_ssl_msgs__msg__Referee;

// Struct for a sequence of robocup_ssl_msgs__msg__Referee.
typedef struct robocup_ssl_msgs__msg__Referee__Sequence
{
  robocup_ssl_msgs__msg__Referee * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__Referee__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__STRUCT_H_
