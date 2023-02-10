// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robocup_ssl_msgs:msg/DetectionRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_ROBOT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_ROBOT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robocup_ssl_msgs/msg/detail/detection_robot__struct.hpp"

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

namespace robocup_ssl_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
cdr_serialize(
  const robocup_ssl_msgs::msg::DetectionRobot & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robocup_ssl_msgs::msg::DetectionRobot & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
get_serialized_size(
  const robocup_ssl_msgs::msg::DetectionRobot & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
max_serialized_size_DetectionRobot(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robocup_ssl_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robocup_ssl_msgs, msg, DetectionRobot)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_ROBOT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
