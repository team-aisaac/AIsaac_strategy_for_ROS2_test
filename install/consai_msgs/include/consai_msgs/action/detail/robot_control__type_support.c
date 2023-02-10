// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from consai_msgs:action/RobotControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
#include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "consai_msgs/action/detail/robot_control__functions.h"
#include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `max_velocity_xy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pose`
#include "consai_msgs/msg/constraint_pose.h"
// Member `pose`
#include "consai_msgs/msg/detail/constraint_pose__rosidl_typesupport_introspection_c.h"
// Member `line`
#include "consai_msgs/msg/constraint_line.h"
// Member `line`
#include "consai_msgs/msg/detail/constraint_line__rosidl_typesupport_introspection_c.h"
// Member `kick_target`
// Member `dribble_target`
#include "consai_msgs/msg/constraint_xy.h"
// Member `kick_target`
// Member `dribble_target`
#include "consai_msgs/msg/detail/constraint_xy__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_Goal__init(message_memory);
}

void RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_Goal__fini(message_memory);
}

size_t RobotControl_Goal__rosidl_typesupport_introspection_c__size_function__ConstraintPose__pose(
  const void * untyped_member)
{
  const consai_msgs__msg__ConstraintPose__Sequence * member =
    (const consai_msgs__msg__ConstraintPose__Sequence *)(untyped_member);
  return member->size;
}

const void * RobotControl_Goal__rosidl_typesupport_introspection_c__get_const_function__ConstraintPose__pose(
  const void * untyped_member, size_t index)
{
  const consai_msgs__msg__ConstraintPose__Sequence * member =
    (const consai_msgs__msg__ConstraintPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RobotControl_Goal__rosidl_typesupport_introspection_c__get_function__ConstraintPose__pose(
  void * untyped_member, size_t index)
{
  consai_msgs__msg__ConstraintPose__Sequence * member =
    (consai_msgs__msg__ConstraintPose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RobotControl_Goal__rosidl_typesupport_introspection_c__resize_function__ConstraintPose__pose(
  void * untyped_member, size_t size)
{
  consai_msgs__msg__ConstraintPose__Sequence * member =
    (consai_msgs__msg__ConstraintPose__Sequence *)(untyped_member);
  consai_msgs__msg__ConstraintPose__Sequence__fini(member);
  return consai_msgs__msg__ConstraintPose__Sequence__init(member, size);
}

size_t RobotControl_Goal__rosidl_typesupport_introspection_c__size_function__ConstraintLine__line(
  const void * untyped_member)
{
  const consai_msgs__msg__ConstraintLine__Sequence * member =
    (const consai_msgs__msg__ConstraintLine__Sequence *)(untyped_member);
  return member->size;
}

const void * RobotControl_Goal__rosidl_typesupport_introspection_c__get_const_function__ConstraintLine__line(
  const void * untyped_member, size_t index)
{
  const consai_msgs__msg__ConstraintLine__Sequence * member =
    (const consai_msgs__msg__ConstraintLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RobotControl_Goal__rosidl_typesupport_introspection_c__get_function__ConstraintLine__line(
  void * untyped_member, size_t index)
{
  consai_msgs__msg__ConstraintLine__Sequence * member =
    (consai_msgs__msg__ConstraintLine__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RobotControl_Goal__rosidl_typesupport_introspection_c__resize_function__ConstraintLine__line(
  void * untyped_member, size_t size)
{
  consai_msgs__msg__ConstraintLine__Sequence * member =
    (consai_msgs__msg__ConstraintLine__Sequence *)(untyped_member);
  consai_msgs__msg__ConstraintLine__Sequence__fini(member);
  return consai_msgs__msg__ConstraintLine__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_member_array[15] = {
  {
    "stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keep_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, keep_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity_xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, max_velocity_xy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, pose),  // bytes offset in struct
    NULL,  // default value
    RobotControl_Goal__rosidl_typesupport_introspection_c__size_function__ConstraintPose__pose,  // size() function pointer
    RobotControl_Goal__rosidl_typesupport_introspection_c__get_const_function__ConstraintPose__pose,  // get_const(index) function pointer
    RobotControl_Goal__rosidl_typesupport_introspection_c__get_function__ConstraintPose__pose,  // get(index) function pointer
    RobotControl_Goal__rosidl_typesupport_introspection_c__resize_function__ConstraintPose__pose  // resize(index) function pointer
  },
  {
    "line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, line),  // bytes offset in struct
    NULL,  // default value
    RobotControl_Goal__rosidl_typesupport_introspection_c__size_function__ConstraintLine__line,  // size() function pointer
    RobotControl_Goal__rosidl_typesupport_introspection_c__get_const_function__ConstraintLine__line,  // get_const(index) function pointer
    RobotControl_Goal__rosidl_typesupport_introspection_c__get_function__ConstraintLine__line,  // get(index) function pointer
    RobotControl_Goal__rosidl_typesupport_introspection_c__resize_function__ConstraintLine__line  // resize(index) function pointer
  },
  {
    "kick_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, kick_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kick_pass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, kick_pass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kick_setplay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, kick_setplay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kick_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, kick_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dribble_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, dribble_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dribble_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, dribble_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receive_ball",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, receive_ball),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reflect_shoot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, reflect_shoot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avoid_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, avoid_obstacles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avoid_placement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Goal, avoid_placement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_Goal",  // message name
  15,  // number of fields
  sizeof(consai_msgs__action__RobotControl_Goal),
  RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_member_array,  // message members
  RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_type_support_handle = {
  0,
  &RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_Goal)() {
  RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintPose)();
  RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintLine)();
  RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintXY)();
  RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintXY)();
  if (!RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_type_support_handle.typesupport_identifier) {
    RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_Goal__rosidl_typesupport_introspection_c__RobotControl_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_Result__init(message_memory);
}

void RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_Result",  // message name
  2,  // number of fields
  sizeof(consai_msgs__action__RobotControl_Result),
  RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_member_array,  // message members
  RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_type_support_handle = {
  0,
  &RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_Result)() {
  if (!RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_type_support_handle.typesupport_identifier) {
    RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_Result__rosidl_typesupport_introspection_c__RobotControl_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `remaining_pose`
// Member `present_velocity`
#include "consai_msgs/msg/state2_d.h"
// Member `remaining_pose`
// Member `present_velocity`
#include "consai_msgs/msg/detail/state2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_Feedback__init(message_memory);
}

void RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_member_array[2] = {
  {
    "remaining_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Feedback, remaining_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "present_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_Feedback, present_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_Feedback",  // message name
  2,  // number of fields
  sizeof(consai_msgs__action__RobotControl_Feedback),
  RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_member_array,  // message members
  RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_type_support_handle = {
  0,
  &RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_Feedback)() {
  RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, State2D)();
  RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, State2D)();
  if (!RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_type_support_handle.typesupport_identifier) {
    RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_Feedback__rosidl_typesupport_introspection_c__RobotControl_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "consai_msgs/action/robot_control.h"
// Member `goal`
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_SendGoal_Request__init(message_memory);
}

void RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(consai_msgs__action__RobotControl_SendGoal_Request),
  RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_member_array,  // message members
  RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_type_support_handle = {
  0,
  &RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_SendGoal_Request)() {
  RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_Goal)();
  if (!RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_SendGoal_Request__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_SendGoal_Response__init(message_memory);
}

void RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(consai_msgs__action__RobotControl_SendGoal_Response),
  RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_member_array,  // message members
  RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_type_support_handle = {
  0,
  &RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_SendGoal_Response)() {
  RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_SendGoal_Response__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_service_members = {
  "consai_msgs__action",  // service namespace
  "RobotControl_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_service_type_support_handle = {
  0,
  &consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_SendGoal)() {
  if (!consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_service_type_support_handle.typesupport_identifier) {
    consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_SendGoal_Response)()->data;
  }

  return &consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_GetResult_Request__init(message_memory);
}

void RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(consai_msgs__action__RobotControl_GetResult_Request),
  RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_member_array,  // message members
  RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_type_support_handle = {
  0,
  &RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_GetResult_Request)() {
  RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_GetResult_Request__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "consai_msgs/action/robot_control.h"
// Member `result`
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_GetResult_Response__init(message_memory);
}

void RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(consai_msgs__action__RobotControl_GetResult_Response),
  RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_member_array,  // message members
  RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_type_support_handle = {
  0,
  &RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_GetResult_Response)() {
  RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_Result)();
  if (!RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_GetResult_Response__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_service_members = {
  "consai_msgs__action",  // service namespace
  "RobotControl_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_service_type_support_handle = {
  0,
  &consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_GetResult)() {
  if (!consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_service_type_support_handle.typesupport_identifier) {
    consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_GetResult_Response)()->data;
  }

  return &consai_msgs__action__detail__robot_control__rosidl_typesupport_introspection_c__RobotControl_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__functions.h"
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "consai_msgs/action/robot_control.h"
// Member `feedback`
// already included above
// #include "consai_msgs/action/detail/robot_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__action__RobotControl_FeedbackMessage__init(message_memory);
}

void RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_fini_function(void * message_memory)
{
  consai_msgs__action__RobotControl_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__action__RobotControl_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_members = {
  "consai_msgs__action",  // message namespace
  "RobotControl_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(consai_msgs__action__RobotControl_FeedbackMessage),
  RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_member_array,  // message members
  RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_type_support_handle = {
  0,
  &RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_FeedbackMessage)() {
  RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, action, RobotControl_Feedback)();
  if (!RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotControl_FeedbackMessage__rosidl_typesupport_introspection_c__RobotControl_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
