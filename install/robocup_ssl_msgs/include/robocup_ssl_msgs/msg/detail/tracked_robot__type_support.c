// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/TrackedRobot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/tracked_robot__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/tracked_robot__functions.h"
#include "robocup_ssl_msgs/msg/detail/tracked_robot__struct.h"


// Include directives for member types
// Member `robot_id`
#include "robocup_ssl_msgs/msg/robot_id.h"
// Member `robot_id`
#include "robocup_ssl_msgs/msg/detail/robot_id__rosidl_typesupport_introspection_c.h"
// Member `pos`
// Member `vel`
#include "robocup_ssl_msgs/msg/vector2.h"
// Member `pos`
// Member `vel`
#include "robocup_ssl_msgs/msg/detail/vector2__rosidl_typesupport_introspection_c.h"
// Member `vel_angular`
// Member `visibility`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__TrackedRobot__init(message_memory);
}

void TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__TrackedRobot__fini(message_memory);
}

size_t TrackedRobot__rosidl_typesupport_introspection_c__size_function__Vector2__vel(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (const robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  return member->size;
}

const void * TrackedRobot__rosidl_typesupport_introspection_c__get_const_function__Vector2__vel(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (const robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrackedRobot__rosidl_typesupport_introspection_c__get_function__Vector2__vel(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrackedRobot__rosidl_typesupport_introspection_c__resize_function__Vector2__vel(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__Vector2__Sequence * member =
    (robocup_ssl_msgs__msg__Vector2__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__Vector2__Sequence__fini(member);
  return robocup_ssl_msgs__msg__Vector2__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_member_array[6] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedRobot, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedRobot, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedRobot, orientation),  // bytes offset in struct
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
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedRobot, vel),  // bytes offset in struct
    NULL,  // default value
    TrackedRobot__rosidl_typesupport_introspection_c__size_function__Vector2__vel,  // size() function pointer
    TrackedRobot__rosidl_typesupport_introspection_c__get_const_function__Vector2__vel,  // get_const(index) function pointer
    TrackedRobot__rosidl_typesupport_introspection_c__get_function__Vector2__vel,  // get(index) function pointer
    TrackedRobot__rosidl_typesupport_introspection_c__resize_function__Vector2__vel  // resize(index) function pointer
  },
  {
    "vel_angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedRobot, vel_angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visibility",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__TrackedRobot, visibility),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "TrackedRobot",  // message name
  6,  // number of fields
  sizeof(robocup_ssl_msgs__msg__TrackedRobot),
  TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_member_array,  // message members
  TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_type_support_handle = {
  0,
  &TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, TrackedRobot)() {
  TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotId)();
  TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector2)();
  TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector2)();
  if (!TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_type_support_handle.typesupport_identifier) {
    TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackedRobot__rosidl_typesupport_introspection_c__TrackedRobot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
