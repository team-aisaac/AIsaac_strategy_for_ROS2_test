// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/RobotReplacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__RobotReplacement __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__RobotReplacement __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotReplacement_
{
  using Type = RobotReplacement_<ContainerAllocator>;

  explicit RobotReplacement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->dir = 0.0;
      this->id = 0ul;
      this->yellowteam = false;
    }
  }

  explicit RobotReplacement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->dir = 0.0;
      this->id = 0ul;
      this->yellowteam = false;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _dir_type =
    double;
  _dir_type dir;
  using _id_type =
    uint32_t;
  _id_type id;
  using _yellowteam_type =
    bool;
  _yellowteam_type yellowteam;
  using _turnon_type =
    rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other>;
  _turnon_type turnon;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__dir(
    const double & _arg)
  {
    this->dir = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__yellowteam(
    const bool & _arg)
  {
    this->yellowteam = _arg;
    return *this;
  }
  Type & set__turnon(
    const rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->turnon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotReplacement
    std::shared_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotReplacement
    std::shared_ptr<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotReplacement_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->dir != other.dir) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->yellowteam != other.yellowteam) {
      return false;
    }
    if (this->turnon != other.turnon) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotReplacement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotReplacement_

// alias to use template instance with default allocator
using RobotReplacement =
  robocup_ssl_msgs::msg::RobotReplacement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__STRUCT_HPP_
