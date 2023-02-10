// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/KickedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pos'
// Member 'stop_pos'
#include "robocup_ssl_msgs/msg/detail/vector2__struct.hpp"
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector3__struct.hpp"
// Member 'robot_id'
#include "robocup_ssl_msgs/msg/detail/robot_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__KickedBall __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__KickedBall __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KickedBall_
{
  using Type = KickedBall_<ContainerAllocator>;

  explicit KickedBall_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init),
    vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_timestamp = 0.0;
    }
  }

  explicit KickedBall_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init),
    vel(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_timestamp = 0.0;
    }
  }

  // field types and members
  using _pos_type =
    robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>;
  _pos_type pos;
  using _vel_type =
    robocup_ssl_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_type vel;
  using _start_timestamp_type =
    double;
  _start_timestamp_type start_timestamp;
  using _stop_timestamp_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _stop_timestamp_type stop_timestamp;
  using _stop_pos_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>>::other>;
  _stop_pos_type stop_pos;
  using _robot_id_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>>::other>;
  _robot_id_type robot_id;

  // setters for named parameter idiom
  Type & set__pos(
    const robocup_ssl_msgs::msg::Vector2_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const robocup_ssl_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__start_timestamp(
    const double & _arg)
  {
    this->start_timestamp = _arg;
    return *this;
  }
  Type & set__stop_timestamp(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->stop_timestamp = _arg;
    return *this;
  }
  Type & set__stop_pos(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Vector2_<ContainerAllocator>>::other> & _arg)
  {
    this->stop_pos = _arg;
    return *this;
  }
  Type & set__robot_id(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>>::other> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__KickedBall
    std::shared_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__KickedBall
    std::shared_ptr<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KickedBall_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->start_timestamp != other.start_timestamp) {
      return false;
    }
    if (this->stop_timestamp != other.stop_timestamp) {
      return false;
    }
    if (this->stop_pos != other.stop_pos) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const KickedBall_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KickedBall_

// alias to use template instance with default allocator
using KickedBall =
  robocup_ssl_msgs::msg::KickedBall_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__STRUCT_HPP_
