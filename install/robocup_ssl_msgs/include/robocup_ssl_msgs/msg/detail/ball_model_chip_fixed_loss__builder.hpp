// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/BallModelChipFixedLoss.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_BallModelChipFixedLoss_damping_z
{
public:
  explicit Init_BallModelChipFixedLoss_damping_z(::robocup_ssl_msgs::msg::BallModelChipFixedLoss & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::BallModelChipFixedLoss damping_z(::robocup_ssl_msgs::msg::BallModelChipFixedLoss::_damping_z_type arg)
  {
    msg_.damping_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallModelChipFixedLoss msg_;
};

class Init_BallModelChipFixedLoss_damping_xy_other_hops
{
public:
  explicit Init_BallModelChipFixedLoss_damping_xy_other_hops(::robocup_ssl_msgs::msg::BallModelChipFixedLoss & msg)
  : msg_(msg)
  {}
  Init_BallModelChipFixedLoss_damping_z damping_xy_other_hops(::robocup_ssl_msgs::msg::BallModelChipFixedLoss::_damping_xy_other_hops_type arg)
  {
    msg_.damping_xy_other_hops = std::move(arg);
    return Init_BallModelChipFixedLoss_damping_z(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallModelChipFixedLoss msg_;
};

class Init_BallModelChipFixedLoss_damping_xy_first_hop
{
public:
  Init_BallModelChipFixedLoss_damping_xy_first_hop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallModelChipFixedLoss_damping_xy_other_hops damping_xy_first_hop(::robocup_ssl_msgs::msg::BallModelChipFixedLoss::_damping_xy_first_hop_type arg)
  {
    msg_.damping_xy_first_hop = std::move(arg);
    return Init_BallModelChipFixedLoss_damping_xy_other_hops(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallModelChipFixedLoss msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::BallModelChipFixedLoss>()
{
  return robocup_ssl_msgs::msg::builder::Init_BallModelChipFixedLoss_damping_xy_first_hop();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__BUILDER_HPP_
