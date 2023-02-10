// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from consai_msgs:msg/ParsedReferee.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "consai_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "consai_msgs/msg/detail/parsed_referee__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace consai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai_msgs
cdr_serialize(
  const consai_msgs::msg::ParsedReferee & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  consai_msgs::msg::ParsedReferee & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai_msgs
get_serialized_size(
  const consai_msgs::msg::ParsedReferee & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai_msgs
max_serialized_size_ParsedReferee(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace consai_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, consai_msgs, msg, ParsedReferee)();

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
