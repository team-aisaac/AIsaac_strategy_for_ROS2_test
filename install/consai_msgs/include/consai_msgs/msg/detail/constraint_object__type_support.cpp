// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from consai_msgs:msg/ConstraintObject.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "consai_msgs/msg/detail/constraint_object__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace consai_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ConstraintObject_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) consai_msgs::msg::ConstraintObject(_init);
}

void ConstraintObject_fini_function(void * message_memory)
{
  auto typed_message = static_cast<consai_msgs::msg::ConstraintObject *>(message_memory);
  typed_message->~ConstraintObject();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConstraintObject_message_member_array[2] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintObject, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintObject, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConstraintObject_message_members = {
  "consai_msgs::msg",  // message namespace
  "ConstraintObject",  // message name
  2,  // number of fields
  sizeof(consai_msgs::msg::ConstraintObject),
  ConstraintObject_message_member_array,  // message members
  ConstraintObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ConstraintObject_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConstraintObject_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConstraintObject_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace consai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<consai_msgs::msg::ConstraintObject>()
{
  return &::consai_msgs::msg::rosidl_typesupport_introspection_cpp::ConstraintObject_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, consai_msgs, msg, ConstraintObject)() {
  return &::consai_msgs::msg::rosidl_typesupport_introspection_cpp::ConstraintObject_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
