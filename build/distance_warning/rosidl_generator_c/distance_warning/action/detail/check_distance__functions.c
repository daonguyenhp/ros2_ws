// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from distance_warning:action/CheckDistance.idl
// generated code does not contain a copyright notice
#include "distance_warning/action/detail/check_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
distance_warning__action__CheckDistance_Goal__init(distance_warning__action__CheckDistance_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // distance_to_check
  return true;
}

void
distance_warning__action__CheckDistance_Goal__fini(distance_warning__action__CheckDistance_Goal * msg)
{
  if (!msg) {
    return;
  }
  // distance_to_check
}

bool
distance_warning__action__CheckDistance_Goal__are_equal(const distance_warning__action__CheckDistance_Goal * lhs, const distance_warning__action__CheckDistance_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_to_check
  if (lhs->distance_to_check != rhs->distance_to_check) {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_Goal__copy(
  const distance_warning__action__CheckDistance_Goal * input,
  distance_warning__action__CheckDistance_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_to_check
  output->distance_to_check = input->distance_to_check;
  return true;
}

distance_warning__action__CheckDistance_Goal *
distance_warning__action__CheckDistance_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Goal * msg = (distance_warning__action__CheckDistance_Goal *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_Goal));
  bool success = distance_warning__action__CheckDistance_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_Goal__destroy(distance_warning__action__CheckDistance_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_Goal__Sequence__init(distance_warning__action__CheckDistance_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Goal * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_Goal *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_Goal__Sequence__fini(distance_warning__action__CheckDistance_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_Goal__Sequence *
distance_warning__action__CheckDistance_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Goal__Sequence * array = (distance_warning__action__CheckDistance_Goal__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_Goal__Sequence__destroy(distance_warning__action__CheckDistance_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_Goal__Sequence__are_equal(const distance_warning__action__CheckDistance_Goal__Sequence * lhs, const distance_warning__action__CheckDistance_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_Goal__Sequence__copy(
  const distance_warning__action__CheckDistance_Goal__Sequence * input,
  distance_warning__action__CheckDistance_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_Goal * data =
      (distance_warning__action__CheckDistance_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
#include "rosidl_runtime_c/string_functions.h"

bool
distance_warning__action__CheckDistance_Result__init(distance_warning__action__CheckDistance_Result * msg)
{
  if (!msg) {
    return false;
  }
  // is_safe
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    distance_warning__action__CheckDistance_Result__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__action__CheckDistance_Result__fini(distance_warning__action__CheckDistance_Result * msg)
{
  if (!msg) {
    return;
  }
  // is_safe
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
}

bool
distance_warning__action__CheckDistance_Result__are_equal(const distance_warning__action__CheckDistance_Result * lhs, const distance_warning__action__CheckDistance_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_safe
  if (lhs->is_safe != rhs->is_safe) {
    return false;
  }
  // result_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_message), &(rhs->result_message)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_Result__copy(
  const distance_warning__action__CheckDistance_Result * input,
  distance_warning__action__CheckDistance_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // is_safe
  output->is_safe = input->is_safe;
  // result_message
  if (!rosidl_runtime_c__String__copy(
      &(input->result_message), &(output->result_message)))
  {
    return false;
  }
  return true;
}

distance_warning__action__CheckDistance_Result *
distance_warning__action__CheckDistance_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Result * msg = (distance_warning__action__CheckDistance_Result *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_Result));
  bool success = distance_warning__action__CheckDistance_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_Result__destroy(distance_warning__action__CheckDistance_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_Result__Sequence__init(distance_warning__action__CheckDistance_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Result * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_Result *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_Result__Sequence__fini(distance_warning__action__CheckDistance_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_Result__Sequence *
distance_warning__action__CheckDistance_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Result__Sequence * array = (distance_warning__action__CheckDistance_Result__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_Result__Sequence__destroy(distance_warning__action__CheckDistance_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_Result__Sequence__are_equal(const distance_warning__action__CheckDistance_Result__Sequence * lhs, const distance_warning__action__CheckDistance_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_Result__Sequence__copy(
  const distance_warning__action__CheckDistance_Result__Sequence * input,
  distance_warning__action__CheckDistance_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_Result * data =
      (distance_warning__action__CheckDistance_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
distance_warning__action__CheckDistance_Feedback__init(distance_warning__action__CheckDistance_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // step
  // total_steps
  // feedback_msg
  if (!rosidl_runtime_c__String__init(&msg->feedback_msg)) {
    distance_warning__action__CheckDistance_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__action__CheckDistance_Feedback__fini(distance_warning__action__CheckDistance_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // step
  // total_steps
  // feedback_msg
  rosidl_runtime_c__String__fini(&msg->feedback_msg);
}

bool
distance_warning__action__CheckDistance_Feedback__are_equal(const distance_warning__action__CheckDistance_Feedback * lhs, const distance_warning__action__CheckDistance_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // step
  if (lhs->step != rhs->step) {
    return false;
  }
  // total_steps
  if (lhs->total_steps != rhs->total_steps) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_msg), &(rhs->feedback_msg)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_Feedback__copy(
  const distance_warning__action__CheckDistance_Feedback * input,
  distance_warning__action__CheckDistance_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // step
  output->step = input->step;
  // total_steps
  output->total_steps = input->total_steps;
  // feedback_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_msg), &(output->feedback_msg)))
  {
    return false;
  }
  return true;
}

distance_warning__action__CheckDistance_Feedback *
distance_warning__action__CheckDistance_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Feedback * msg = (distance_warning__action__CheckDistance_Feedback *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_Feedback));
  bool success = distance_warning__action__CheckDistance_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_Feedback__destroy(distance_warning__action__CheckDistance_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_Feedback__Sequence__init(distance_warning__action__CheckDistance_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Feedback * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_Feedback *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_Feedback__Sequence__fini(distance_warning__action__CheckDistance_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_Feedback__Sequence *
distance_warning__action__CheckDistance_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_Feedback__Sequence * array = (distance_warning__action__CheckDistance_Feedback__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_Feedback__Sequence__destroy(distance_warning__action__CheckDistance_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_Feedback__Sequence__are_equal(const distance_warning__action__CheckDistance_Feedback__Sequence * lhs, const distance_warning__action__CheckDistance_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_Feedback__Sequence__copy(
  const distance_warning__action__CheckDistance_Feedback__Sequence * input,
  distance_warning__action__CheckDistance_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_Feedback * data =
      (distance_warning__action__CheckDistance_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "distance_warning/action/detail/check_distance__functions.h"

bool
distance_warning__action__CheckDistance_SendGoal_Request__init(distance_warning__action__CheckDistance_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    distance_warning__action__CheckDistance_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!distance_warning__action__CheckDistance_Goal__init(&msg->goal)) {
    distance_warning__action__CheckDistance_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__action__CheckDistance_SendGoal_Request__fini(distance_warning__action__CheckDistance_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  distance_warning__action__CheckDistance_Goal__fini(&msg->goal);
}

bool
distance_warning__action__CheckDistance_SendGoal_Request__are_equal(const distance_warning__action__CheckDistance_SendGoal_Request * lhs, const distance_warning__action__CheckDistance_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!distance_warning__action__CheckDistance_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_SendGoal_Request__copy(
  const distance_warning__action__CheckDistance_SendGoal_Request * input,
  distance_warning__action__CheckDistance_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!distance_warning__action__CheckDistance_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

distance_warning__action__CheckDistance_SendGoal_Request *
distance_warning__action__CheckDistance_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_SendGoal_Request * msg = (distance_warning__action__CheckDistance_SendGoal_Request *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_SendGoal_Request));
  bool success = distance_warning__action__CheckDistance_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_SendGoal_Request__destroy(distance_warning__action__CheckDistance_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_SendGoal_Request__Sequence__init(distance_warning__action__CheckDistance_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_SendGoal_Request * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_SendGoal_Request *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_SendGoal_Request__Sequence__fini(distance_warning__action__CheckDistance_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_SendGoal_Request__Sequence *
distance_warning__action__CheckDistance_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_SendGoal_Request__Sequence * array = (distance_warning__action__CheckDistance_SendGoal_Request__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_SendGoal_Request__Sequence__destroy(distance_warning__action__CheckDistance_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_SendGoal_Request__Sequence__are_equal(const distance_warning__action__CheckDistance_SendGoal_Request__Sequence * lhs, const distance_warning__action__CheckDistance_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_SendGoal_Request__Sequence__copy(
  const distance_warning__action__CheckDistance_SendGoal_Request__Sequence * input,
  distance_warning__action__CheckDistance_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_SendGoal_Request * data =
      (distance_warning__action__CheckDistance_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
distance_warning__action__CheckDistance_SendGoal_Response__init(distance_warning__action__CheckDistance_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    distance_warning__action__CheckDistance_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__action__CheckDistance_SendGoal_Response__fini(distance_warning__action__CheckDistance_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
distance_warning__action__CheckDistance_SendGoal_Response__are_equal(const distance_warning__action__CheckDistance_SendGoal_Response * lhs, const distance_warning__action__CheckDistance_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_SendGoal_Response__copy(
  const distance_warning__action__CheckDistance_SendGoal_Response * input,
  distance_warning__action__CheckDistance_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

distance_warning__action__CheckDistance_SendGoal_Response *
distance_warning__action__CheckDistance_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_SendGoal_Response * msg = (distance_warning__action__CheckDistance_SendGoal_Response *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_SendGoal_Response));
  bool success = distance_warning__action__CheckDistance_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_SendGoal_Response__destroy(distance_warning__action__CheckDistance_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_SendGoal_Response__Sequence__init(distance_warning__action__CheckDistance_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_SendGoal_Response * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_SendGoal_Response *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_SendGoal_Response__Sequence__fini(distance_warning__action__CheckDistance_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_SendGoal_Response__Sequence *
distance_warning__action__CheckDistance_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_SendGoal_Response__Sequence * array = (distance_warning__action__CheckDistance_SendGoal_Response__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_SendGoal_Response__Sequence__destroy(distance_warning__action__CheckDistance_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_SendGoal_Response__Sequence__are_equal(const distance_warning__action__CheckDistance_SendGoal_Response__Sequence * lhs, const distance_warning__action__CheckDistance_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_SendGoal_Response__Sequence__copy(
  const distance_warning__action__CheckDistance_SendGoal_Response__Sequence * input,
  distance_warning__action__CheckDistance_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_SendGoal_Response * data =
      (distance_warning__action__CheckDistance_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
distance_warning__action__CheckDistance_GetResult_Request__init(distance_warning__action__CheckDistance_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    distance_warning__action__CheckDistance_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__action__CheckDistance_GetResult_Request__fini(distance_warning__action__CheckDistance_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
distance_warning__action__CheckDistance_GetResult_Request__are_equal(const distance_warning__action__CheckDistance_GetResult_Request * lhs, const distance_warning__action__CheckDistance_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_GetResult_Request__copy(
  const distance_warning__action__CheckDistance_GetResult_Request * input,
  distance_warning__action__CheckDistance_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

distance_warning__action__CheckDistance_GetResult_Request *
distance_warning__action__CheckDistance_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_GetResult_Request * msg = (distance_warning__action__CheckDistance_GetResult_Request *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_GetResult_Request));
  bool success = distance_warning__action__CheckDistance_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_GetResult_Request__destroy(distance_warning__action__CheckDistance_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_GetResult_Request__Sequence__init(distance_warning__action__CheckDistance_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_GetResult_Request * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_GetResult_Request *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_GetResult_Request__Sequence__fini(distance_warning__action__CheckDistance_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_GetResult_Request__Sequence *
distance_warning__action__CheckDistance_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_GetResult_Request__Sequence * array = (distance_warning__action__CheckDistance_GetResult_Request__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_GetResult_Request__Sequence__destroy(distance_warning__action__CheckDistance_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_GetResult_Request__Sequence__are_equal(const distance_warning__action__CheckDistance_GetResult_Request__Sequence * lhs, const distance_warning__action__CheckDistance_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_GetResult_Request__Sequence__copy(
  const distance_warning__action__CheckDistance_GetResult_Request__Sequence * input,
  distance_warning__action__CheckDistance_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_GetResult_Request * data =
      (distance_warning__action__CheckDistance_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "distance_warning/action/detail/check_distance__functions.h"

bool
distance_warning__action__CheckDistance_GetResult_Response__init(distance_warning__action__CheckDistance_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!distance_warning__action__CheckDistance_Result__init(&msg->result)) {
    distance_warning__action__CheckDistance_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__action__CheckDistance_GetResult_Response__fini(distance_warning__action__CheckDistance_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  distance_warning__action__CheckDistance_Result__fini(&msg->result);
}

bool
distance_warning__action__CheckDistance_GetResult_Response__are_equal(const distance_warning__action__CheckDistance_GetResult_Response * lhs, const distance_warning__action__CheckDistance_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!distance_warning__action__CheckDistance_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_GetResult_Response__copy(
  const distance_warning__action__CheckDistance_GetResult_Response * input,
  distance_warning__action__CheckDistance_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!distance_warning__action__CheckDistance_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

distance_warning__action__CheckDistance_GetResult_Response *
distance_warning__action__CheckDistance_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_GetResult_Response * msg = (distance_warning__action__CheckDistance_GetResult_Response *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_GetResult_Response));
  bool success = distance_warning__action__CheckDistance_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_GetResult_Response__destroy(distance_warning__action__CheckDistance_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_GetResult_Response__Sequence__init(distance_warning__action__CheckDistance_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_GetResult_Response * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_GetResult_Response *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_GetResult_Response__Sequence__fini(distance_warning__action__CheckDistance_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_GetResult_Response__Sequence *
distance_warning__action__CheckDistance_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_GetResult_Response__Sequence * array = (distance_warning__action__CheckDistance_GetResult_Response__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_GetResult_Response__Sequence__destroy(distance_warning__action__CheckDistance_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_GetResult_Response__Sequence__are_equal(const distance_warning__action__CheckDistance_GetResult_Response__Sequence * lhs, const distance_warning__action__CheckDistance_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_GetResult_Response__Sequence__copy(
  const distance_warning__action__CheckDistance_GetResult_Response__Sequence * input,
  distance_warning__action__CheckDistance_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_GetResult_Response * data =
      (distance_warning__action__CheckDistance_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "distance_warning/action/detail/check_distance__functions.h"

bool
distance_warning__action__CheckDistance_FeedbackMessage__init(distance_warning__action__CheckDistance_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    distance_warning__action__CheckDistance_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!distance_warning__action__CheckDistance_Feedback__init(&msg->feedback)) {
    distance_warning__action__CheckDistance_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__action__CheckDistance_FeedbackMessage__fini(distance_warning__action__CheckDistance_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  distance_warning__action__CheckDistance_Feedback__fini(&msg->feedback);
}

bool
distance_warning__action__CheckDistance_FeedbackMessage__are_equal(const distance_warning__action__CheckDistance_FeedbackMessage * lhs, const distance_warning__action__CheckDistance_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!distance_warning__action__CheckDistance_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__action__CheckDistance_FeedbackMessage__copy(
  const distance_warning__action__CheckDistance_FeedbackMessage * input,
  distance_warning__action__CheckDistance_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!distance_warning__action__CheckDistance_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

distance_warning__action__CheckDistance_FeedbackMessage *
distance_warning__action__CheckDistance_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_FeedbackMessage * msg = (distance_warning__action__CheckDistance_FeedbackMessage *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__action__CheckDistance_FeedbackMessage));
  bool success = distance_warning__action__CheckDistance_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__action__CheckDistance_FeedbackMessage__destroy(distance_warning__action__CheckDistance_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__action__CheckDistance_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__action__CheckDistance_FeedbackMessage__Sequence__init(distance_warning__action__CheckDistance_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_FeedbackMessage * data = NULL;

  if (size) {
    data = (distance_warning__action__CheckDistance_FeedbackMessage *)allocator.zero_allocate(size, sizeof(distance_warning__action__CheckDistance_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__action__CheckDistance_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__action__CheckDistance_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
distance_warning__action__CheckDistance_FeedbackMessage__Sequence__fini(distance_warning__action__CheckDistance_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      distance_warning__action__CheckDistance_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

distance_warning__action__CheckDistance_FeedbackMessage__Sequence *
distance_warning__action__CheckDistance_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__action__CheckDistance_FeedbackMessage__Sequence * array = (distance_warning__action__CheckDistance_FeedbackMessage__Sequence *)allocator.allocate(sizeof(distance_warning__action__CheckDistance_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__action__CheckDistance_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__action__CheckDistance_FeedbackMessage__Sequence__destroy(distance_warning__action__CheckDistance_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__action__CheckDistance_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__action__CheckDistance_FeedbackMessage__Sequence__are_equal(const distance_warning__action__CheckDistance_FeedbackMessage__Sequence * lhs, const distance_warning__action__CheckDistance_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__action__CheckDistance_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__action__CheckDistance_FeedbackMessage__Sequence__copy(
  const distance_warning__action__CheckDistance_FeedbackMessage__Sequence * input,
  distance_warning__action__CheckDistance_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__action__CheckDistance_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__action__CheckDistance_FeedbackMessage * data =
      (distance_warning__action__CheckDistance_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__action__CheckDistance_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__action__CheckDistance_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__action__CheckDistance_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
