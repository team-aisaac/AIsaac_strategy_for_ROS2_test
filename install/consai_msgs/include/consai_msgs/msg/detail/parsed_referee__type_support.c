// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from consai_msgs:msg/ParsedReferee.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "consai_msgs/msg/detail/parsed_referee__rosidl_typesupport_introspection_c.h"
#include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "consai_msgs/msg/detail/parsed_referee__functions.h"
#include "consai_msgs/msg/detail/parsed_referee__struct.h"


// Include directives for member types
// Member `designated_position`
#include "consai_msgs/msg/state2_d.h"
// Member `designated_position`
#include "consai_msgs/msg/detail/state2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__msg__ParsedReferee__init(message_memory);
}

void ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_fini_function(void * message_memory)
{
  consai_msgs__msg__ParsedReferee__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_member_array[5] = {
  {
    "designated_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ParsedReferee, designated_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_placement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ParsedReferee, is_placement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_inplay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ParsedReferee, is_inplay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_their_setplay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ParsedReferee, is_their_setplay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_our_setplay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ParsedReferee, is_our_setplay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_members = {
  "consai_msgs__msg",  // message namespace
  "ParsedReferee",  // message name
  5,  // number of fields
  sizeof(consai_msgs__msg__ParsedReferee),
  ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_member_array,  // message members
  ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_init_function,  // function to initialize message memory (memory has to be allocated)
  ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_type_support_handle = {
  0,
  &ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ParsedReferee)() {
  ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, State2D)();
  if (!ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_type_support_handle.typesupport_identifier) {
    ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ParsedReferee__rosidl_typesupport_introspection_c__ParsedReferee_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
