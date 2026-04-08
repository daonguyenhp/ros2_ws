// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_
#define DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "distance_warning/srv/detail/set_threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace distance_warning
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Request_increase
{
public:
  Init_SetThreshold_Request_increase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::distance_warning::srv::SetThreshold_Request increase(::distance_warning::srv::SetThreshold_Request::_increase_type arg)
  {
    msg_.increase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::srv::SetThreshold_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::srv::SetThreshold_Request>()
{
  return distance_warning::srv::builder::Init_SetThreshold_Request_increase();
}

}  // namespace distance_warning


namespace distance_warning
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Response_message
{
public:
  explicit Init_SetThreshold_Response_message(::distance_warning::srv::SetThreshold_Response & msg)
  : msg_(msg)
  {}
  ::distance_warning::srv::SetThreshold_Response message(::distance_warning::srv::SetThreshold_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::distance_warning::srv::SetThreshold_Response msg_;
};

class Init_SetThreshold_Response_new_threshold
{
public:
  explicit Init_SetThreshold_Response_new_threshold(::distance_warning::srv::SetThreshold_Response & msg)
  : msg_(msg)
  {}
  Init_SetThreshold_Response_message new_threshold(::distance_warning::srv::SetThreshold_Response::_new_threshold_type arg)
  {
    msg_.new_threshold = std::move(arg);
    return Init_SetThreshold_Response_message(msg_);
  }

private:
  ::distance_warning::srv::SetThreshold_Response msg_;
};

class Init_SetThreshold_Response_success
{
public:
  Init_SetThreshold_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetThreshold_Response_new_threshold success(::distance_warning::srv::SetThreshold_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetThreshold_Response_new_threshold(msg_);
  }

private:
  ::distance_warning::srv::SetThreshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::distance_warning::srv::SetThreshold_Response>()
{
  return distance_warning::srv::builder::Init_SetThreshold_Response_success();
}

}  // namespace distance_warning

#endif  // DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_
