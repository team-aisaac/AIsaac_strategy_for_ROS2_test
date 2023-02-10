// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/BallModelStraightTwoPhase.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BallModelStraightTwoPhase in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__BallModelStraightTwoPhase
{
  double acc_slide;
  double acc_roll;
  double k_switch;
} robocup_ssl_msgs__msg__BallModelStraightTwoPhase;

// Struct for a sequence of robocup_ssl_msgs__msg__BallModelStraightTwoPhase.
typedef struct robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence
{
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__STRUCT_H_
