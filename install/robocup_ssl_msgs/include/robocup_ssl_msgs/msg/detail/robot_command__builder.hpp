// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/robot_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotCommand_wheel4
{
public:
  explicit Init_RobotCommand_wheel4(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::RobotCommand wheel4(::robocup_ssl_msgs::msg::RobotCommand::_wheel4_type arg)
  {
    msg_.wheel4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_wheel3
{
public:
  explicit Init_RobotCommand_wheel3(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_wheel4 wheel3(::robocup_ssl_msgs::msg::RobotCommand::_wheel3_type arg)
  {
    msg_.wheel3 = std::move(arg);
    return Init_RobotCommand_wheel4(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_wheel2
{
public:
  explicit Init_RobotCommand_wheel2(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_wheel3 wheel2(::robocup_ssl_msgs::msg::RobotCommand::_wheel2_type arg)
  {
    msg_.wheel2 = std::move(arg);
    return Init_RobotCommand_wheel3(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_wheel1
{
public:
  explicit Init_RobotCommand_wheel1(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_wheel2 wheel1(::robocup_ssl_msgs::msg::RobotCommand::_wheel1_type arg)
  {
    msg_.wheel1 = std::move(arg);
    return Init_RobotCommand_wheel2(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_wheelsspeed
{
public:
  explicit Init_RobotCommand_wheelsspeed(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_wheel1 wheelsspeed(::robocup_ssl_msgs::msg::RobotCommand::_wheelsspeed_type arg)
  {
    msg_.wheelsspeed = std::move(arg);
    return Init_RobotCommand_wheel1(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_spinner
{
public:
  explicit Init_RobotCommand_spinner(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_wheelsspeed spinner(::robocup_ssl_msgs::msg::RobotCommand::_spinner_type arg)
  {
    msg_.spinner = std::move(arg);
    return Init_RobotCommand_wheelsspeed(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_velangular
{
public:
  explicit Init_RobotCommand_velangular(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_spinner velangular(::robocup_ssl_msgs::msg::RobotCommand::_velangular_type arg)
  {
    msg_.velangular = std::move(arg);
    return Init_RobotCommand_spinner(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_velnormal
{
public:
  explicit Init_RobotCommand_velnormal(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_velangular velnormal(::robocup_ssl_msgs::msg::RobotCommand::_velnormal_type arg)
  {
    msg_.velnormal = std::move(arg);
    return Init_RobotCommand_velangular(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_veltangent
{
public:
  explicit Init_RobotCommand_veltangent(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_velnormal veltangent(::robocup_ssl_msgs::msg::RobotCommand::_veltangent_type arg)
  {
    msg_.veltangent = std::move(arg);
    return Init_RobotCommand_velnormal(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_kickspeedz
{
public:
  explicit Init_RobotCommand_kickspeedz(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_veltangent kickspeedz(::robocup_ssl_msgs::msg::RobotCommand::_kickspeedz_type arg)
  {
    msg_.kickspeedz = std::move(arg);
    return Init_RobotCommand_veltangent(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_kickspeedx
{
public:
  explicit Init_RobotCommand_kickspeedx(::robocup_ssl_msgs::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_kickspeedz kickspeedx(::robocup_ssl_msgs::msg::RobotCommand::_kickspeedx_type arg)
  {
    msg_.kickspeedx = std::move(arg);
    return Init_RobotCommand_kickspeedz(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

class Init_RobotCommand_id
{
public:
  Init_RobotCommand_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_kickspeedx id(::robocup_ssl_msgs::msg::RobotCommand::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RobotCommand_kickspeedx(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::RobotCommand>()
{
  return robocup_ssl_msgs::msg::builder::Init_RobotCommand_id();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
