// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/ParsedReferee.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__BUILDER_HPP_

#include "consai_msgs/msg/detail/parsed_referee__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_ParsedReferee_is_our_setplay
{
public:
  explicit Init_ParsedReferee_is_our_setplay(::consai_msgs::msg::ParsedReferee & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::ParsedReferee is_our_setplay(::consai_msgs::msg::ParsedReferee::_is_our_setplay_type arg)
  {
    msg_.is_our_setplay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::ParsedReferee msg_;
};

class Init_ParsedReferee_is_their_setplay
{
public:
  explicit Init_ParsedReferee_is_their_setplay(::consai_msgs::msg::ParsedReferee & msg)
  : msg_(msg)
  {}
  Init_ParsedReferee_is_our_setplay is_their_setplay(::consai_msgs::msg::ParsedReferee::_is_their_setplay_type arg)
  {
    msg_.is_their_setplay = std::move(arg);
    return Init_ParsedReferee_is_our_setplay(msg_);
  }

private:
  ::consai_msgs::msg::ParsedReferee msg_;
};

class Init_ParsedReferee_is_inplay
{
public:
  explicit Init_ParsedReferee_is_inplay(::consai_msgs::msg::ParsedReferee & msg)
  : msg_(msg)
  {}
  Init_ParsedReferee_is_their_setplay is_inplay(::consai_msgs::msg::ParsedReferee::_is_inplay_type arg)
  {
    msg_.is_inplay = std::move(arg);
    return Init_ParsedReferee_is_their_setplay(msg_);
  }

private:
  ::consai_msgs::msg::ParsedReferee msg_;
};

class Init_ParsedReferee_is_placement
{
public:
  explicit Init_ParsedReferee_is_placement(::consai_msgs::msg::ParsedReferee & msg)
  : msg_(msg)
  {}
  Init_ParsedReferee_is_inplay is_placement(::consai_msgs::msg::ParsedReferee::_is_placement_type arg)
  {
    msg_.is_placement = std::move(arg);
    return Init_ParsedReferee_is_inplay(msg_);
  }

private:
  ::consai_msgs::msg::ParsedReferee msg_;
};

class Init_ParsedReferee_designated_position
{
public:
  Init_ParsedReferee_designated_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParsedReferee_is_placement designated_position(::consai_msgs::msg::ParsedReferee::_designated_position_type arg)
  {
    msg_.designated_position = std::move(arg);
    return Init_ParsedReferee_is_placement(msg_);
  }

private:
  ::consai_msgs::msg::ParsedReferee msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::ParsedReferee>()
{
  return consai_msgs::msg::builder::Init_ParsedReferee_designated_position();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__BUILDER_HPP_
