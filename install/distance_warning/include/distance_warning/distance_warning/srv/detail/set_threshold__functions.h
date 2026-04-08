// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#ifndef DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__FUNCTIONS_H_
#define DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "distance_warning/msg/rosidl_generator_c__visibility_control.h"

#include "distance_warning/srv/detail/set_threshold__struct.h"

/// Initialize srv/SetThreshold message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * distance_warning__srv__SetThreshold_Request
 * )) before or use
 * distance_warning__srv__SetThreshold_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Request__init(distance_warning__srv__SetThreshold_Request * msg);

/// Finalize srv/SetThreshold message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Request__fini(distance_warning__srv__SetThreshold_Request * msg);

/// Create srv/SetThreshold message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * distance_warning__srv__SetThreshold_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
distance_warning__srv__SetThreshold_Request *
distance_warning__srv__SetThreshold_Request__create();

/// Destroy srv/SetThreshold message.
/**
 * It calls
 * distance_warning__srv__SetThreshold_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Request__destroy(distance_warning__srv__SetThreshold_Request * msg);

/// Check for srv/SetThreshold message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Request__are_equal(const distance_warning__srv__SetThreshold_Request * lhs, const distance_warning__srv__SetThreshold_Request * rhs);

/// Copy a srv/SetThreshold message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Request__copy(
  const distance_warning__srv__SetThreshold_Request * input,
  distance_warning__srv__SetThreshold_Request * output);

/// Initialize array of srv/SetThreshold messages.
/**
 * It allocates the memory for the number of elements and calls
 * distance_warning__srv__SetThreshold_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Request__Sequence__init(distance_warning__srv__SetThreshold_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetThreshold messages.
/**
 * It calls
 * distance_warning__srv__SetThreshold_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Request__Sequence__fini(distance_warning__srv__SetThreshold_Request__Sequence * array);

/// Create array of srv/SetThreshold messages.
/**
 * It allocates the memory for the array and calls
 * distance_warning__srv__SetThreshold_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
distance_warning__srv__SetThreshold_Request__Sequence *
distance_warning__srv__SetThreshold_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetThreshold messages.
/**
 * It calls
 * distance_warning__srv__SetThreshold_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Request__Sequence__destroy(distance_warning__srv__SetThreshold_Request__Sequence * array);

/// Check for srv/SetThreshold message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Request__Sequence__are_equal(const distance_warning__srv__SetThreshold_Request__Sequence * lhs, const distance_warning__srv__SetThreshold_Request__Sequence * rhs);

/// Copy an array of srv/SetThreshold messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Request__Sequence__copy(
  const distance_warning__srv__SetThreshold_Request__Sequence * input,
  distance_warning__srv__SetThreshold_Request__Sequence * output);

/// Initialize srv/SetThreshold message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * distance_warning__srv__SetThreshold_Response
 * )) before or use
 * distance_warning__srv__SetThreshold_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Response__init(distance_warning__srv__SetThreshold_Response * msg);

/// Finalize srv/SetThreshold message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Response__fini(distance_warning__srv__SetThreshold_Response * msg);

/// Create srv/SetThreshold message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * distance_warning__srv__SetThreshold_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
distance_warning__srv__SetThreshold_Response *
distance_warning__srv__SetThreshold_Response__create();

/// Destroy srv/SetThreshold message.
/**
 * It calls
 * distance_warning__srv__SetThreshold_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Response__destroy(distance_warning__srv__SetThreshold_Response * msg);

/// Check for srv/SetThreshold message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Response__are_equal(const distance_warning__srv__SetThreshold_Response * lhs, const distance_warning__srv__SetThreshold_Response * rhs);

/// Copy a srv/SetThreshold message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Response__copy(
  const distance_warning__srv__SetThreshold_Response * input,
  distance_warning__srv__SetThreshold_Response * output);

/// Initialize array of srv/SetThreshold messages.
/**
 * It allocates the memory for the number of elements and calls
 * distance_warning__srv__SetThreshold_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Response__Sequence__init(distance_warning__srv__SetThreshold_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetThreshold messages.
/**
 * It calls
 * distance_warning__srv__SetThreshold_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Response__Sequence__fini(distance_warning__srv__SetThreshold_Response__Sequence * array);

/// Create array of srv/SetThreshold messages.
/**
 * It allocates the memory for the array and calls
 * distance_warning__srv__SetThreshold_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
distance_warning__srv__SetThreshold_Response__Sequence *
distance_warning__srv__SetThreshold_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetThreshold messages.
/**
 * It calls
 * distance_warning__srv__SetThreshold_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
void
distance_warning__srv__SetThreshold_Response__Sequence__destroy(distance_warning__srv__SetThreshold_Response__Sequence * array);

/// Check for srv/SetThreshold message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Response__Sequence__are_equal(const distance_warning__srv__SetThreshold_Response__Sequence * lhs, const distance_warning__srv__SetThreshold_Response__Sequence * rhs);

/// Copy an array of srv/SetThreshold messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_distance_warning
bool
distance_warning__srv__SetThreshold_Response__Sequence__copy(
  const distance_warning__srv__SetThreshold_Response__Sequence * input,
  distance_warning__srv__SetThreshold_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DISTANCE_WARNING__SRV__DETAIL__SET_THRESHOLD__FUNCTIONS_H_
