// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__STRUCT_HPP_
#define DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__distance_warning__srv__SetThreshold_Request __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__srv__SetThreshold_Request __declspec(deprecated)
#endif

namespace distance_warning
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetThreshold_Request_
{
  using Type = SetThreshold_Request_<ContainerAllocator>;

  explicit SetThreshold_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->increase = false;
    }
  }

  explicit SetThreshold_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->increase = false;
    }
  }

  // field types and members
  using _increase_type =
    bool;
  _increase_type increase;

  // setters for named parameter idiom
  Type & set__increase(
    const bool & _arg)
  {
    this->increase = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::srv::SetThreshold_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::srv::SetThreshold_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::srv::SetThreshold_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::srv::SetThreshold_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__srv__SetThreshold_Request
    std::shared_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__srv__SetThreshold_Request
    std::shared_ptr<distance_warning::srv::SetThreshold_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetThreshold_Request_ & other) const
  {
    if (this->increase != other.increase) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetThreshold_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetThreshold_Request_

// alias to use template instance with default allocator
using SetThreshold_Request =
  distance_warning::srv::SetThreshold_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace distance_warning


#ifndef _WIN32
# define DEPRECATED__distance_warning__srv__SetThreshold_Response __attribute__((deprecated))
#else
# define DEPRECATED__distance_warning__srv__SetThreshold_Response __declspec(deprecated)
#endif

namespace distance_warning
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetThreshold_Response_
{
  using Type = SetThreshold_Response_<ContainerAllocator>;

  explicit SetThreshold_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->new_threshold = 0.0f;
      this->message = "";
    }
  }

  explicit SetThreshold_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->new_threshold = 0.0f;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _new_threshold_type =
    float;
  _new_threshold_type new_threshold;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__new_threshold(
    const float & _arg)
  {
    this->new_threshold = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    distance_warning::srv::SetThreshold_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const distance_warning::srv::SetThreshold_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      distance_warning::srv::SetThreshold_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      distance_warning::srv::SetThreshold_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__distance_warning__srv__SetThreshold_Response
    std::shared_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__distance_warning__srv__SetThreshold_Response
    std::shared_ptr<distance_warning::srv::SetThreshold_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetThreshold_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->new_threshold != other.new_threshold) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetThreshold_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetThreshold_Response_

// alias to use template instance with default allocator
using SetThreshold_Response =
  distance_warning::srv::SetThreshold_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace distance_warning

namespace distance_warning
{

namespace srv
{

struct SetThreshold
{
  using Request = distance_warning::srv::SetThreshold_Request;
  using Response = distance_warning::srv::SetThreshold_Response;
};

}  // namespace srv

}  // namespace distance_warning

#endif  // DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__STRUCT_HPP_
