// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/TeamInfo.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__TeamInfo __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__TeamInfo __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeamInfo_
{
  using Type = TeamInfo_<ContainerAllocator>;

  explicit TeamInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->score = 0ul;
      this->red_cards = 0ul;
      this->yellow_cards = 0ul;
      this->timeouts = 0ul;
      this->timeout_time = 0ul;
      this->goalkeeper = 0ul;
    }
  }

  explicit TeamInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->score = 0ul;
      this->red_cards = 0ul;
      this->yellow_cards = 0ul;
      this->timeouts = 0ul;
      this->timeout_time = 0ul;
      this->goalkeeper = 0ul;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _score_type =
    uint32_t;
  _score_type score;
  using _red_cards_type =
    uint32_t;
  _red_cards_type red_cards;
  using _yellow_card_times_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _yellow_card_times_type yellow_card_times;
  using _yellow_cards_type =
    uint32_t;
  _yellow_cards_type yellow_cards;
  using _timeouts_type =
    uint32_t;
  _timeouts_type timeouts;
  using _timeout_time_type =
    uint32_t;
  _timeout_time_type timeout_time;
  using _goalkeeper_type =
    uint32_t;
  _goalkeeper_type goalkeeper;
  using _foul_counter_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _foul_counter_type foul_counter;
  using _ball_placement_failures_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _ball_placement_failures_type ball_placement_failures;
  using _can_place_ball_type =
    rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other>;
  _can_place_ball_type can_place_ball;
  using _max_allowed_bots_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _max_allowed_bots_type max_allowed_bots;
  using _bot_substitution_intent_type =
    rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other>;
  _bot_substitution_intent_type bot_substitution_intent;
  using _ball_placement_failures_reached_type =
    rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other>;
  _ball_placement_failures_reached_type ball_placement_failures_reached;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__score(
    const uint32_t & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__red_cards(
    const uint32_t & _arg)
  {
    this->red_cards = _arg;
    return *this;
  }
  Type & set__yellow_card_times(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->yellow_card_times = _arg;
    return *this;
  }
  Type & set__yellow_cards(
    const uint32_t & _arg)
  {
    this->yellow_cards = _arg;
    return *this;
  }
  Type & set__timeouts(
    const uint32_t & _arg)
  {
    this->timeouts = _arg;
    return *this;
  }
  Type & set__timeout_time(
    const uint32_t & _arg)
  {
    this->timeout_time = _arg;
    return *this;
  }
  Type & set__goalkeeper(
    const uint32_t & _arg)
  {
    this->goalkeeper = _arg;
    return *this;
  }
  Type & set__foul_counter(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->foul_counter = _arg;
    return *this;
  }
  Type & set__ball_placement_failures(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->ball_placement_failures = _arg;
    return *this;
  }
  Type & set__can_place_ball(
    const rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->can_place_ball = _arg;
    return *this;
  }
  Type & set__max_allowed_bots(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->max_allowed_bots = _arg;
    return *this;
  }
  Type & set__bot_substitution_intent(
    const rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->bot_substitution_intent = _arg;
    return *this;
  }
  Type & set__ball_placement_failures_reached(
    const rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->ball_placement_failures_reached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__TeamInfo
    std::shared_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__TeamInfo
    std::shared_ptr<robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeamInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->red_cards != other.red_cards) {
      return false;
    }
    if (this->yellow_card_times != other.yellow_card_times) {
      return false;
    }
    if (this->yellow_cards != other.yellow_cards) {
      return false;
    }
    if (this->timeouts != other.timeouts) {
      return false;
    }
    if (this->timeout_time != other.timeout_time) {
      return false;
    }
    if (this->goalkeeper != other.goalkeeper) {
      return false;
    }
    if (this->foul_counter != other.foul_counter) {
      return false;
    }
    if (this->ball_placement_failures != other.ball_placement_failures) {
      return false;
    }
    if (this->can_place_ball != other.can_place_ball) {
      return false;
    }
    if (this->max_allowed_bots != other.max_allowed_bots) {
      return false;
    }
    if (this->bot_substitution_intent != other.bot_substitution_intent) {
      return false;
    }
    if (this->ball_placement_failures_reached != other.ball_placement_failures_reached) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeamInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeamInfo_

// alias to use template instance with default allocator
using TeamInfo =
  robocup_ssl_msgs::msg::TeamInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TEAM_INFO__STRUCT_HPP_
