// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:action/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__STRUCT_HPP_
#define CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "consai_msgs/msg/detail/constraint_pose__struct.hpp"
// Member 'line'
#include "consai_msgs/msg/detail/constraint_line__struct.hpp"
// Member 'kick_target'
// Member 'dribble_target'
#include "consai_msgs/msg/detail/constraint_xy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_Goal __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_Goal __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_Goal_
{
  using Type = RobotControl_Goal_<ContainerAllocator>;

  explicit RobotControl_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kick_target(_init),
    dribble_target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->stop = false;
      this->keep_control = false;
      this->kick_enable = false;
      this->kick_pass = false;
      this->kick_setplay = false;
      this->dribble_enable = false;
      this->receive_ball = false;
      this->reflect_shoot = false;
      this->avoid_obstacles = true;
      this->avoid_placement = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->stop = false;
      this->keep_control = false;
      this->kick_enable = false;
      this->kick_pass = false;
      this->kick_setplay = false;
      this->dribble_enable = false;
      this->receive_ball = false;
      this->reflect_shoot = false;
      this->avoid_obstacles = false;
      this->avoid_placement = false;
    }
  }

  explicit RobotControl_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kick_target(_alloc, _init),
    dribble_target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->stop = false;
      this->keep_control = false;
      this->kick_enable = false;
      this->kick_pass = false;
      this->kick_setplay = false;
      this->dribble_enable = false;
      this->receive_ball = false;
      this->reflect_shoot = false;
      this->avoid_obstacles = true;
      this->avoid_placement = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->stop = false;
      this->keep_control = false;
      this->kick_enable = false;
      this->kick_pass = false;
      this->kick_setplay = false;
      this->dribble_enable = false;
      this->receive_ball = false;
      this->reflect_shoot = false;
      this->avoid_obstacles = false;
      this->avoid_placement = false;
    }
  }

  // field types and members
  using _stop_type =
    bool;
  _stop_type stop;
  using _keep_control_type =
    bool;
  _keep_control_type keep_control;
  using _max_velocity_xy_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _max_velocity_xy_type max_velocity_xy;
  using _pose_type =
    rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintPose_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintPose_<ContainerAllocator>>::other>;
  _pose_type pose;
  using _line_type =
    rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintLine_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintLine_<ContainerAllocator>>::other>;
  _line_type line;
  using _kick_enable_type =
    bool;
  _kick_enable_type kick_enable;
  using _kick_pass_type =
    bool;
  _kick_pass_type kick_pass;
  using _kick_setplay_type =
    bool;
  _kick_setplay_type kick_setplay;
  using _kick_target_type =
    consai_msgs::msg::ConstraintXY_<ContainerAllocator>;
  _kick_target_type kick_target;
  using _dribble_enable_type =
    bool;
  _dribble_enable_type dribble_enable;
  using _dribble_target_type =
    consai_msgs::msg::ConstraintXY_<ContainerAllocator>;
  _dribble_target_type dribble_target;
  using _receive_ball_type =
    bool;
  _receive_ball_type receive_ball;
  using _reflect_shoot_type =
    bool;
  _reflect_shoot_type reflect_shoot;
  using _avoid_obstacles_type =
    bool;
  _avoid_obstacles_type avoid_obstacles;
  using _avoid_placement_type =
    bool;
  _avoid_placement_type avoid_placement;

  // setters for named parameter idiom
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__keep_control(
    const bool & _arg)
  {
    this->keep_control = _arg;
    return *this;
  }
  Type & set__max_velocity_xy(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->max_velocity_xy = _arg;
    return *this;
  }
  Type & set__pose(
    const rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintPose_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintPose_<ContainerAllocator>>::other> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__line(
    const rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintLine_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintLine_<ContainerAllocator>>::other> & _arg)
  {
    this->line = _arg;
    return *this;
  }
  Type & set__kick_enable(
    const bool & _arg)
  {
    this->kick_enable = _arg;
    return *this;
  }
  Type & set__kick_pass(
    const bool & _arg)
  {
    this->kick_pass = _arg;
    return *this;
  }
  Type & set__kick_setplay(
    const bool & _arg)
  {
    this->kick_setplay = _arg;
    return *this;
  }
  Type & set__kick_target(
    const consai_msgs::msg::ConstraintXY_<ContainerAllocator> & _arg)
  {
    this->kick_target = _arg;
    return *this;
  }
  Type & set__dribble_enable(
    const bool & _arg)
  {
    this->dribble_enable = _arg;
    return *this;
  }
  Type & set__dribble_target(
    const consai_msgs::msg::ConstraintXY_<ContainerAllocator> & _arg)
  {
    this->dribble_target = _arg;
    return *this;
  }
  Type & set__receive_ball(
    const bool & _arg)
  {
    this->receive_ball = _arg;
    return *this;
  }
  Type & set__reflect_shoot(
    const bool & _arg)
  {
    this->reflect_shoot = _arg;
    return *this;
  }
  Type & set__avoid_obstacles(
    const bool & _arg)
  {
    this->avoid_obstacles = _arg;
    return *this;
  }
  Type & set__avoid_placement(
    const bool & _arg)
  {
    this->avoid_placement = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_Goal
    std::shared_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_Goal
    std::shared_ptr<consai_msgs::action::RobotControl_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_Goal_ & other) const
  {
    if (this->stop != other.stop) {
      return false;
    }
    if (this->keep_control != other.keep_control) {
      return false;
    }
    if (this->max_velocity_xy != other.max_velocity_xy) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->line != other.line) {
      return false;
    }
    if (this->kick_enable != other.kick_enable) {
      return false;
    }
    if (this->kick_pass != other.kick_pass) {
      return false;
    }
    if (this->kick_setplay != other.kick_setplay) {
      return false;
    }
    if (this->kick_target != other.kick_target) {
      return false;
    }
    if (this->dribble_enable != other.dribble_enable) {
      return false;
    }
    if (this->dribble_target != other.dribble_target) {
      return false;
    }
    if (this->receive_ball != other.receive_ball) {
      return false;
    }
    if (this->reflect_shoot != other.reflect_shoot) {
      return false;
    }
    if (this->avoid_obstacles != other.avoid_obstacles) {
      return false;
    }
    if (this->avoid_placement != other.avoid_placement) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_Goal_

// alias to use template instance with default allocator
using RobotControl_Goal =
  consai_msgs::action::RobotControl_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs


#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_Result __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_Result __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_Result_
{
  using Type = RobotControl_Result_<ContainerAllocator>;

  explicit RobotControl_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit RobotControl_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_Result
    std::shared_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_Result
    std::shared_ptr<consai_msgs::action::RobotControl_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_Result_

// alias to use template instance with default allocator
using RobotControl_Result =
  consai_msgs::action::RobotControl_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs


// Include directives for member types
// Member 'remaining_pose'
// Member 'present_velocity'
#include "consai_msgs/msg/detail/state2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_Feedback __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_Feedback_
{
  using Type = RobotControl_Feedback_<ContainerAllocator>;

  explicit RobotControl_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remaining_pose(_init),
    present_velocity(_init)
  {
    (void)_init;
  }

  explicit RobotControl_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remaining_pose(_alloc, _init),
    present_velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _remaining_pose_type =
    consai_msgs::msg::State2D_<ContainerAllocator>;
  _remaining_pose_type remaining_pose;
  using _present_velocity_type =
    consai_msgs::msg::State2D_<ContainerAllocator>;
  _present_velocity_type present_velocity;

  // setters for named parameter idiom
  Type & set__remaining_pose(
    const consai_msgs::msg::State2D_<ContainerAllocator> & _arg)
  {
    this->remaining_pose = _arg;
    return *this;
  }
  Type & set__present_velocity(
    const consai_msgs::msg::State2D_<ContainerAllocator> & _arg)
  {
    this->present_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_Feedback
    std::shared_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_Feedback
    std::shared_ptr<consai_msgs::action::RobotControl_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_Feedback_ & other) const
  {
    if (this->remaining_pose != other.remaining_pose) {
      return false;
    }
    if (this->present_velocity != other.present_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_Feedback_

// alias to use template instance with default allocator
using RobotControl_Feedback =
  consai_msgs::action::RobotControl_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "consai_msgs/action/detail/robot_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Request __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_SendGoal_Request_
{
  using Type = RobotControl_SendGoal_Request_<ContainerAllocator>;

  explicit RobotControl_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RobotControl_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    consai_msgs::action::RobotControl_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const consai_msgs::action::RobotControl_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Request
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Request
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_SendGoal_Request_

// alias to use template instance with default allocator
using RobotControl_SendGoal_Request =
  consai_msgs::action::RobotControl_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Response __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_SendGoal_Response_
{
  using Type = RobotControl_SendGoal_Response_<ContainerAllocator>;

  explicit RobotControl_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RobotControl_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Response
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_SendGoal_Response
    std::shared_ptr<consai_msgs::action::RobotControl_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_SendGoal_Response_

// alias to use template instance with default allocator
using RobotControl_SendGoal_Response =
  consai_msgs::action::RobotControl_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs

namespace consai_msgs
{

namespace action
{

struct RobotControl_SendGoal
{
  using Request = consai_msgs::action::RobotControl_SendGoal_Request;
  using Response = consai_msgs::action::RobotControl_SendGoal_Response;
};

}  // namespace action

}  // namespace consai_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_GetResult_Request __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_GetResult_Request_
{
  using Type = RobotControl_GetResult_Request_<ContainerAllocator>;

  explicit RobotControl_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RobotControl_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_GetResult_Request
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_GetResult_Request
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_GetResult_Request_

// alias to use template instance with default allocator
using RobotControl_GetResult_Request =
  consai_msgs::action::RobotControl_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_GetResult_Response __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_GetResult_Response_
{
  using Type = RobotControl_GetResult_Response_<ContainerAllocator>;

  explicit RobotControl_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RobotControl_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    consai_msgs::action::RobotControl_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const consai_msgs::action::RobotControl_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_GetResult_Response
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_GetResult_Response
    std::shared_ptr<consai_msgs::action::RobotControl_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_GetResult_Response_

// alias to use template instance with default allocator
using RobotControl_GetResult_Response =
  consai_msgs::action::RobotControl_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs

namespace consai_msgs
{

namespace action
{

struct RobotControl_GetResult
{
  using Request = consai_msgs::action::RobotControl_GetResult_Request;
  using Response = consai_msgs::action::RobotControl_GetResult_Response;
};

}  // namespace action

}  // namespace consai_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__action__RobotControl_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__action__RobotControl_FeedbackMessage __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotControl_FeedbackMessage_
{
  using Type = RobotControl_FeedbackMessage_<ContainerAllocator>;

  explicit RobotControl_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RobotControl_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    consai_msgs::action::RobotControl_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const consai_msgs::action::RobotControl_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__action__RobotControl_FeedbackMessage
    std::shared_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__action__RobotControl_FeedbackMessage
    std::shared_ptr<consai_msgs::action::RobotControl_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_FeedbackMessage_

// alias to use template instance with default allocator
using RobotControl_FeedbackMessage =
  consai_msgs::action::RobotControl_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace consai_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace consai_msgs
{

namespace action
{

struct RobotControl
{
  /// The goal message defined in the action definition.
  using Goal = consai_msgs::action::RobotControl_Goal;
  /// The result message defined in the action definition.
  using Result = consai_msgs::action::RobotControl_Result;
  /// The feedback message defined in the action definition.
  using Feedback = consai_msgs::action::RobotControl_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = consai_msgs::action::RobotControl_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = consai_msgs::action::RobotControl_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = consai_msgs::action::RobotControl_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RobotControl RobotControl;

}  // namespace action

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__STRUCT_HPP_
