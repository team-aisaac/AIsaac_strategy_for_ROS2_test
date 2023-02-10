// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/GeometryFieldSize.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'field_lines'
#include "robocup_ssl_msgs/msg/detail/field_line_segment__struct.h"
// Member 'field_arcs'
#include "robocup_ssl_msgs/msg/detail/field_circular_arc__struct.h"
// Member 'penalty_area_depth'
// Member 'penalty_area_width'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// penalty_area_depth
enum
{
  robocup_ssl_msgs__msg__GeometryFieldSize__penalty_area_depth__MAX_SIZE = 1
};
// penalty_area_width
enum
{
  robocup_ssl_msgs__msg__GeometryFieldSize__penalty_area_width__MAX_SIZE = 1
};

// Struct defined in msg/GeometryFieldSize in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__GeometryFieldSize
{
  int32_t field_length;
  int32_t field_width;
  int32_t goal_width;
  int32_t goal_depth;
  int32_t boundary_width;
  robocup_ssl_msgs__msg__FieldLineSegment__Sequence field_lines;
  robocup_ssl_msgs__msg__FieldCircularArc__Sequence field_arcs;
  rosidl_runtime_c__int32__Sequence penalty_area_depth;
  rosidl_runtime_c__int32__Sequence penalty_area_width;
} robocup_ssl_msgs__msg__GeometryFieldSize;

// Struct for a sequence of robocup_ssl_msgs__msg__GeometryFieldSize.
typedef struct robocup_ssl_msgs__msg__GeometryFieldSize__Sequence
{
  robocup_ssl_msgs__msg__GeometryFieldSize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__GeometryFieldSize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__STRUCT_H_
