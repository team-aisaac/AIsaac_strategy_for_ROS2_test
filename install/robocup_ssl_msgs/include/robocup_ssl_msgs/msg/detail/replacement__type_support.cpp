// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/Replacement.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/replacement__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robocup_ssl_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Replacement_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::Replacement(_init);
}

void Replacement_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::Replacement *>(message_memory);
  typed_message->~Replacement();
}

size_t size_function__Replacement__ball(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::BallReplacement> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Replacement__ball(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::BallReplacement> *>(untyped_member);
  return &member[index];
}

void * get_function__Replacement__ball(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::BallReplacement> *>(untyped_member);
  return &member[index];
}

void resize_function__Replacement__ball(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::BallReplacement> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Replacement__robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::RobotReplacement> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Replacement__robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::RobotReplacement> *>(untyped_member);
  return &member[index];
}

void * get_function__Replacement__robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::RobotReplacement> *>(untyped_member);
  return &member[index];
}

void resize_function__Replacement__robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::RobotReplacement> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Replacement_message_member_array[2] = {
  {
    "ball",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::BallReplacement>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Replacement, ball),  // bytes offset in struct
    nullptr,  // default value
    size_function__Replacement__ball,  // size() function pointer
    get_const_function__Replacement__ball,  // get_const(index) function pointer
    get_function__Replacement__ball,  // get(index) function pointer
    resize_function__Replacement__ball  // resize(index) function pointer
  },
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::RobotReplacement>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Replacement, robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__Replacement__robots,  // size() function pointer
    get_const_function__Replacement__robots,  // get_const(index) function pointer
    get_function__Replacement__robots,  // get(index) function pointer
    resize_function__Replacement__robots  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Replacement_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "Replacement",  // message name
  2,  // number of fields
  sizeof(robocup_ssl_msgs::msg::Replacement),
  Replacement_message_member_array,  // message members
  Replacement_init_function,  // function to initialize message memory (memory has to be allocated)
  Replacement_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Replacement_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Replacement_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robocup_ssl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robocup_ssl_msgs::msg::Replacement>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::Replacement_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, Replacement)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::Replacement_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
