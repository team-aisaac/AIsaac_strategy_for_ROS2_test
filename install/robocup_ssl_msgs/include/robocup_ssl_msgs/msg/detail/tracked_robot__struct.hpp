// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/TrackedRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robot_id'
#include "robocup_ssl_msgs/msg/detail/robot_id__struct.hpp"
// Member 'pos'
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__TrackedRobot __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__TrackedRobot __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedRobot_
{
  using Type = TrackedRobot_<ContainerAllocator>;

  explicit TrackedRobot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_init),
    pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->orientation = 0.0f;
    }
  }

  explicit TrackedRobot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc, _init),
    pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->orientation = 0.0f;
    }
  }

  // field types and members
  using _robot_id_type =
    robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>;
  _robot_id_type robot_id;
  using _pos_type =
    robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>;
  _pos_type pos;
  using _orientation_type =
    float;
  _orientation_type orientation;
  using _vel_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>>::other>;
  _vel_type vel;
  using _vel_angular_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _vel_angular_type vel_angular;
  using _visibility_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _visibility_type visibility;

  // setters for named parameter idiom
  Type & set__robot_id(
    const robocup_ssl_msgs::msg::RobotId_<ContainerAllocator> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__pos(
    const robocup_ssl_msgs::msg::Vector2_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__vel(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>>::other> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__vel_angular(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->vel_angular = _arg;
    return *this;
  }
  Type & set__visibility(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->visibility = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__TrackedRobot
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__TrackedRobot
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedRobot_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->vel_angular != other.vel_angular) {
      return false;
    }
    if (this->visibility != other.visibility) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedRobot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedRobot_

// alias to use template instance with default allocator
using TrackedRobot =
  robocup_ssl_msgs::msg::TrackedRobot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__STRUCT_HPP_
