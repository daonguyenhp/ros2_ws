// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from distance_warning:action/CheckDistance.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__STRUCT_HPP_
#define DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_Goal __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_Goal __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_Goal_
{
  using Type = CheckDistance_Goal_<ContainerAllocator>;

  explicit CheckDistance_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to_check = 0.0f;
    }
  }

  explicit CheckDistance_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to_check = 0.0f;
    }
  }

  // field types and members
  using _distance_to_check_type =
    float;
  _distance_to_check_type distance_to_check;

  // setters for named parameter idiom
  Type & set__distance_to_check(
    const float & _arg)
  {
    this->distance_to_check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::action::CheckDistance_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_Goal
    std::shared_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_Goal
    std::shared_ptr<distance_warning::action::CheckDistance_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_Goal_ & other) const
  {
    if (this->distance_to_check != other.distance_to_check) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_Goal_

// alias to use template instance with default allocator
using CheckDistance_Goal =
  distance_warning::action::CheckDistance_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning


#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_Result __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_Result __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_Result_
{
  using Type = CheckDistance_Result_<ContainerAllocator>;

  explicit CheckDistance_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_safe = false;
      this->result_message = "";
    }
  }

  explicit CheckDistance_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_safe = false;
      this->result_message = "";
    }
  }

  // field types and members
  using _is_safe_type =
    bool;
  _is_safe_type is_safe;
  using _result_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_message_type result_message;

  // setters for named parameter idiom
  Type & set__is_safe(
    const bool & _arg)
  {
    this->is_safe = _arg;
    return *this;
  }
  Type & set__result_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::action::CheckDistance_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_Result
    std::shared_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_Result
    std::shared_ptr<distance_warning::action::CheckDistance_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_Result_ & other) const
  {
    if (this->is_safe != other.is_safe) {
      return false;
    }
    if (this->result_message != other.result_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_Result_

// alias to use template instance with default allocator
using CheckDistance_Result =
  distance_warning::action::CheckDistance_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning


#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_Feedback __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_Feedback_
{
  using Type = CheckDistance_Feedback_<ContainerAllocator>;

  explicit CheckDistance_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step = 0l;
      this->total_steps = 0l;
      this->feedback_msg = "";
    }
  }

  explicit CheckDistance_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step = 0l;
      this->total_steps = 0l;
      this->feedback_msg = "";
    }
  }

  // field types and members
  using _step_type =
    int32_t;
  _step_type step;
  using _total_steps_type =
    int32_t;
  _total_steps_type total_steps;
  using _feedback_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_msg_type feedback_msg;

  // setters for named parameter idiom
  Type & set__step(
    const int32_t & _arg)
  {
    this->step = _arg;
    return *this;
  }
  Type & set__total_steps(
    const int32_t & _arg)
  {
    this->total_steps = _arg;
    return *this;
  }
  Type & set__feedback_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::action::CheckDistance_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_Feedback
    std::shared_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_Feedback
    std::shared_ptr<distance_warning::action::CheckDistance_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_Feedback_ & other) const
  {
    if (this->step != other.step) {
      return false;
    }
    if (this->total_steps != other.total_steps) {
      return false;
    }
    if (this->feedback_msg != other.feedback_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_Feedback_

// alias to use template instance with default allocator
using CheckDistance_Feedback =
  distance_warning::action::CheckDistance_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "distance_warning/action/detail/check_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Request __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_SendGoal_Request_
{
  using Type = CheckDistance_SendGoal_Request_<ContainerAllocator>;

  explicit CheckDistance_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CheckDistance_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    distance_warning::action::CheckDistance_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const distance_warning::action::CheckDistance_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Request
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Request
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_SendGoal_Request_

// alias to use template instance with default allocator
using CheckDistance_SendGoal_Request =
  distance_warning::action::CheckDistance_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Response __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_SendGoal_Response_
{
  using Type = CheckDistance_SendGoal_Response_<ContainerAllocator>;

  explicit CheckDistance_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CheckDistance_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Response
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_SendGoal_Response
    std::shared_ptr<distance_warning::action::CheckDistance_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_SendGoal_Response_

// alias to use template instance with default allocator
using CheckDistance_SendGoal_Response =
  distance_warning::action::CheckDistance_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning

namespace distance_warning
{

namespace action
{

struct CheckDistance_SendGoal
{
  using Request = distance_warning::action::CheckDistance_SendGoal_Request;
  using Response = distance_warning::action::CheckDistance_SendGoal_Response;
};

}  // namespace action

}  // namespace distance_warning


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_GetResult_Request __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_GetResult_Request_
{
  using Type = CheckDistance_GetResult_Request_<ContainerAllocator>;

  explicit CheckDistance_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CheckDistance_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_GetResult_Request
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_GetResult_Request
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_GetResult_Request_

// alias to use template instance with default allocator
using CheckDistance_GetResult_Request =
  distance_warning::action::CheckDistance_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning


// Include directives for member types
// Member 'result'
// already included above
// #include "distance_warning/action/detail/check_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_GetResult_Response __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_GetResult_Response_
{
  using Type = CheckDistance_GetResult_Response_<ContainerAllocator>;

  explicit CheckDistance_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CheckDistance_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    distance_warning::action::CheckDistance_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const distance_warning::action::CheckDistance_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_GetResult_Response
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_GetResult_Response
    std::shared_ptr<distance_warning::action::CheckDistance_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_GetResult_Response_

// alias to use template instance with default allocator
using CheckDistance_GetResult_Response =
  distance_warning::action::CheckDistance_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning

namespace distance_warning
{

namespace action
{

struct CheckDistance_GetResult
{
  using Request = distance_warning::action::CheckDistance_GetResult_Request;
  using Response = distance_warning::action::CheckDistance_GetResult_Response;
};

}  // namespace action

}  // namespace distance_warning


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "distance_warning/action/detail/check_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__distance_warning__action__CheckDistance_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__action__CheckDistance_FeedbackMessage __declspec(deprecated)
#endif

namespace distance_warning
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckDistance_FeedbackMessage_
{
  using Type = CheckDistance_FeedbackMessage_<ContainerAllocator>;

  explicit CheckDistance_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CheckDistance_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    distance_warning::action::CheckDistance_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const distance_warning::action::CheckDistance_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__action__CheckDistance_FeedbackMessage
    std::shared_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__action__CheckDistance_FeedbackMessage
    std::shared_ptr<distance_warning::action::CheckDistance_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckDistance_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckDistance_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckDistance_FeedbackMessage_

// alias to use template instance with default allocator
using CheckDistance_FeedbackMessage =
  distance_warning::action::CheckDistance_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace distance_warning

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace distance_warning
{

namespace action
{

struct CheckDistance
{
  /// The goal message defined in the action definition.
  using Goal = distance_warning::action::CheckDistance_Goal;
  /// The result message defined in the action definition.
  using Result = distance_warning::action::CheckDistance_Result;
  /// The feedback message defined in the action definition.
  using Feedback = distance_warning::action::CheckDistance_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = distance_warning::action::CheckDistance_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = distance_warning::action::CheckDistance_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = distance_warning::action::CheckDistance_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CheckDistance CheckDistance;

}  // namespace action

}  // namespace distance_warning

#endif  // DISTANCE_WARNING__ACTION__DETAIL__CHECK_DISTANCE__STRUCT_HPP_
