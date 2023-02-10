// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/BallReplacement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/ball_replacement__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/ball_replacement__functions.h"
#include "robocup_ssl_msgs/msg/detail/ball_replacement__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `vx`
// Member `vy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__BallReplacement__init(message_memory);
}

void BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__BallReplacement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallReplacement, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallReplacement, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallReplacement, vx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallReplacement, vy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "BallReplacement",  // message name
  4,  // number of fields
  sizeof(robocup_ssl_msgs__msg__BallReplacement),
  BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_member_array,  // message members
  BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_init_function,  // function to initialize message memory (memory has to be allocated)
  BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_type_support_handle = {
  0,
  &BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, BallReplacement)() {
  if (!BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_type_support_handle.typesupport_identifier) {
    BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BallReplacement__rosidl_typesupport_introspection_c__BallReplacement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
