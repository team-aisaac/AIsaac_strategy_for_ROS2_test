// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/TeamInfo.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/team_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_TeamInfo_ball_placement_failures_reached
{
public:
  explicit Init_TeamInfo_ball_placement_failures_reached(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::TeamInfo ball_placement_failures_reached(::robocup_ssl_msgs::msg::TeamInfo::_ball_placement_failures_reached_type arg)
  {
    msg_.ball_placement_failures_reached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_bot_substitution_intent
{
public:
  explicit Init_TeamInfo_bot_substitution_intent(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_ball_placement_failures_reached bot_substitution_intent(::robocup_ssl_msgs::msg::TeamInfo::_bot_substitution_intent_type arg)
  {
    msg_.bot_substitution_intent = std::move(arg);
    return Init_TeamInfo_ball_placement_failures_reached(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_max_allowed_bots
{
public:
  explicit Init_TeamInfo_max_allowed_bots(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_bot_substitution_intent max_allowed_bots(::robocup_ssl_msgs::msg::TeamInfo::_max_allowed_bots_type arg)
  {
    msg_.max_allowed_bots = std::move(arg);
    return Init_TeamInfo_bot_substitution_intent(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_can_place_ball
{
public:
  explicit Init_TeamInfo_can_place_ball(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_max_allowed_bots can_place_ball(::robocup_ssl_msgs::msg::TeamInfo::_can_place_ball_type arg)
  {
    msg_.can_place_ball = std::move(arg);
    return Init_TeamInfo_max_allowed_bots(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_ball_placement_failures
{
public:
  explicit Init_TeamInfo_ball_placement_failures(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_can_place_ball ball_placement_failures(::robocup_ssl_msgs::msg::TeamInfo::_ball_placement_failures_type arg)
  {
    msg_.ball_placement_failures = std::move(arg);
    return Init_TeamInfo_can_place_ball(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_foul_counter
{
public:
  explicit Init_TeamInfo_foul_counter(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_ball_placement_failures foul_counter(::robocup_ssl_msgs::msg::TeamInfo::_foul_counter_type arg)
  {
    msg_.foul_counter = std::move(arg);
    return Init_TeamInfo_ball_placement_failures(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_goalkeeper
{
public:
  explicit Init_TeamInfo_goalkeeper(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_foul_counter goalkeeper(::robocup_ssl_msgs::msg::TeamInfo::_goalkeeper_type arg)
  {
    msg_.goalkeeper = std::move(arg);
    return Init_TeamInfo_foul_counter(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_timeout_time
{
public:
  explicit Init_TeamInfo_timeout_time(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_goalkeeper timeout_time(::robocup_ssl_msgs::msg::TeamInfo::_timeout_time_type arg)
  {
    msg_.timeout_time = std::move(arg);
    return Init_TeamInfo_goalkeeper(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_timeouts
{
public:
  explicit Init_TeamInfo_timeouts(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_timeout_time timeouts(::robocup_ssl_msgs::msg::TeamInfo::_timeouts_type arg)
  {
    msg_.timeouts = std::move(arg);
    return Init_TeamInfo_timeout_time(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_yellow_cards
{
public:
  explicit Init_TeamInfo_yellow_cards(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_timeouts yellow_cards(::robocup_ssl_msgs::msg::TeamInfo::_yellow_cards_type arg)
  {
    msg_.yellow_cards = std::move(arg);
    return Init_TeamInfo_timeouts(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_yellow_card_times
{
public:
  explicit Init_TeamInfo_yellow_card_times(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_yellow_cards yellow_card_times(::robocup_ssl_msgs::msg::TeamInfo::_yellow_card_times_type arg)
  {
    msg_.yellow_card_times = std::move(arg);
    return Init_TeamInfo_yellow_cards(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_red_cards
{
public:
  explicit Init_TeamInfo_red_cards(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_yellow_card_times red_cards(::robocup_ssl_msgs::msg::TeamInfo::_red_cards_type arg)
  {
    msg_.red_cards = std::move(arg);
    return Init_TeamInfo_yellow_card_times(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_score
{
public:
  explicit Init_TeamInfo_score(::robocup_ssl_msgs::msg::TeamInfo & msg)
  : msg_(msg)
  {}
  Init_TeamInfo_red_cards score(::robocup_ssl_msgs::msg::TeamInfo::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_TeamInfo_red_cards(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

class Init_TeamInfo_name
{
public:
  Init_TeamInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeamInfo_score name(::robocup_ssl_msgs::msg::TeamInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TeamInfo_score(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TeamInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::TeamInfo>()
{
  return robocup_ssl_msgs::msg::builder::Init_TeamInfo_name();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__BUILDER_HPP_
