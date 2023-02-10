// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/FieldLineSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/field_line_segment__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/field_line_segment__functions.h"
#include "robocup_ssl_msgs/msg/detail/field_line_segment__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `p1`
// Member `p2`
#include "robocup_ssl_msgs/msg/vector2f.h"
// Member `p1`
// Member `p2`
#include "robocup_ssl_msgs/msg/detail/vector2f__rosidl_typesupport_introspection_c.h"
// Member `type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__FieldLineSegment__init(message_memory);
}

void FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__FieldLineSegment__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__FieldLineSegment, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__FieldLineSegment, p1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__FieldLineSegment, p2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thickness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__FieldLineSegment, thickness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__FieldLineSegment, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "FieldLineSegment",  // message name
  5,  // number of fields
  sizeof(robocup_ssl_msgs__msg__FieldLineSegment),
  FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_member_array,  // message members
  FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_type_support_handle = {
  0,
  &FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, FieldLineSegment)() {
  FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector2f)();
  FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector2f)();
  if (!FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_type_support_handle.typesupport_identifier) {
    FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FieldLineSegment__rosidl_typesupport_introspection_c__FieldLineSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
