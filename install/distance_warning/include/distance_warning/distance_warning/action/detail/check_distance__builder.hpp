// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from distance_warning:action/CheckDistance.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__BUILDER_HPP_
#define DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "distance_warning/action/detail/check_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_Goal_distance_to_check
{
public:
  Init_CheckDistance_Goal_distance_to_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::distance_warning::action::CheckDistance_Goal distance_to_check(::distance_warning::action::CheckDistance_Goal::_distance_to_check_type arg)
  {
    msg_.distance_to_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_Goal>()
{
  return distance_warning::action::builder::Init_CheckDistance_Goal_distance_to_check();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_Result_result_message
{
public:
  explicit Init_CheckDistance_Result_result_message(::distance_warning::action::CheckDistance_Result & msg)
  : msg_(msg)
  {}
  ::distance_warning::action::CheckDistance_Result result_message(::distance_warning::action::CheckDistance_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_Result msg_;
};

class Init_CheckDistance_Result_is_safe
{
public:
  Init_CheckDistance_Result_is_safe()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckDistance_Result_result_message is_safe(::distance_warning::action::CheckDistance_Result::_is_safe_type arg)
  {
    msg_.is_safe = std::move(arg);
    return Init_CheckDistance_Result_result_message(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_Result>()
{
  return distance_warning::action::builder::Init_CheckDistance_Result_is_safe();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_Feedback_feedback_msg
{
public:
  explicit Init_CheckDistance_Feedback_feedback_msg(::distance_warning::action::CheckDistance_Feedback & msg)
  : msg_(msg)
  {}
  ::distance_warning::action::CheckDistance_Feedback feedback_msg(::distance_warning::action::CheckDistance_Feedback::_feedback_msg_type arg)
  {
    msg_.feedback_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_Feedback msg_;
};

class Init_CheckDistance_Feedback_total_steps
{
public:
  explicit Init_CheckDistance_Feedback_total_steps(::distance_warning::action::CheckDistance_Feedback & msg)
  : msg_(msg)
  {}
  Init_CheckDistance_Feedback_feedback_msg total_steps(::distance_warning::action::CheckDistance_Feedback::_total_steps_type arg)
  {
    msg_.total_steps = std::move(arg);
    return Init_CheckDistance_Feedback_feedback_msg(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_Feedback msg_;
};

class Init_CheckDistance_Feedback_step
{
public:
  Init_CheckDistance_Feedback_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckDistance_Feedback_total_steps step(::distance_warning::action::CheckDistance_Feedback::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_CheckDistance_Feedback_total_steps(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_Feedback>()
{
  return distance_warning::action::builder::Init_CheckDistance_Feedback_step();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_SendGoal_Request_goal
{
public:
  explicit Init_CheckDistance_SendGoal_Request_goal(::distance_warning::action::CheckDistance_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::distance_warning::action::CheckDistance_SendGoal_Request goal(::distance_warning::action::CheckDistance_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_SendGoal_Request msg_;
};

class Init_CheckDistance_SendGoal_Request_goal_id
{
public:
  Init_CheckDistance_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckDistance_SendGoal_Request_goal goal_id(::distance_warning::action::CheckDistance_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CheckDistance_SendGoal_Request_goal(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_SendGoal_Request>()
{
  return distance_warning::action::builder::Init_CheckDistance_SendGoal_Request_goal_id();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_SendGoal_Response_stamp
{
public:
  explicit Init_CheckDistance_SendGoal_Response_stamp(::distance_warning::action::CheckDistance_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::distance_warning::action::CheckDistance_SendGoal_Response stamp(::distance_warning::action::CheckDistance_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_SendGoal_Response msg_;
};

class Init_CheckDistance_SendGoal_Response_accepted
{
public:
  Init_CheckDistance_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckDistance_SendGoal_Response_stamp accepted(::distance_warning::action::CheckDistance_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CheckDistance_SendGoal_Response_stamp(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_SendGoal_Response>()
{
  return distance_warning::action::builder::Init_CheckDistance_SendGoal_Response_accepted();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_GetResult_Request_goal_id
{
public:
  Init_CheckDistance_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::distance_warning::action::CheckDistance_GetResult_Request goal_id(::distance_warning::action::CheckDistance_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_GetResult_Request>()
{
  return distance_warning::action::builder::Init_CheckDistance_GetResult_Request_goal_id();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_GetResult_Response_result
{
public:
  explicit Init_CheckDistance_GetResult_Response_result(::distance_warning::action::CheckDistance_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::distance_warning::action::CheckDistance_GetResult_Response result(::distance_warning::action::CheckDistance_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_GetResult_Response msg_;
};

class Init_CheckDistance_GetResult_Response_status
{
public:
  Init_CheckDistance_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckDistance_GetResult_Response_result status(::distance_warning::action::CheckDistance_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CheckDistance_GetResult_Response_result(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_GetResult_Response>()
{
  return distance_warning::action::builder::Init_CheckDistance_GetResult_Response_status();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace action
{

namespace builder
{

class Init_CheckDistance_FeedbackMessage_feedback
{
public:
  explicit Init_CheckDistance_FeedbackMessage_feedback(::distance_warning::action::CheckDistance_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::distance_warning::action::CheckDistance_FeedbackMessage feedback(::distance_warning::action::CheckDistance_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_FeedbackMessage msg_;
};

class Init_CheckDistance_FeedbackMessage_goal_id
{
public:
  Init_CheckDistance_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckDistance_FeedbackMessage_feedback goal_id(::distance_warning::action::CheckDistance_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CheckDistance_FeedbackMessage_feedback(msg_);
  }

private:
  ::distance_warning::action::CheckDistance_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::action::CheckDistance_FeedbackMessage>()
{
  return distance_warning::action::builder::Init_CheckDistance_FeedbackMessage_goal_id();
}

}  // namespace distance_warning

#endif  // DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__BUILDER_HPP_
