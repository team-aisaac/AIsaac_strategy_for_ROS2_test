// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:action/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__STRUCT_H_
#define CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'max_velocity_xy'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pose'
#include "consai_msgs/msg/detail/constraint_pose__struct.h"
// Member 'line'
#include "consai_msgs/msg/detail/constraint_line__struct.h"
// Member 'kick_target'
// Member 'dribble_target'
#include "consai_msgs/msg/detail/constraint_xy__struct.h"

// constants for array fields with an upper bound
// max_velocity_xy
enum
{
  consai_msgs__action__RobotControl_Goal__max_velocity_xy__MAX_SIZE = 1
};
// pose
enum
{
  consai_msgs__action__RobotControl_Goal__pose__MAX_SIZE = 1
};
// line
enum
{
  consai_msgs__action__RobotControl_Goal__line__MAX_SIZE = 1
};

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_Goal
{
  bool stop;
  bool keep_control;
  rosidl_runtime_c__double__Sequence max_velocity_xy;
  consai_msgs__msg__ConstraintPose__Sequence pose;
  consai_msgs__msg__ConstraintLine__Sequence line;
  bool kick_enable;
  bool kick_pass;
  bool kick_setplay;
  consai_msgs__msg__ConstraintXY kick_target;
  bool dribble_enable;
  consai_msgs__msg__ConstraintXY dribble_target;
  bool receive_ball;
  bool reflect_shoot;
  bool avoid_obstacles;
  bool avoid_placement;
} consai_msgs__action__RobotControl_Goal;

// Struct for a sequence of consai_msgs__action__RobotControl_Goal.
typedef struct consai_msgs__action__RobotControl_Goal__Sequence
{
  consai_msgs__action__RobotControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_Result
{
  bool success;
  rosidl_runtime_c__String message;
} consai_msgs__action__RobotControl_Result;

// Struct for a sequence of consai_msgs__action__RobotControl_Result.
typedef struct consai_msgs__action__RobotControl_Result__Sequence
{
  consai_msgs__action__RobotControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'remaining_pose'
// Member 'present_velocity'
#include "consai_msgs/msg/detail/state2_d__struct.h"

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_Feedback
{
  consai_msgs__msg__State2D remaining_pose;
  consai_msgs__msg__State2D present_velocity;
} consai_msgs__action__RobotControl_Feedback;

// Struct for a sequence of consai_msgs__action__RobotControl_Feedback.
typedef struct consai_msgs__action__RobotControl_Feedback__Sequence
{
  consai_msgs__action__RobotControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "consai_msgs/action/detail/robot_control__struct.h"

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  consai_msgs__action__RobotControl_Goal goal;
} consai_msgs__action__RobotControl_SendGoal_Request;

// Struct for a sequence of consai_msgs__action__RobotControl_SendGoal_Request.
typedef struct consai_msgs__action__RobotControl_SendGoal_Request__Sequence
{
  consai_msgs__action__RobotControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} consai_msgs__action__RobotControl_SendGoal_Response;

// Struct for a sequence of consai_msgs__action__RobotControl_SendGoal_Response.
typedef struct consai_msgs__action__RobotControl_SendGoal_Response__Sequence
{
  consai_msgs__action__RobotControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} consai_msgs__action__RobotControl_GetResult_Request;

// Struct for a sequence of consai_msgs__action__RobotControl_GetResult_Request.
typedef struct consai_msgs__action__RobotControl_GetResult_Request__Sequence
{
  consai_msgs__action__RobotControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_GetResult_Response
{
  int8_t status;
  consai_msgs__action__RobotControl_Result result;
} consai_msgs__action__RobotControl_GetResult_Response;

// Struct for a sequence of consai_msgs__action__RobotControl_GetResult_Response.
typedef struct consai_msgs__action__RobotControl_GetResult_Response__Sequence
{
  consai_msgs__action__RobotControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "consai_msgs/action/detail/robot_control__struct.h"

// Struct defined in action/RobotControl in the package consai_msgs.
typedef struct consai_msgs__action__RobotControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  consai_msgs__action__RobotControl_Feedback feedback;
} consai_msgs__action__RobotControl_FeedbackMessage;

// Struct for a sequence of consai_msgs__action__RobotControl_FeedbackMessage.
typedef struct consai_msgs__action__RobotControl_FeedbackMessage__Sequence
{
  consai_msgs__action__RobotControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__action__RobotControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__STRUCT_H_
