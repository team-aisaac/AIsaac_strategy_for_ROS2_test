// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/KickedBall.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/kicked_ball__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/kicked_ball__functions.h"
#include "robocup_ssl_msgs/msg/detail/kicked_ball__struct.h"


// Include directives for member types
// Member `pos`
// Member `stop_pos`
#include "robocup_ssl_msgs/msg/vector2.h"
// Member `pos`
// Member `stop_pos`
#include "robocup_ssl_msgs/msg/detail/vector2__rosidl_typesupport_introspection_c.h"
// Member `vel`
#include "robocup_ssl_msgs/msg/vector3.h"
// Member `vel`
#include "robocup_ssl_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `stop_timestamp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `robot_id`
#include "robocup_ssl_msgs/msg/robot_id.h"
// Member `robot_id`
#include "robocup_ssl_msgs/msg/detail/robot_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void KickedBall__rosidl_typesupport_introspection_c__KickedBall_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__KickedBall__init(message_memory);
}

void KickedBall__rosidl_typesupport_introspection_c__KickedBall_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__KickedBall__fini(message_memory);
}

size_t KickedBall__rosidl_typesupport_introspection_c__size_function__Vector2__stop_pos(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (const robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  return member->size;
}

const void * KickedBall__rosidl_typesupport_introspection_c__get_const_function__Vector2__stop_pos(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (const robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * KickedBall__rosidl_typesupport_introspection_c__get_function__Vector2__stop_pos(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  return &member->data[index];
}

bool KickedBall__rosidl_typesupport_introspection_c__resize_function__Vector2__stop_pos(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__Vector2__Sequence__fini(member);
  return robocup_ssl_msgs__msg__Vector2__Sequence__init(member, size);
}

size_t KickedBall__rosidl_typesupport_introspection_c__size_function__RobotId__robot_id(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__RobotId__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotId__Sequence *)(untyped_member);
  return member->size;
}

const void * KickedBall__rosidl_typesupport_introspection_c__get_const_function__RobotId__robot_id(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__RobotId__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * KickedBall__rosidl_typesupport_introspection_c__get_function__RobotId__robot_id(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__RobotId__Sequence * member =
    (robocup_ssl_msgs__msg__RobotId__Sequence *)(untyped_member);
  return &member->data[index];
}

bool KickedBall__rosidl_typesupport_introspection_c__resize_function__RobotId__robot_id(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__RobotId__Sequence * member =
    (robocup_ssl_msgs__msg__RobotId__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__RobotId__Sequence__fini(member);
  return robocup_ssl_msgs__msg__RobotId__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_member_array[6] = {
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__KickedBall, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__KickedBall, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__KickedBall, start_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__KickedBall, stop_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__KickedBall, stop_pos),  // bytes offset in struct
    NULL,  // default value
    KickedBall__rosidl_typesupport_introspection_c__size_function__Vector2__stop_pos,  // size() function pointer
    KickedBall__rosidl_typesupport_introspection_c__get_const_function__Vector2__stop_pos,  // get_const(index) function pointer
    KickedBall__rosidl_typesupport_introspection_c__get_function__Vector2__stop_pos,  // get(index) function pointer
    KickedBall__rosidl_typesupport_introspection_c__resize_function__Vector2__stop_pos  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__KickedBall, robot_id),  // bytes offset in struct
    NULL,  // default value
    KickedBall__rosidl_typesupport_introspection_c__size_function__RobotId__robot_id,  // size() function pointer
    KickedBall__rosidl_typesupport_introspection_c__get_const_function__RobotId__robot_id,  // get_const(index) function pointer
    KickedBall__rosidl_typesupport_introspection_c__get_function__RobotId__robot_id,  // get(index) function pointer
    KickedBall__rosidl_typesupport_introspection_c__resize_function__RobotId__robot_id  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "KickedBall",  // message name
  6,  // number of fields
  sizeof(robocup_ssl_msgs__msg__KickedBall),
  KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_member_array,  // message members
  KickedBall__rosidl_typesupport_introspection_c__KickedBall_init_function,  // function to initialize message memory (memory has to be allocated)
  KickedBall__rosidl_typesupport_introspection_c__KickedBall_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_type_support_handle = {
  0,
  &KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, KickedBall)() {
  KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector2)();
  KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector3)();
  KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector2)();
  KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotId)();
  if (!KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_type_support_handle.typesupport_identifier) {
    KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &KickedBall__rosidl_typesupport_introspection_c__KickedBall_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
