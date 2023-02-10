// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/ParsedReferee.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'designated_position'
#include "consai_msgs/msg/detail/state2_d__struct.h"

// Struct defined in msg/ParsedReferee in the package consai_msgs.
typedef struct consai_msgs__msg__ParsedReferee
{
  consai_msgs__msg__State2D designated_position;
  bool is_placement;
  bool is_inplay;
  bool is_their_setplay;
  bool is_our_setplay;
} consai_msgs__msg__ParsedReferee;

// Struct for a sequence of consai_msgs__msg__ParsedReferee.
typedef struct consai_msgs__msg__ParsedReferee__Sequence
{
  consai_msgs__msg__ParsedReferee * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__ParsedReferee__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__STRUCT_H_
