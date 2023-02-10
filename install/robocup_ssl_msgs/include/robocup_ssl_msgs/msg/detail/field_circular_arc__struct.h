// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/FieldCircularArc.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNDEFINED'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__UNDEFINED = 0ul
};

/// Constant 'CENTER_CIRCLE'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__CENTER_CIRCLE = 1ul
};

/// Constant 'TOP_TOUCH_LINE'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__TOP_TOUCH_LINE = 2ul
};

/// Constant 'BOTTOM_TOUCH_LINE'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__BOTTOM_TOUCH_LINE = 3ul
};

/// Constant 'LEFT_GOAL_LINE'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__LEFT_GOAL_LINE = 4ul
};

/// Constant 'RIGHT_GOAL_LINE'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__RIGHT_GOAL_LINE = 5ul
};

/// Constant 'HALFWAY_LINE'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__HALFWAY_LINE = 6ul
};

/// Constant 'CENTER_LINE'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__CENTER_LINE = 7ul
};

/// Constant 'LEFT_PENALTY_STRETCH'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__LEFT_PENALTY_STRETCH = 8ul
};

/// Constant 'RIGHT_PENALTY_STRETCH'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__RIGHT_PENALTY_STRETCH = 9ul
};

/// Constant 'LEFT_FIELD_LEFT_PENALTY_STRETCH'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__LEFT_FIELD_LEFT_PENALTY_STRETCH = 10ul
};

/// Constant 'LEFT_FIELD_RIGHT_PENALTY_STRETCH'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__LEFT_FIELD_RIGHT_PENALTY_STRETCH = 11ul
};

/// Constant 'RIGHT_FIELD_LEFT_PENALTY_STRETCH'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__RIGHT_FIELD_LEFT_PENALTY_STRETCH = 12ul
};

/// Constant 'RIGHT_FIELD_RIGHT_PENALTY_STRETCH'.
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__RIGHT_FIELD_RIGHT_PENALTY_STRETCH = 13ul
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'center'
#include "robocup_ssl_msgs/msg/detail/vector2f__struct.h"
// Member 'type'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// type
enum
{
  robocup_ssl_msgs__msg__FieldCircularArc__type__MAX_SIZE = 1
};

// Struct defined in msg/FieldCircularArc in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__FieldCircularArc
{
  rosidl_runtime_c__String name;
  robocup_ssl_msgs__msg__Vector2f center;
  float radius;
  float a1;
  float a2;
  float thickness;
  rosidl_runtime_c__uint32__Sequence type;
} robocup_ssl_msgs__msg__FieldCircularArc;

// Struct for a sequence of robocup_ssl_msgs__msg__FieldCircularArc.
typedef struct robocup_ssl_msgs__msg__FieldCircularArc__Sequence
{
  robocup_ssl_msgs__msg__FieldCircularArc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__FieldCircularArc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_H_
