// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocar_msgs:msg/LinkArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocar_msgs/msg/detail/link_array__rosidl_typesupport_introspection_c.h"
#include "autocar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocar_msgs/msg/detail/link_array__functions.h"
#include "autocar_msgs/msg/detail/link_array__struct.h"


// Include directives for member types
// Member `mode`
// Member `direction`
// Member `next_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinkArray__rosidl_typesupport_introspection_c__LinkArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocar_msgs__msg__LinkArray__init(message_memory);
}

void LinkArray__rosidl_typesupport_introspection_c__LinkArray_fini_function(void * message_memory)
{
  autocar_msgs__msg__LinkArray__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_member_array[7] = {
  {
    "link_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__LinkArray, link_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "closest_wp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__LinkArray, closest_wp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__LinkArray, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_stop_wp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__LinkArray, traffic_stop_wp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking_stop_wp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__LinkArray, parking_stop_wp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__LinkArray, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__LinkArray, next_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_members = {
  "autocar_msgs__msg",  // message namespace
  "LinkArray",  // message name
  7,  // number of fields
  sizeof(autocar_msgs__msg__LinkArray),
  LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_member_array,  // message members
  LinkArray__rosidl_typesupport_introspection_c__LinkArray_init_function,  // function to initialize message memory (memory has to be allocated)
  LinkArray__rosidl_typesupport_introspection_c__LinkArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_type_support_handle = {
  0,
  &LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, LinkArray)() {
  if (!LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_type_support_handle.typesupport_identifier) {
    LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinkArray__rosidl_typesupport_introspection_c__LinkArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
