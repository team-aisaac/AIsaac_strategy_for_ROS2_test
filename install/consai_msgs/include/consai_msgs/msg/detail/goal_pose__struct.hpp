// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:msg/GoalPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__STRUCT_HPP_
#define CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "consai_msgs/msg/detail/state2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__msg__GoalPose __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__msg__GoalPose __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalPose_
{
  using Type = GoalPose_<ContainerAllocator>;

  explicit GoalPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->team_is_yellow = false;
    }
  }

  explicit GoalPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->team_is_yellow = false;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _team_is_yellow_type =
    bool;
  _team_is_yellow_type team_is_yellow;
  using _pose_type =
    consai_msgs::msg::State2D_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__team_is_yellow(
    const bool & _arg)
  {
    this->team_is_yellow = _arg;
    return *this;
  }
  Type & set__pose(
    const consai_msgs::msg::State2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::msg::GoalPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::msg::GoalPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::GoalPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::GoalPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__msg__GoalPose
    std::shared_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__msg__GoalPose
    std::shared_ptr<consai_msgs::msg::GoalPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalPose_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->team_is_yellow != other.team_is_yellow) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalPose_

// alias to use template instance with default allocator
using GoalPose =
  consai_msgs::msg::GoalPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__STRUCT_HPP_
