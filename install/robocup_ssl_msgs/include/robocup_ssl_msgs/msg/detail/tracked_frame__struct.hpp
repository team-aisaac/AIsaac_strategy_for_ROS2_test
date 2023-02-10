// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/TrackedFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'balls'
#include "robocup_ssl_msgs/msg/detail/tracked_ball__struct.hpp"
// Member 'robots'
#include "robocup_ssl_msgs/msg/detail/tracked_robot__struct.hpp"
// Member 'kicked_ball'
#include "robocup_ssl_msgs/msg/detail/kicked_ball__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__TrackedFrame __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__TrackedFrame __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedFrame_
{
  using Type = TrackedFrame_<ContainerAllocator>;

  explicit TrackedFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_number = 0ul;
      this->timestamp = 0.0;
    }
  }

  explicit TrackedFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_number = 0ul;
      this->timestamp = 0.0;
    }
  }

  // field types and members
  using _frame_number_type =
    uint32_t;
  _frame_number_type frame_number;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _balls_type =
    std::vector<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>>::other>;
  _balls_type balls;
  using _robots_type =
    std::vector<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>>::other>;
  _robots_type robots;
  using _kicked_ball_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>>::other>;
  _kicked_ball_type kicked_ball;
  using _capabilities_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _capabilities_type capabilities;

  // setters for named parameter idiom
  Type & set__frame_number(
    const uint32_t & _arg)
  {
    this->frame_number = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__balls(
    const std::vector<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>>::other> & _arg)
  {
    this->balls = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::TrackedRobot_<ContainerAllocator>>::other> & _arg)
  {
    this->robots = _arg;
    return *this;
  }
  Type & set__kicked_ball(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::KickedBall_<ContainerAllocator>>::other> & _arg)
  {
    this->kicked_ball = _arg;
    return *this;
  }
  Type & set__capabilities(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->capabilities = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CAPABILITY_UNKNOWN =
    0u;
  static constexpr uint32_t CAPABILITY_DETECT_FLYING_BALLS =
    1u;
  static constexpr uint32_t CAPABILITY_DETECT_MULTIPLE_BALLS =
    2u;
  static constexpr uint32_t CAPABILITY_DETECT_KICKED_BALLS =
    3u;

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__TrackedFrame
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__TrackedFrame
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedFrame_ & other) const
  {
    if (this->frame_number != other.frame_number) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->balls != other.balls) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    if (this->kicked_ball != other.kicked_ball) {
      return false;
    }
    if (this->capabilities != other.capabilities) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedFrame_

// alias to use template instance with default allocator
using TrackedFrame =
  robocup_ssl_msgs::msg::TrackedFrame_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t TrackedFrame_<ContainerAllocator>::CAPABILITY_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint32_t TrackedFrame_<ContainerAllocator>::CAPABILITY_DETECT_FLYING_BALLS;
template<typename ContainerAllocator>
constexpr uint32_t TrackedFrame_<ContainerAllocator>::CAPABILITY_DETECT_MULTIPLE_BALLS;
template<typename ContainerAllocator>
constexpr uint32_t TrackedFrame_<ContainerAllocator>::CAPABILITY_DETECT_KICKED_BALLS;

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__STRUCT_HPP_
