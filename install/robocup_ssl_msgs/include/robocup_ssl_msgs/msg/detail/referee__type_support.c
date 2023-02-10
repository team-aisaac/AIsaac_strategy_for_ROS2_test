// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/Referee.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/referee__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/referee__functions.h"
#include "robocup_ssl_msgs/msg/detail/referee__struct.h"


// Include directives for member types
// Member `stage_time_left`
// Member `blue_team_on_positive_half`
// Member `next_command`
// Member `current_action_time_remaining`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `yellow`
// Member `blue`
#include "robocup_ssl_msgs/msg/team_info.h"
// Member `yellow`
// Member `blue`
#include "robocup_ssl_msgs/msg/detail/team_info__rosidl_typesupport_introspection_c.h"
// Member `designated_position`
#include "robocup_ssl_msgs/msg/point.h"
// Member `designated_position`
#include "robocup_ssl_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Referee__rosidl_typesupport_introspection_c__Referee_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__Referee__init(message_memory);
}

void Referee__rosidl_typesupport_introspection_c__Referee_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__Referee__fini(message_memory);
}

size_t Referee__rosidl_typesupport_introspection_c__size_function__Point__designated_position(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__Point__Sequence * member =
    (const robocup_ssl_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * Referee__rosidl_typesupport_introspection_c__get_const_function__Point__designated_position(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__Point__Sequence * member =
    (const robocup_ssl_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Referee__rosidl_typesupport_introspection_c__get_function__Point__designated_position(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__Point__Sequence * member =
    (robocup_ssl_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Referee__rosidl_typesupport_introspection_c__resize_function__Point__designated_position(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__Point__Sequence * member =
    (robocup_ssl_msgs__msg__Point__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__Point__Sequence__fini(member);
  return robocup_ssl_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Referee__rosidl_typesupport_introspection_c__Referee_message_member_array[12] = {
  {
    "packet_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, packet_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, stage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stage_time_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, stage_time_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, command_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, command_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, yellow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, blue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "designated_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, designated_position),  // bytes offset in struct
    NULL,  // default value
    Referee__rosidl_typesupport_introspection_c__size_function__Point__designated_position,  // size() function pointer
    Referee__rosidl_typesupport_introspection_c__get_const_function__Point__designated_position,  // get_const(index) function pointer
    Referee__rosidl_typesupport_introspection_c__get_function__Point__designated_position,  // get(index) function pointer
    Referee__rosidl_typesupport_introspection_c__resize_function__Point__designated_position  // resize(index) function pointer
  },
  {
    "blue_team_on_positive_half",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, blue_team_on_positive_half),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, next_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_action_time_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Referee, current_action_time_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Referee__rosidl_typesupport_introspection_c__Referee_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "Referee",  // message name
  12,  // number of fields
  sizeof(robocup_ssl_msgs__msg__Referee),
  Referee__rosidl_typesupport_introspection_c__Referee_message_member_array,  // message members
  Referee__rosidl_typesupport_introspection_c__Referee_init_function,  // function to initialize message memory (memory has to be allocated)
  Referee__rosidl_typesupport_introspection_c__Referee_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Referee__rosidl_typesupport_introspection_c__Referee_message_type_support_handle = {
  0,
  &Referee__rosidl_typesupport_introspection_c__Referee_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Referee)() {
  Referee__rosidl_typesupport_introspection_c__Referee_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, TeamInfo)();
  Referee__rosidl_typesupport_introspection_c__Referee_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, TeamInfo)();
  Referee__rosidl_typesupport_introspection_c__Referee_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Point)();
  if (!Referee__rosidl_typesupport_introspection_c__Referee_message_type_support_handle.typesupport_identifier) {
    Referee__rosidl_typesupport_introspection_c__Referee_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Referee__rosidl_typesupport_introspection_c__Referee_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
