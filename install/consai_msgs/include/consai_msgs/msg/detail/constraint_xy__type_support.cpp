// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from consai_msgs:msg/ConstraintXY.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "consai_msgs/msg/detail/constraint_xy__struct.hpp"
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

void ConstraintXY_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) consai_msgs::msg::ConstraintXY(_init);
}

void ConstraintXY_fini_function(void * message_memory)
{
  auto typed_message = static_cast<consai_msgs::msg::ConstraintXY *>(message_memory);
  typed_message->~ConstraintXY();
}

size_t size_function__ConstraintXY__value_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConstraintXY__value_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ConstraintXY__value_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ConstraintXY__value_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConstraintXY__value_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConstraintXY__value_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ConstraintXY__value_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ConstraintXY__value_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConstraintXY__object(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConstraintXY__object(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  return &member[index];
}

void * get_function__ConstraintXY__object(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  return &member[index];
}

void resize_function__ConstraintXY__object(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<consai_msgs::msg::ConstraintObject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConstraintXY_message_member_array[4] = {
  {
    "normalized",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintXY, normalized),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintXY, value_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConstraintXY__value_x,  // size() function pointer
    get_const_function__ConstraintXY__value_x,  // get_const(index) function pointer
    get_function__ConstraintXY__value_x,  // get(index) function pointer
    resize_function__ConstraintXY__value_x  // resize(index) function pointer
  },
  {
    "value_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintXY, value_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConstraintXY__value_y,  // size() function pointer
    get_const_function__ConstraintXY__value_y,  // get_const(index) function pointer
    get_function__ConstraintXY__value_y,  // get(index) function pointer
    resize_function__ConstraintXY__value_y  // resize(index) function pointer
  },
  {
    "object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<consai_msgs::msg::ConstraintObject>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs::msg::ConstraintXY, object),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConstraintXY__object,  // size() function pointer
    get_const_function__ConstraintXY__object,  // get_const(index) function pointer
    get_function__ConstraintXY__object,  // get(index) function pointer
    resize_function__ConstraintXY__object  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConstraintXY_message_members = {
  "consai_msgs::msg",  // message namespace
  "ConstraintXY",  // message name
  4,  // number of fields
  sizeof(consai_msgs::msg::ConstraintXY),
  ConstraintXY_message_member_array,  // message members
  ConstraintXY_init_function,  // function to initialize message memory (memory has to be allocated)
  ConstraintXY_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConstraintXY_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConstraintXY_message_members,
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
get_message_type_support_handle<consai_msgs::msg::ConstraintXY>()
{
  return &::consai_msgs::msg::rosidl_typesupport_introspection_cpp::ConstraintXY_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, consai_msgs, msg, ConstraintXY)() {
  return &::consai_msgs::msg::rosidl_typesupport_introspection_cpp::ConstraintXY_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
