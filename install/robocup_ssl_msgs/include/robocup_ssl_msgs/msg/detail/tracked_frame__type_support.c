// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/TrackedFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/tracked_frame__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/tracked_frame__functions.h"
#include "robocup_ssl_msgs/msg/detail/tracked_frame__struct.h"


// Include directives for member types
// Member `balls`
#include "robocup_ssl_msgs/msg/tracked_ball.h"
// Member `balls`
#include "robocup_ssl_msgs/msg/detail/tracked_ball__rosidl_typesupport_introspection_c.h"
// Member `robots`
#include "robocup_ssl_msgs/msg/tracked_robot.h"
// Member `robots`
#include "robocup_ssl_msgs/msg/detail/tracked_robot__rosidl_typesupport_introspection_c.h"
// Member `kicked_ball`
#include "robocup_ssl_msgs/msg/kicked_ball.h"
// Member `kicked_ball`
#include "robocup_ssl_msgs/msg/detail/kicked_ball__rosidl_typesupport_introspection_c.h"
// Member `capabilities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__TrackedFrame__init(message_memory);
}

void TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__TrackedFrame__fini(message_memory);
}

size_t TrackedFrame__rosidl_typesupport_introspection_c__size_function__TrackedBall__balls(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__TrackedBall__Sequence * member =
    (const robocup_ssl_msgs__msg__TrackedBall__Sequence *)(untyped_member);
  return member->size;
}

const void * TrackedFrame__rosidl_typesupport_introspection_c__get_const_function__TrackedBall__balls(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__TrackedBall__Sequence * member =
    (const robocup_ssl_msgs__msg__TrackedBall__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrackedFrame__rosidl_typesupport_introspection_c__get_function__TrackedBall__balls(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__TrackedBall__Sequence * member =
    (robocup_ssl_msgs__msg__TrackedBall__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrackedFrame__rosidl_typesupport_introspection_c__resize_function__TrackedBall__balls(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__TrackedBall__Sequence * member =
    (robocup_ssl_msgs__msg__TrackedBall__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__TrackedBall__Sequence__fini(member);
  return robocup_ssl_msgs__msg__TrackedBall__Sequence__init(member, size);
}

size_t TrackedFrame__rosidl_typesupport_introspection_c__size_function__TrackedRobot__robots(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__TrackedRobot__Sequence * member =
    (const robocup_ssl_msgs__msg__TrackedRobot__Sequence *)(untyped_member);
  return member->size;
}

const void * TrackedFrame__rosidl_typesupport_introspection_c__get_const_function__TrackedRobot__robots(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__TrackedRobot__Sequence * member =
    (const robocup_ssl_msgs__msg__TrackedRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrackedFrame__rosidl_typesupport_introspection_c__get_function__TrackedRobot__robots(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__TrackedRobot__Sequence * member =
    (robocup_ssl_msgs__msg__TrackedRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrackedFrame__rosidl_typesupport_introspection_c__resize_function__TrackedRobot__robots(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__TrackedRobot__Sequence * member =
    (robocup_ssl_msgs__msg__TrackedRobot__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__TrackedRobot__Sequence__fini(member);
  return robocup_ssl_msgs__msg__TrackedRobot__Sequence__init(member, size);
}

size_t TrackedFrame__rosidl_typesupport_introspection_c__size_function__KickedBall__kicked_ball(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__KickedBall__Sequence * member =
    (const robocup_ssl_msgs__msg__KickedBall__Sequence *)(untyped_member);
  return member->size;
}

const void * TrackedFrame__rosidl_typesupport_introspection_c__get_const_function__KickedBall__kicked_ball(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__KickedBall__Sequence * member =
    (const robocup_ssl_msgs__msg__KickedBall__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrackedFrame__rosidl_typesupport_introspection_c__get_function__KickedBall__kicked_ball(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__KickedBall__Sequence * member =
    (robocup_ssl_msgs__msg__KickedBall__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrackedFrame__rosidl_typesupport_introspection_c__resize_function__KickedBall__kicked_ball(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__KickedBall__Sequence * member =
    (robocup_ssl_msgs__msg__KickedBall__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__KickedBall__Sequence__fini(member);
  return robocup_ssl_msgs__msg__KickedBall__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_member_array[6] = {
  {
    "frame_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedFrame, frame_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedFrame, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "balls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedFrame, balls),  // bytes offset in struct
    NULL,  // default value
    TrackedFrame__rosidl_typesupport_introspection_c__size_function__TrackedBall__balls,  // size() function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__get_const_function__TrackedBall__balls,  // get_const(index) function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__get_function__TrackedBall__balls,  // get(index) function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__resize_function__TrackedBall__balls  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedFrame, robots),  // bytes offset in struct
    NULL,  // default value
    TrackedFrame__rosidl_typesupport_introspection_c__size_function__TrackedRobot__robots,  // size() function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__get_const_function__TrackedRobot__robots,  // get_const(index) function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__get_function__TrackedRobot__robots,  // get(index) function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__resize_function__TrackedRobot__robots  // resize(index) function pointer
  },
  {
    "kicked_ball",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedFrame, kicked_ball),  // bytes offset in struct
    NULL,  // default value
    TrackedFrame__rosidl_typesupport_introspection_c__size_function__KickedBall__kicked_ball,  // size() function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__get_const_function__KickedBall__kicked_ball,  // get_const(index) function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__get_function__KickedBall__kicked_ball,  // get(index) function pointer
    TrackedFrame__rosidl_typesupport_introspection_c__resize_function__KickedBall__kicked_ball  // resize(index) function pointer
  },
  {
    "capabilities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedFrame, capabilities),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "TrackedFrame",  // message name
  6,  // number of fields
  sizeof(robocup_ssl_msgs__msg__TrackedFrame),
  TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_member_array,  // message members
  TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_type_support_handle = {
  0,
  &TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, TrackedFrame)() {
  TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, TrackedBall)();
  TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, TrackedRobot)();
  TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, KickedBall)();
  if (!TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_type_support_handle.typesupport_identifier) {
    TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackedFrame__rosidl_typesupport_introspection_c__TrackedFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
