// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/RobotsStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/robots_status__struct.hpp"
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

void RobotsStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::RobotsStatus(_init);
}

void RobotsStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::RobotsStatus *>(message_memory);
  typed_message->~RobotsStatus();
}

size_t size_function__RobotsStatus__robots_status(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::RobotStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotsStatus__robots_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::RobotStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotsStatus__robots_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::RobotStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__RobotsStatus__robots_status(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::RobotStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotsStatus_message_member_array[1] = {
  {
    "robots_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::RobotStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::RobotsStatus, robots_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotsStatus__robots_status,  // size() function pointer
    get_const_function__RobotsStatus__robots_status,  // get_const(index) function pointer
    get_function__RobotsStatus__robots_status,  // get(index) function pointer
    resize_function__RobotsStatus__robots_status  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotsStatus_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "RobotsStatus",  // message name
  1,  // number of fields
  sizeof(robocup_ssl_msgs::msg::RobotsStatus),
  RobotsStatus_message_member_array,  // message members
  RobotsStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotsStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotsStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotsStatus_message_members,
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
get_message_type_support_handle<robocup_ssl_msgs::msg::RobotsStatus>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::RobotsStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, RobotsStatus)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::RobotsStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
