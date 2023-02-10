// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/BallModelStraightTwoPhase.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_BallModelStraightTwoPhase_k_switch
{
public:
  explicit Init_BallModelStraightTwoPhase_k_switch(::robocup_ssl_msgs::msg::BallModelStraightTwoPhase & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::BallModelStraightTwoPhase k_switch(::robocup_ssl_msgs::msg::BallModelStraightTwoPhase::_k_switch_type arg)
  {
    msg_.k_switch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallModelStraightTwoPhase msg_;
};

class Init_BallModelStraightTwoPhase_acc_roll
{
public:
  explicit Init_BallModelStraightTwoPhase_acc_roll(::robocup_ssl_msgs::msg::BallModelStraightTwoPhase & msg)
  : msg_(msg)
  {}
  Init_BallModelStraightTwoPhase_k_switch acc_roll(::robocup_ssl_msgs::msg::BallModelStraightTwoPhase::_acc_roll_type arg)
  {
    msg_.acc_roll = std::move(arg);
    return Init_BallModelStraightTwoPhase_k_switch(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallModelStraightTwoPhase msg_;
};

class Init_BallModelStraightTwoPhase_acc_slide
{
public:
  Init_BallModelStraightTwoPhase_acc_slide()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallModelStraightTwoPhase_acc_roll acc_slide(::robocup_ssl_msgs::msg::BallModelStraightTwoPhase::_acc_slide_type arg)
  {
    msg_.acc_slide = std::move(arg);
    return Init_BallModelStraightTwoPhase_acc_roll(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallModelStraightTwoPhase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::BallModelStraightTwoPhase>()
{
  return robocup_ssl_msgs::msg::builder::Init_BallModelStraightTwoPhase_acc_slide();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__BUILDER_HPP_
