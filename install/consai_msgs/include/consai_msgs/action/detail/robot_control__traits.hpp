// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai_msgs:action/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__TRAITS_HPP_
#define CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__TRAITS_HPP_

#include "consai_msgs/action/detail/robot_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "consai_msgs/msg/detail/constraint_pose__traits.hpp"
// Member 'line'
#include "consai_msgs/msg/detail/constraint_line__traits.hpp"
// Member 'kick_target'
// Member 'dribble_target'
#include "consai_msgs/msg/detail/constraint_xy__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_Goal>()
{
  return "consai_msgs::action::RobotControl_Goal";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_Goal>()
{
  return "consai_msgs/action/RobotControl_Goal";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_Goal>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::msg::ConstraintLine>::value && has_bounded_size<consai_msgs::msg::ConstraintPose>::value && has_bounded_size<consai_msgs::msg::ConstraintXY>::value> {};

template<>
struct is_message<consai_msgs::action::RobotControl_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_Result>()
{
  return "consai_msgs::action::RobotControl_Result";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_Result>()
{
  return "consai_msgs/action/RobotControl_Result";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<consai_msgs::action::RobotControl_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'remaining_pose'
// Member 'present_velocity'
#include "consai_msgs/msg/detail/state2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_Feedback>()
{
  return "consai_msgs::action::RobotControl_Feedback";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_Feedback>()
{
  return "consai_msgs/action/RobotControl_Feedback";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_Feedback>
  : std::integral_constant<bool, has_fixed_size<consai_msgs::msg::State2D>::value> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_Feedback>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::msg::State2D>::value> {};

template<>
struct is_message<consai_msgs::action::RobotControl_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "consai_msgs/action/detail/robot_control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_SendGoal_Request>()
{
  return "consai_msgs::action::RobotControl_SendGoal_Request";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_SendGoal_Request>()
{
  return "consai_msgs/action/RobotControl_SendGoal_Request";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<consai_msgs::action::RobotControl_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::action::RobotControl_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<consai_msgs::action::RobotControl_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_SendGoal_Response>()
{
  return "consai_msgs::action::RobotControl_SendGoal_Response";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_SendGoal_Response>()
{
  return "consai_msgs/action/RobotControl_SendGoal_Response";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<consai_msgs::action::RobotControl_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_SendGoal>()
{
  return "consai_msgs::action::RobotControl_SendGoal";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_SendGoal>()
{
  return "consai_msgs/action/RobotControl_SendGoal";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<consai_msgs::action::RobotControl_SendGoal_Request>::value &&
    has_fixed_size<consai_msgs::action::RobotControl_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<consai_msgs::action::RobotControl_SendGoal_Request>::value &&
    has_bounded_size<consai_msgs::action::RobotControl_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<consai_msgs::action::RobotControl_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<consai_msgs::action::RobotControl_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<consai_msgs::action::RobotControl_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_GetResult_Request>()
{
  return "consai_msgs::action::RobotControl_GetResult_Request";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_GetResult_Request>()
{
  return "consai_msgs/action/RobotControl_GetResult_Request";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<consai_msgs::action::RobotControl_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "consai_msgs/action/detail/robot_control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_GetResult_Response>()
{
  return "consai_msgs::action::RobotControl_GetResult_Response";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_GetResult_Response>()
{
  return "consai_msgs/action/RobotControl_GetResult_Response";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<consai_msgs::action::RobotControl_Result>::value> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::action::RobotControl_Result>::value> {};

template<>
struct is_message<consai_msgs::action::RobotControl_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_GetResult>()
{
  return "consai_msgs::action::RobotControl_GetResult";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_GetResult>()
{
  return "consai_msgs/action/RobotControl_GetResult";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<consai_msgs::action::RobotControl_GetResult_Request>::value &&
    has_fixed_size<consai_msgs::action::RobotControl_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<consai_msgs::action::RobotControl_GetResult_Request>::value &&
    has_bounded_size<consai_msgs::action::RobotControl_GetResult_Response>::value
  >
{
};

template<>
struct is_service<consai_msgs::action::RobotControl_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<consai_msgs::action::RobotControl_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<consai_msgs::action::RobotControl_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "consai_msgs/action/detail/robot_control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::action::RobotControl_FeedbackMessage>()
{
  return "consai_msgs::action::RobotControl_FeedbackMessage";
}

template<>
inline const char * name<consai_msgs::action::RobotControl_FeedbackMessage>()
{
  return "consai_msgs/action/RobotControl_FeedbackMessage";
}

template<>
struct has_fixed_size<consai_msgs::action::RobotControl_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<consai_msgs::action::RobotControl_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<consai_msgs::action::RobotControl_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::action::RobotControl_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<consai_msgs::action::RobotControl_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<consai_msgs::action::RobotControl>
  : std::true_type
{
};

template<>
struct is_action_goal<consai_msgs::action::RobotControl_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<consai_msgs::action::RobotControl_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<consai_msgs::action::RobotControl_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__TRAITS_HPP_
