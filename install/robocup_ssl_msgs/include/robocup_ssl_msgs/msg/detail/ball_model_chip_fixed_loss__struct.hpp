// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/BallModelChipFixedLoss.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__BallModelChipFixedLoss __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__BallModelChipFixedLoss __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BallModelChipFixedLoss_
{
  using Type = BallModelChipFixedLoss_<ContainerAllocator>;

  explicit BallModelChipFixedLoss_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->damping_xy_first_hop = 0.0;
      this->damping_xy_other_hops = 0.0;
      this->damping_z = 0.0;
    }
  }

  explicit BallModelChipFixedLoss_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->damping_xy_first_hop = 0.0;
      this->damping_xy_other_hops = 0.0;
      this->damping_z = 0.0;
    }
  }

  // field types and members
  using _damping_xy_first_hop_type =
    double;
  _damping_xy_first_hop_type damping_xy_first_hop;
  using _damping_xy_other_hops_type =
    double;
  _damping_xy_other_hops_type damping_xy_other_hops;
  using _damping_z_type =
    double;
  _damping_z_type damping_z;

  // setters for named parameter idiom
  Type & set__damping_xy_first_hop(
    const double & _arg)
  {
    this->damping_xy_first_hop = _arg;
    return *this;
  }
  Type & set__damping_xy_other_hops(
    const double & _arg)
  {
    this->damping_xy_other_hops = _arg;
    return *this;
  }
  Type & set__damping_z(
    const double & _arg)
  {
    this->damping_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__BallModelChipFixedLoss
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__BallModelChipFixedLoss
    std::shared_ptr<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallModelChipFixedLoss_ & other) const
  {
    if (this->damping_xy_first_hop != other.damping_xy_first_hop) {
      return false;
    }
    if (this->damping_xy_other_hops != other.damping_xy_other_hops) {
      return false;
    }
    if (this->damping_z != other.damping_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const BallModelChipFixedLoss_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BallModelChipFixedLoss_

// alias to use template instance with default allocator
using BallModelChipFixedLoss =
  robocup_ssl_msgs::msg::BallModelChipFixedLoss_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__STRUCT_HPP_
