// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from distance_warning:srv/SetThreshold.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "distance_warning/srv/detail/set_threshold__struct.h"
#include "distance_warning/srv/detail/set_threshold__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace distance_warning
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetThreshold_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetThreshold_Request_type_support_ids_t;

static const _SetThreshold_Request_type_support_ids_t _SetThreshold_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetThreshold_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetThreshold_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetThreshold_Request_type_support_symbol_names_t _SetThreshold_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, distance_warning, srv, SetThreshold_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Request)),
  }
};

typedef struct _SetThreshold_Request_type_support_data_t
{
  void * data[2];
} _SetThreshold_Request_type_support_data_t;

static _SetThreshold_Request_type_support_data_t _SetThreshold_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetThreshold_Request_message_typesupport_map = {
  2,
  "distance_warning",
  &_SetThreshold_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetThreshold_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetThreshold_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetThreshold_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetThreshold_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace distance_warning

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, distance_warning, srv, SetThreshold_Request)() {
  return &::distance_warning::srv::rosidl_typesupport_c::SetThreshold_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "distance_warning/srv/detail/set_threshold__struct.h"
// already included above
// #include "distance_warning/srv/detail/set_threshold__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace distance_warning
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetThreshold_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetThreshold_Response_type_support_ids_t;

static const _SetThreshold_Response_type_support_ids_t _SetThreshold_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetThreshold_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetThreshold_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetThreshold_Response_type_support_symbol_names_t _SetThreshold_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, distance_warning, srv, SetThreshold_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold_Response)),
  }
};

typedef struct _SetThreshold_Response_type_support_data_t
{
  void * data[2];
} _SetThreshold_Response_type_support_data_t;

static _SetThreshold_Response_type_support_data_t _SetThreshold_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetThreshold_Response_message_typesupport_map = {
  2,
  "distance_warning",
  &_SetThreshold_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetThreshold_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetThreshold_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetThreshold_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetThreshold_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace distance_warning

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, distance_warning, srv, SetThreshold_Response)() {
  return &::distance_warning::srv::rosidl_typesupport_c::SetThreshold_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "distance_warning/srv/detail/set_threshold__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace distance_warning
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetThreshold_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetThreshold_type_support_ids_t;

static const _SetThreshold_type_support_ids_t _SetThreshold_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetThreshold_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetThreshold_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetThreshold_type_support_symbol_names_t _SetThreshold_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, distance_warning, srv, SetThreshold)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, distance_warning, srv, SetThreshold)),
  }
};

typedef struct _SetThreshold_type_support_data_t
{
  void * data[2];
} _SetThreshold_type_support_data_t;

static _SetThreshold_type_support_data_t _SetThreshold_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetThreshold_service_typesupport_map = {
  2,
  "distance_warning",
  &_SetThreshold_service_typesupport_ids.typesupport_identifier[0],
  &_SetThreshold_service_typesupport_symbol_names.symbol_name[0],
  &_SetThreshold_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetThreshold_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetThreshold_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace distance_warning

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, distance_warning, srv, SetThreshold)() {
  return &::distance_warning::srv::rosidl_typesupport_c::SetThreshold_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
