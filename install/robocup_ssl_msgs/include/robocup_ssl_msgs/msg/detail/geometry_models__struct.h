// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/GeometryModels.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'straight_two_phase'
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__struct.h"
// Member 'chip_fixed_loss'
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__struct.h"

// constants for array fields with an upper bound
// straight_two_phase
enum
{
  robocup_ssl_msgs__msg__GeometryModels__straight_two_phase__MAX_SIZE = 1
};
// chip_fixed_loss
enum
{
  robocup_ssl_msgs__msg__GeometryModels__chip_fixed_loss__MAX_SIZE = 1
};

// Struct defined in msg/GeometryModels in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__GeometryModels
{
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence straight_two_phase;
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence chip_fixed_loss;
} robocup_ssl_msgs__msg__GeometryModels;

// Struct for a sequence of robocup_ssl_msgs__msg__GeometryModels.
typedef struct robocup_ssl_msgs__msg__GeometryModels__Sequence
{
  robocup_ssl_msgs__msg__GeometryModels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__GeometryModels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__STRUCT_H_
