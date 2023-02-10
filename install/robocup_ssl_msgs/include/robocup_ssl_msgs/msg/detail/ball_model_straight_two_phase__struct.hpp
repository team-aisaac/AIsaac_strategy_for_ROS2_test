// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/BallModelStraightTwoPhase.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__BallModelStraightTwoPhase __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__BallModelStraightTwoPhase __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BallModelStraightTwoPhase_
{
  using Type = BallModelStraightTwoPhase_<ContainerAllocator>;

  explicit BallModelStraightTwoPhase_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_slide = 0.0;
      this->acc_roll = 0.0;
      this->k_switch = 0.0;
    }
  }

  explicit BallModelStraightTwoPhase_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_slide = 0.0;
      this->acc_roll = 0.0;
      this->k_switch = 0.0;
    }
  }

  // field types and members
  using _acc_slide_type =
    double;
  _acc_slide_type acc_slide;
  using _acc_roll_type =
    double;
  _acc_roll_type acc_roll;
  using _k_switch_type =
    double;
  _k_switch_type k_switch;

  // setters for named parameter idiom
  Type & set__acc_slide(
    const double & _arg)
  {
    this->acc_slide = _arg;
    return *this;
  }
  Type & set__acc_roll(
    const double & _arg)
  {
    this->acc_roll = _arg;
    return *this;
  }
  Type & set__k_switch(
    const double & _arg)
  {
    this->k_switch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__BallModelStraightTwoPhase
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__BallModelStraightTwoPhase
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallModelStraightTwoPhase_ & other) const
  {
    if (this->acc_slide != other.acc_slide) {
      return false;
    }
    if (this->acc_roll != other.acc_roll) {
      return false;
    }
    if (this->k_switch != other.k_switch) {
      return false;
    }
    return true;
  }
  bool operator!=(const BallModelStraightTwoPhase_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BallModelStraightTwoPhase_

// alias to use template instance with default allocator
using BallModelStraightTwoPhase =
  robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_STRAIGHT_TWO_PHASE__STRUCT_HPP_
