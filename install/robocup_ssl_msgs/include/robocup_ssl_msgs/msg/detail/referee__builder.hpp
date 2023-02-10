// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/referee__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_Referee_current_action_time_remaining
{
public:
  explicit Init_Referee_current_action_time_remaining(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::Referee current_action_time_remaining(::robocup_ssl_msgs::msg::Referee::_current_action_time_remaining_type arg)
  {
    msg_.current_action_time_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_next_command
{
public:
  explicit Init_Referee_next_command(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_current_action_time_remaining next_command(::robocup_ssl_msgs::msg::Referee::_next_command_type arg)
  {
    msg_.next_command = std::move(arg);
    return Init_Referee_current_action_time_remaining(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_blue_team_on_positive_half
{
public:
  explicit Init_Referee_blue_team_on_positive_half(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_next_command blue_team_on_positive_half(::robocup_ssl_msgs::msg::Referee::_blue_team_on_positive_half_type arg)
  {
    msg_.blue_team_on_positive_half = std::move(arg);
    return Init_Referee_next_command(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_designated_position
{
public:
  explicit Init_Referee_designated_position(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_team_on_positive_half designated_position(::robocup_ssl_msgs::msg::Referee::_designated_position_type arg)
  {
    msg_.designated_position = std::move(arg);
    return Init_Referee_blue_team_on_positive_half(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_blue
{
public:
  explicit Init_Referee_blue(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_designated_position blue(::robocup_ssl_msgs::msg::Referee::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return Init_Referee_designated_position(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_yellow
{
public:
  explicit Init_Referee_yellow(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue yellow(::robocup_ssl_msgs::msg::Referee::_yellow_type arg)
  {
    msg_.yellow = std::move(arg);
    return Init_Referee_blue(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_command_timestamp
{
public:
  explicit Init_Referee_command_timestamp(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_yellow command_timestamp(::robocup_ssl_msgs::msg::Referee::_command_timestamp_type arg)
  {
    msg_.command_timestamp = std::move(arg);
    return Init_Referee_yellow(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_command_counter
{
public:
  explicit Init_Referee_command_counter(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_command_timestamp command_counter(::robocup_ssl_msgs::msg::Referee::_command_counter_type arg)
  {
    msg_.command_counter = std::move(arg);
    return Init_Referee_command_timestamp(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_command
{
public:
  explicit Init_Referee_command(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_command_counter command(::robocup_ssl_msgs::msg::Referee::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Referee_command_counter(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_stage_time_left
{
public:
  explicit Init_Referee_stage_time_left(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_command stage_time_left(::robocup_ssl_msgs::msg::Referee::_stage_time_left_type arg)
  {
    msg_.stage_time_left = std::move(arg);
    return Init_Referee_command(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_stage
{
public:
  explicit Init_Referee_stage(::robocup_ssl_msgs::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_stage_time_left stage(::robocup_ssl_msgs::msg::Referee::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_Referee_stage_time_left(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

class Init_Referee_packet_timestamp
{
public:
  Init_Referee_packet_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Referee_stage packet_timestamp(::robocup_ssl_msgs::msg::Referee::_packet_timestamp_type arg)
  {
    msg_.packet_timestamp = std::move(arg);
    return Init_Referee_stage(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Referee msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::Referee>()
{
  return robocup_ssl_msgs::msg::builder::Init_Referee_packet_timestamp();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__BUILDER_HPP_
