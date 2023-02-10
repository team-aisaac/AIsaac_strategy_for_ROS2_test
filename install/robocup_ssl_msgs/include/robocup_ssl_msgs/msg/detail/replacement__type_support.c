// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/Replacement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/replacement__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/replacement__functions.h"
#include "robocup_ssl_msgs/msg/detail/replacement__struct.h"


// Include directives for member types
// Member `ball`
#include "robocup_ssl_msgs/msg/ball_replacement.h"
// Member `ball`
#include "robocup_ssl_msgs/msg/detail/ball_replacement__rosidl_typesupport_introspection_c.h"
// Member `robots`
#include "robocup_ssl_msgs/msg/robot_replacement.h"
// Member `robots`
#include "robocup_ssl_msgs/msg/detail/robot_replacement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Replacement__rosidl_typesupport_introspection_c__Replacement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__Replacement__init(message_memory);
}

void Replacement__rosidl_typesupport_introspection_c__Replacement_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__Replacement__fini(message_memory);
}

size_t Replacement__rosidl_typesupport_introspection_c__size_function__BallReplacement__ball(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__BallReplacement__Sequence * member =
    (const robocup_ssl_msgs__msg__BallReplacement__Sequence *)(untyped_member);
  return member->size;
}

const void * Replacement__rosidl_typesupport_introspection_c__get_const_function__BallReplacement__ball(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__BallReplacement__Sequence * member =
    (const robocup_ssl_msgs__msg__BallReplacement__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Replacement__rosidl_typesupport_introspection_c__get_function__BallReplacement__ball(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__BallReplacement__Sequence * member =
    (robocup_ssl_msgs__msg__BallReplacement__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Replacement__rosidl_typesupport_introspection_c__resize_function__BallReplacement__ball(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__BallReplacement__Sequence * member =
    (robocup_ssl_msgs__msg__BallReplacement__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__BallReplacement__Sequence__fini(member);
  return robocup_ssl_msgs__msg__BallReplacement__Sequence__init(member, size);
}

size_t Replacement__rosidl_typesupport_introspection_c__size_function__RobotReplacement__robots(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__RobotReplacement__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotReplacement__Sequence *)(untyped_member);
  return member->size;
}

const void * Replacement__rosidl_typesupport_introspection_c__get_const_function__RobotReplacement__robots(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__RobotReplacement__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotReplacement__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Replacement__rosidl_typesupport_introspection_c__get_function__RobotReplacement__robots(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__RobotReplacement__Sequence * member =
    (robocup_ssl_msgs__msg__RobotReplacement__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Replacement__rosidl_typesupport_introspection_c__resize_function__RobotReplacement__robots(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__RobotReplacement__Sequence * member =
    (robocup_ssl_msgs__msg__RobotReplacement__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__RobotReplacement__Sequence__fini(member);
  return robocup_ssl_msgs__msg__RobotReplacement__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Replacement__rosidl_typesupport_introspection_c__Replacement_message_member_array[2] = {
  {
    "ball",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Replacement, ball),  // bytes offset in struct
    NULL,  // default value
    Replacement__rosidl_typesupport_introspection_c__size_function__BallReplacement__ball,  // size() function pointer
    Replacement__rosidl_typesupport_introspection_c__get_const_function__BallReplacement__ball,  // get_const(index) function pointer
    Replacement__rosidl_typesupport_introspection_c__get_function__BallReplacement__ball,  // get(index) function pointer
    Replacement__rosidl_typesupport_introspection_c__resize_function__BallReplacement__ball  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Replacement, robots),  // bytes offset in struct
    NULL,  // default value
    Replacement__rosidl_typesupport_introspection_c__size_function__RobotReplacement__robots,  // size() function pointer
    Replacement__rosidl_typesupport_introspection_c__get_const_function__RobotReplacement__robots,  // get_const(index) function pointer
    Replacement__rosidl_typesupport_introspection_c__get_function__RobotReplacement__robots,  // get(index) function pointer
    Replacement__rosidl_typesupport_introspection_c__resize_function__RobotReplacement__robots  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Replacement__rosidl_typesupport_introspection_c__Replacement_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "Replacement",  // message name
  2,  // number of fields
  sizeof(robocup_ssl_msgs__msg__Replacement),
  Replacement__rosidl_typesupport_introspection_c__Replacement_message_member_array,  // message members
  Replacement__rosidl_typesupport_introspection_c__Replacement_init_function,  // function to initialize message memory (memory has to be allocated)
  Replacement__rosidl_typesupport_introspection_c__Replacement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Replacement__rosidl_typesupport_introspection_c__Replacement_message_type_support_handle = {
  0,
  &Replacement__rosidl_typesupport_introspection_c__Replacement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Replacement)() {
  Replacement__rosidl_typesupport_introspection_c__Replacement_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, BallReplacement)();
  Replacement__rosidl_typesupport_introspection_c__Replacement_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotReplacement)();
  if (!Replacement__rosidl_typesupport_introspection_c__Replacement_message_type_support_handle.typesupport_identifier) {
    Replacement__rosidl_typesupport_introspection_c__Replacement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Replacement__rosidl_typesupport_introspection_c__Replacement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
