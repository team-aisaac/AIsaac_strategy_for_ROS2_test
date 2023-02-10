// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/DetectionFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_FRAME__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_FRAME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'balls'
#include "robocup_ssl_msgs/msg/detail/detection_ball__struct.hpp"
// Member 'robots_yellow'
// Member 'robots_blue'
#include "robocup_ssl_msgs/msg/detail/detection_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__DetectionFrame __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__DetectionFrame __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionFrame_
{
  using Type = DetectionFrame_<ContainerAllocator>;

  explicit DetectionFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_number = 0ul;
      this->t_capture = 0.0;
      this->t_sent = 0.0;
      this->camera_id = 0ul;
    }
  }

  explicit DetectionFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_number = 0ul;
      this->t_capture = 0.0;
      this->t_sent = 0.0;
      this->camera_id = 0ul;
    }
  }

  // field types and members
  using _frame_number_type =
    uint32_t;
  _frame_number_type frame_number;
  using _t_capture_type =
    double;
  _t_capture_type t_capture;
  using _t_sent_type =
    double;
  _t_sent_type t_sent;
  using _camera_id_type =
    uint32_t;
  _camera_id_type camera_id;
  using _balls_type =
    std::vector<robocup_ssl_msgs::msg::DetectionBall_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::DetectionBall_<ContainerAllocator>>::other>;
  _balls_type balls;
  using _robots_yellow_type =
    std::vector<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>>::other>;
  _robots_yellow_type robots_yellow;
  using _robots_blue_type =
    std::vector<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>>::other>;
  _robots_blue_type robots_blue;

  // setters for named parameter idiom
  Type & set__frame_number(
    const uint32_t & _arg)
  {
    this->frame_number = _arg;
    return *this;
  }
  Type & set__t_capture(
    const double & _arg)
  {
    this->t_capture = _arg;
    return *this;
  }
  Type & set__t_sent(
    const double & _arg)
  {
    this->t_sent = _arg;
    return *this;
  }
  Type & set__camera_id(
    const uint32_t & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__balls(
    const std::vector<robocup_ssl_msgs::msg::DetectionBall_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::DetectionBall_<ContainerAllocator>>::other> & _arg)
  {
    this->balls = _arg;
    return *this;
  }
  Type & set__robots_yellow(
    const std::vector<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>>::other> & _arg)
  {
    this->robots_yellow = _arg;
    return *this;
  }
  Type & set__robots_blue(
    const std::vector<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::DetectionRobot_<ContainerAllocator>>::other> & _arg)
  {
    this->robots_blue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__DetectionFrame
    std::shared_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__DetectionFrame
    std::shared_ptr<robocup_ssl_msgs::msg::DetectionFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionFrame_ & other) const
  {
    if (this->frame_number != other.frame_number) {
      return false;
    }
    if (this->t_capture != other.t_capture) {
      return false;
    }
    if (this->t_sent != other.t_sent) {
      return false;
    }
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->balls != other.balls) {
      return false;
    }
    if (this->robots_yellow != other.robots_yellow) {
      return false;
    }
    if (this->robots_blue != other.robots_blue) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionFrame_

// alias to use template instance with default allocator
using DetectionFrame =
  robocup_ssl_msgs::msg::DetectionFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_FRAME__STRUCT_HPP_
