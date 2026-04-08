// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice
#include "distance_warning/srv/detail/set_threshold__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
distance_warning__srv__SetThreshold_Request__init(distance_warning__srv__SetThreshold_Request * msg)
{
  if (!msg) {
    return false;
  }
  // increase
  return true;
}

void
distance_warning__srv__SetThreshold_Request__fini(distance_warning__srv__SetThreshold_Request * msg)
{
  if (!msg) {
    return;
  }
  // increase
}

bool
distance_warning__srv__SetThreshold_Request__are_equal(const distance_warning__srv__SetThreshold_Request * lhs, const distance_warning__srv__SetThreshold_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // increase
  if (lhs->increase != rhs->increase) {
    return false;
  }
  return true;
}

bool
distance_warning__srv__SetThreshold_Request__copy(
  const distance_warning__srv__SetThreshold_Request * input,
  distance_warning__srv__SetThreshold_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // increase
  output->increase = input->increase;
  return true;
}

distance_warning__srv__SetThreshold_Request *
distance_warning__srv__SetThreshold_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__srv__SetThreshold_Request * msg = (distance_warning__srv__SetThreshold_Request *)allocator.allocate(sizeof(distance_warning__srv__SetThreshold_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__srv__SetThreshold_Request));
  bool success = distance_warning__srv__SetThreshold_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__srv__SetThreshold_Request__destroy(distance_warning__srv__SetThreshold_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__srv__SetThreshold_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__srv__SetThreshold_Request__Sequence__init(distance_warning__srv__SetThreshold_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__srv__SetThreshold_Request * data = NULL;

  if (size) {
    data = (distance_warning__srv__SetThreshold_Request *)allocator.zero_allocate(size, sizeof(distance_warning__srv__SetThreshold_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__srv__SetThreshold_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__srv__SetThreshold_Request__fini(&data[i - 1]);
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
distance_warning__srv__SetThreshold_Request__Sequence__fini(distance_warning__srv__SetThreshold_Request__Sequence * array)
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
      distance_warning__srv__SetThreshold_Request__fini(&array->data[i]);
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

distance_warning__srv__SetThreshold_Request__Sequence *
distance_warning__srv__SetThreshold_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__srv__SetThreshold_Request__Sequence * array = (distance_warning__srv__SetThreshold_Request__Sequence *)allocator.allocate(sizeof(distance_warning__srv__SetThreshold_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__srv__SetThreshold_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__srv__SetThreshold_Request__Sequence__destroy(distance_warning__srv__SetThreshold_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__srv__SetThreshold_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__srv__SetThreshold_Request__Sequence__are_equal(const distance_warning__srv__SetThreshold_Request__Sequence * lhs, const distance_warning__srv__SetThreshold_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__srv__SetThreshold_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__srv__SetThreshold_Request__Sequence__copy(
  const distance_warning__srv__SetThreshold_Request__Sequence * input,
  distance_warning__srv__SetThreshold_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__srv__SetThreshold_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__srv__SetThreshold_Request * data =
      (distance_warning__srv__SetThreshold_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__srv__SetThreshold_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__srv__SetThreshold_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__srv__SetThreshold_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
distance_warning__srv__SetThreshold_Response__init(distance_warning__srv__SetThreshold_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // new_threshold
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    distance_warning__srv__SetThreshold_Response__fini(msg);
    return false;
  }
  return true;
}

void
distance_warning__srv__SetThreshold_Response__fini(distance_warning__srv__SetThreshold_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // new_threshold
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
distance_warning__srv__SetThreshold_Response__are_equal(const distance_warning__srv__SetThreshold_Response * lhs, const distance_warning__srv__SetThreshold_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // new_threshold
  if (lhs->new_threshold != rhs->new_threshold) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
distance_warning__srv__SetThreshold_Response__copy(
  const distance_warning__srv__SetThreshold_Response * input,
  distance_warning__srv__SetThreshold_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // new_threshold
  output->new_threshold = input->new_threshold;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

distance_warning__srv__SetThreshold_Response *
distance_warning__srv__SetThreshold_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__srv__SetThreshold_Response * msg = (distance_warning__srv__SetThreshold_Response *)allocator.allocate(sizeof(distance_warning__srv__SetThreshold_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(distance_warning__srv__SetThreshold_Response));
  bool success = distance_warning__srv__SetThreshold_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
distance_warning__srv__SetThreshold_Response__destroy(distance_warning__srv__SetThreshold_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    distance_warning__srv__SetThreshold_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
distance_warning__srv__SetThreshold_Response__Sequence__init(distance_warning__srv__SetThreshold_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__srv__SetThreshold_Response * data = NULL;

  if (size) {
    data = (distance_warning__srv__SetThreshold_Response *)allocator.zero_allocate(size, sizeof(distance_warning__srv__SetThreshold_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = distance_warning__srv__SetThreshold_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        distance_warning__srv__SetThreshold_Response__fini(&data[i - 1]);
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
distance_warning__srv__SetThreshold_Response__Sequence__fini(distance_warning__srv__SetThreshold_Response__Sequence * array)
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
      distance_warning__srv__SetThreshold_Response__fini(&array->data[i]);
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

distance_warning__srv__SetThreshold_Response__Sequence *
distance_warning__srv__SetThreshold_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  distance_warning__srv__SetThreshold_Response__Sequence * array = (distance_warning__srv__SetThreshold_Response__Sequence *)allocator.allocate(sizeof(distance_warning__srv__SetThreshold_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = distance_warning__srv__SetThreshold_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
distance_warning__srv__SetThreshold_Response__Sequence__destroy(distance_warning__srv__SetThreshold_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    distance_warning__srv__SetThreshold_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
distance_warning__srv__SetThreshold_Response__Sequence__are_equal(const distance_warning__srv__SetThreshold_Response__Sequence * lhs, const distance_warning__srv__SetThreshold_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!distance_warning__srv__SetThreshold_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
distance_warning__srv__SetThreshold_Response__Sequence__copy(
  const distance_warning__srv__SetThreshold_Response__Sequence * input,
  distance_warning__srv__SetThreshold_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(distance_warning__srv__SetThreshold_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    distance_warning__srv__SetThreshold_Response * data =
      (distance_warning__srv__SetThreshold_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!distance_warning__srv__SetThreshold_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          distance_warning__srv__SetThreshold_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!distance_warning__srv__SetThreshold_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
