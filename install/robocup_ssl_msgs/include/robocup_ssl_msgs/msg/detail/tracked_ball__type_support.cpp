// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/TrackedBall.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/tracked_ball__struct.hpp"
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

void TrackedBall_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::TrackedBall(_init);
}

void TrackedBall_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::TrackedBall *>(message_memory);
  typed_message->~TrackedBall();
}

size_t size_function__TrackedBall__vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedBall__vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedBall__vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void resize_function__TrackedBall__vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrackedBall__visibility(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedBall__visibility(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedBall__visibility(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__TrackedBall__visibility(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedBall_message_member_array[3] = {
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedBall, pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedBall, vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedBall__vel,  // size() function pointer
    get_const_function__TrackedBall__vel,  // get_const(index) function pointer
    get_function__TrackedBall__vel,  // get(index) function pointer
    resize_function__TrackedBall__vel  // resize(index) function pointer
  },
  {
    "visibility",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedBall, visibility),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedBall__visibility,  // size() function pointer
    get_const_function__TrackedBall__visibility,  // get_const(index) function pointer
    get_function__TrackedBall__visibility,  // get(index) function pointer
    resize_function__TrackedBall__visibility  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedBall_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "TrackedBall",  // message name
  3,  // number of fields
  sizeof(robocup_ssl_msgs::msg::TrackedBall),
  TrackedBall_message_member_array,  // message members
  TrackedBall_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedBall_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedBall_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedBall_message_members,
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
get_message_type_support_handle<robocup_ssl_msgs::msg::TrackedBall>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedBall_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, TrackedBall)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedBall_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
