// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/DetectionBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_BALL__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_BALL__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/detection_ball__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectionBall_pixel_y
{
public:
  explicit Init_DetectionBall_pixel_y(::robocup_ssl_msgs::msg::DetectionBall & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::DetectionBall pixel_y(::robocup_ssl_msgs::msg::DetectionBall::_pixel_y_type arg)
  {
    msg_.pixel_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::DetectionBall msg_;
};

class Init_DetectionBall_pixel_x
{
public:
  explicit Init_DetectionBall_pixel_x(::robocup_ssl_msgs::msg::DetectionBall & msg)
  : msg_(msg)
  {}
  Init_DetectionBall_pixel_y pixel_x(::robocup_ssl_msgs::msg::DetectionBall::_pixel_x_type arg)
  {
    msg_.pixel_x = std::move(arg);
    return Init_DetectionBall_pixel_y(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::DetectionBall msg_;
};

class Init_DetectionBall_z
{
public:
  explicit Init_DetectionBall_z(::robocup_ssl_msgs::msg::DetectionBall & msg)
  : msg_(msg)
  {}
  Init_DetectionBall_pixel_x z(::robocup_ssl_msgs::msg::DetectionBall::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_DetectionBall_pixel_x(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::DetectionBall msg_;
};

class Init_DetectionBall_y
{
public:
  explicit Init_DetectionBall_y(::robocup_ssl_msgs::msg::DetectionBall & msg)
  : msg_(msg)
  {}
  Init_DetectionBall_z y(::robocup_ssl_msgs::msg::DetectionBall::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DetectionBall_z(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::DetectionBall msg_;
};

class Init_DetectionBall_x
{
public:
  explicit Init_DetectionBall_x(::robocup_ssl_msgs::msg::DetectionBall & msg)
  : msg_(msg)
  {}
  Init_DetectionBall_y x(::robocup_ssl_msgs::msg::DetectionBall::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DetectionBall_y(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::DetectionBall msg_;
};

class Init_DetectionBall_area
{
public:
  explicit Init_DetectionBall_area(::robocup_ssl_msgs::msg::DetectionBall & msg)
  : msg_(msg)
  {}
  Init_DetectionBall_x area(::robocup_ssl_msgs::msg::DetectionBall::_area_type arg)
  {
    msg_.area = std::move(arg);
    return Init_DetectionBall_x(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::DetectionBall msg_;
};

class Init_DetectionBall_confidence
{
public:
  Init_DetectionBall_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionBall_area confidence(::robocup_ssl_msgs::msg::DetectionBall::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_DetectionBall_area(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::DetectionBall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::DetectionBall>()
{
  return robocup_ssl_msgs::msg::builder::Init_DetectionBall_confidence();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_BALL__BUILDER_HPP_
