// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__TRAITS_HPP_
#define DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "distance_warning/srv/detail/set_threshold__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace distance_warning
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetThreshold_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: increase
  {
    out << "increase: ";
    rosidl_generator_traits::value_to_yaml(msg.increase, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetThreshold_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: increase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "increase: ";
    rosidl_generator_traits::value_to_yaml(msg.increase, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetThreshold_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace distance_warning

namespace rosidl_generator_traits
{

[[deprecated("use distance_warning::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const distance_warning::srv::SetThreshold_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  distance_warning::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use distance_warning::srv::to_yaml() instead")]]
inline std::string to_yaml(const distance_warning::srv::SetThreshold_Request & msg)
{
  return distance_warning::srv::to_yaml(msg);
}

template<>
inline const char * data_type<distance_warning::srv::SetThreshold_Request>()
{
  return "distance_warning::srv::SetThreshold_Request";
}

template<>
inline const char * name<distance_warning::srv::SetThreshold_Request>()
{
  return "distance_warning/srv/SetThreshold_Request";
}

template<>
struct has_fixed_size<distance_warning::srv::SetThreshold_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<distance_warning::srv::SetThreshold_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<distance_warning::srv::SetThreshold_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace distance_warning
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetThreshold_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: new_threshold
  {
    out << "new_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.new_threshold, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetThreshold_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: new_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.new_threshold, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetThreshold_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace distance_warning

namespace rosidl_generator_traits
{

[[deprecated("use distance_warning::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const distance_warning::srv::SetThreshold_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  distance_warning::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use distance_warning::srv::to_yaml() instead")]]
inline std::string to_yaml(const distance_warning::srv::SetThreshold_Response & msg)
{
  return distance_warning::srv::to_yaml(msg);
}

template<>
inline const char * data_type<distance_warning::srv::SetThreshold_Response>()
{
  return "distance_warning::srv::SetThreshold_Response";
}

template<>
inline const char * name<distance_warning::srv::SetThreshold_Response>()
{
  return "distance_warning/srv/SetThreshold_Response";
}

template<>
struct has_fixed_size<distance_warning::srv::SetThreshold_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<distance_warning::srv::SetThreshold_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<distance_warning::srv::SetThreshold_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<distance_warning::srv::SetThreshold>()
{
  return "distance_warning::srv::SetThreshold";
}

template<>
inline const char * name<distance_warning::srv::SetThreshold>()
{
  return "distance_warning/srv/SetThreshold";
}

template<>
struct has_fixed_size<distance_warning::srv::SetThreshold>
  : std::integral_constant<
    bool,
    has_fixed_size<distance_warning::srv::SetThreshold_Request>::value &&
    has_fixed_size<distance_warning::srv::SetThreshold_Response>::value
  >
{
};

template<>
struct has_bounded_size<distance_warning::srv::SetThreshold>
  : std::integral_constant<
    bool,
    has_bounded_size<distance_warning::srv::SetThreshold_Request>::value &&
    has_bounded_size<distance_warning::srv::SetThreshold_Response>::value
  >
{
};

template<>
struct is_service<distance_warning::srv::SetThreshold>
  : std::true_type
{
};

template<>
struct is_service_request<distance_warning::srv::SetThreshold_Request>
  : std::true_type
{
};

template<>
struct is_service_response<distance_warning::srv::SetThreshold_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__TRAITS_HPP_
