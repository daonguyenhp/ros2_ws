// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from distance_warning:action/CheckDistance.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__STRUCT_H_
#define DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_Goal
{
  float distance_to_check;
} distance_warning__action__CheckDistance_Goal;

// Struct for a sequence of distance_warning__action__CheckDistance_Goal.
typedef struct distance_warning__action__CheckDistance_Goal__Sequence
{
  distance_warning__action__CheckDistance_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_Result
{
  bool is_safe;
  rosidl_runtime_c__String result_message;
} distance_warning__action__CheckDistance_Result;

// Struct for a sequence of distance_warning__action__CheckDistance_Result.
typedef struct distance_warning__action__CheckDistance_Result__Sequence
{
  distance_warning__action__CheckDistance_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_Feedback
{
  int32_t step;
  int32_t total_steps;
  rosidl_runtime_c__String feedback_msg;
} distance_warning__action__CheckDistance_Feedback;

// Struct for a sequence of distance_warning__action__CheckDistance_Feedback.
typedef struct distance_warning__action__CheckDistance_Feedback__Sequence
{
  distance_warning__action__CheckDistance_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "distance_warning/action/detail/check_distance__struct.h"

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  distance_warning__action__CheckDistance_Goal goal;
} distance_warning__action__CheckDistance_SendGoal_Request;

// Struct for a sequence of distance_warning__action__CheckDistance_SendGoal_Request.
typedef struct distance_warning__action__CheckDistance_SendGoal_Request__Sequence
{
  distance_warning__action__CheckDistance_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} distance_warning__action__CheckDistance_SendGoal_Response;

// Struct for a sequence of distance_warning__action__CheckDistance_SendGoal_Response.
typedef struct distance_warning__action__CheckDistance_SendGoal_Response__Sequence
{
  distance_warning__action__CheckDistance_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} distance_warning__action__CheckDistance_GetResult_Request;

// Struct for a sequence of distance_warning__action__CheckDistance_GetResult_Request.
typedef struct distance_warning__action__CheckDistance_GetResult_Request__Sequence
{
  distance_warning__action__CheckDistance_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "distance_warning/action/detail/check_distance__struct.h"

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_GetResult_Response
{
  int8_t status;
  distance_warning__action__CheckDistance_Result result;
} distance_warning__action__CheckDistance_GetResult_Response;

// Struct for a sequence of distance_warning__action__CheckDistance_GetResult_Response.
typedef struct distance_warning__action__CheckDistance_GetResult_Response__Sequence
{
  distance_warning__action__CheckDistance_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "distance_warning/action/detail/check_distance__struct.h"

/// Struct defined in action/CheckDistance in the package distance_warning.
typedef struct distance_warning__action__CheckDistance_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  distance_warning__action__CheckDistance_Feedback feedback;
} distance_warning__action__CheckDistance_FeedbackMessage;

// Struct for a sequence of distance_warning__action__CheckDistance_FeedbackMessage.
typedef struct distance_warning__action__CheckDistance_FeedbackMessage__Sequence
{
  distance_warning__action__CheckDistance_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__action__CheckDistance_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__STRUCT_H_
