// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from consai_msgs:msg/ConstraintTheta.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "consai_msgs/msg/detail/constraint_theta__struct.hpp"
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

void ConstraintTheta_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) consai_msgs::msg::ConstraintTheta(_init);
}

void ConstraintTheta_fini_function(void * message_memory)
{
  auto typed_message = static_cast<consai_msgs::msg::ConstraintTheta *>(message_memory);
  typed_message->~ConstraintTheta();
}

size_t size_function__ConstraintTheta__value_theta(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConstraintTheta__value_theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ConstraintTheta__value_theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ConstraintTheta__value_theta(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConstraintTheta__object(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConstraintTheta__object(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  return &member[index];
}

void * get_function__ConstraintTheta__object(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  return &member[index];
}

void resize_function__ConstraintTheta__object(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConstraintTheta_message_member_array[3] = {
  {
    "value_theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintTheta, value_theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConstraintTheta__value_theta,  // size() function pointer
    get_const_function__ConstraintTheta__value_theta,  // get_const(index) function pointer
    get_function__ConstraintTheta__value_theta,  // get(index) function pointer
    resize_function__ConstraintTheta__value_theta  // resize(index) function pointer
  },
  {
    "object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<consai_msgs::msg::ConstraintObject>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintTheta, object),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConstraintTheta__object,  // size() function pointer
    get_const_function__ConstraintTheta__object,  // get_const(index) function pointer
    get_function__ConstraintTheta__object,  // get(index) function pointer
    resize_function__ConstraintTheta__object  // resize(index) function pointer
  },
  {
    "param",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintTheta, param),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConstraintTheta_message_members = {
  "consai_msgs::msg",  // message namespace
  "ConstraintTheta",  // message name
  3,  // number of fields
  sizeof(consai_msgs::msg::ConstraintTheta),
  ConstraintTheta_message_member_array,  // message members
  ConstraintTheta_init_function,  // function to initialize message memory (memory has to be allocated)
  ConstraintTheta_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConstraintTheta_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConstraintTheta_message_members,
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
get_message_type_support_handle<consai_msgs::msg::ConstraintTheta>()
{
  return &::consai_msgs::msg::rosidl_typesupport_introspection_cpp::ConstraintTheta_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, consai_msgs, msg, ConstraintTheta)() {
  return &::consai_msgs::msg::rosidl_typesupport_introspection_cpp::ConstraintTheta_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
