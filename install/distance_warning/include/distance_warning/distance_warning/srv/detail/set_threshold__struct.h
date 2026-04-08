// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__STRUCT_H_
#define DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetThreshold in the package distance_warning.
typedef struct distance_warning__srv__SetThreshold_Request
{
  /// true = tăng, false = giảm
  bool increase;
} distance_warning__srv__SetThreshold_Request;

// Struct for a sequence of distance_warning__srv__SetThreshold_Request.
typedef struct distance_warning__srv__SetThreshold_Request__Sequence
{
  distance_warning__srv__SetThreshold_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__srv__SetThreshold_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetThreshold in the package distance_warning.
typedef struct distance_warning__srv__SetThreshold_Response
{
  bool success;
  float new_threshold;
  rosidl_runtime_c__String message;
} distance_warning__srv__SetThreshold_Response;

// Struct for a sequence of distance_warning__srv__SetThreshold_Response.
typedef struct distance_warning__srv__SetThreshold_Response__Sequence
{
  distance_warning__srv__SetThreshold_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} distance_warning__srv__SetThreshold_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__STRUCT_H_
