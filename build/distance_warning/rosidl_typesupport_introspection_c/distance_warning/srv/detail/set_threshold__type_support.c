// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "distance_warning/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"
#include "distance_warning/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "distance_warning/srv/detail/set_threshold__functions.h"
#include "distance_warning/srv/detail/set_threshold__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  distance_warning__srv__SetThreshold_Request__init(message_memory);
}

void distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_fini_function(void * message_memory)
{
  distance_warning__srv__SetThreshold_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_member_array[1] = {
  {
    "increase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(distance_warning__srv__SetThreshold_Request, increase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_members = {
  "distance_warning__srv",  // message namespace
  "SetThreshold_Request",  // message name
  1,  // number of fields
  sizeof(distance_warning__srv__SetThreshold_Request),
  distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_member_array,  // message members
  distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle = {
  0,
  &distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_distance_warning
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Request)() {
  if (!distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle.typesupport_identifier) {
    distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &distance_warning__srv__SetThreshold_Request__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "distance_warning/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"
// already included above
// #include "distance_warning/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "distance_warning/srv/detail/set_threshold__functions.h"
// already included above
// #include "distance_warning/srv/detail/set_threshold__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  distance_warning__srv__SetThreshold_Response__init(message_memory);
}

void distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_fini_function(void * message_memory)
{
  distance_warning__srv__SetThreshold_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(distance_warning__srv__SetThreshold_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(distance_warning__srv__SetThreshold_Response, new_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(distance_warning__srv__SetThreshold_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_members = {
  "distance_warning__srv",  // message namespace
  "SetThreshold_Response",  // message name
  3,  // number of fields
  sizeof(distance_warning__srv__SetThreshold_Response),
  distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_member_array,  // message members
  distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle = {
  0,
  &distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_distance_warning
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Response)() {
  if (!distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle.typesupport_identifier) {
    distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &distance_warning__srv__SetThreshold_Response__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "distance_warning/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "distance_warning/srv/detail/set_threshold__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_members = {
  "distance_warning__srv",  // service namespace
  "SetThreshold",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_Request_message_type_support_handle,
  NULL  // response message
  // distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_Response_message_type_support_handle
};

static rosidl_service_type_support_t distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle = {
  0,
  &distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_distance_warning
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold)() {
  if (!distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle.typesupport_identifier) {
    distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Response)()->data;
  }

  return &distance_warning__srv__detail__set_threshold__rosidl_typesupport_introspection_c__SetThreshold_service_type_support_handle;
}
