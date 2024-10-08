// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autocar_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autocar_msgs/msg/detail/object_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autocar_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autocar_msgs::msg::ObjectArray(_init);
}

void ObjectArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autocar_msgs::msg::ObjectArray *>(message_memory);
  typed_message->~ObjectArray();
}

size_t size_function__ObjectArray__object_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autocar_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectArray__object_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autocar_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectArray__object_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autocar_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectArray__object_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autocar_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs::msg::ObjectArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autocar_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs::msg::ObjectArray, object_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectArray__object_list,  // size() function pointer
    get_const_function__ObjectArray__object_list,  // get_const(index) function pointer
    get_function__ObjectArray__object_list,  // get(index) function pointer
    resize_function__ObjectArray__object_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectArray_message_members = {
  "autocar_msgs::msg",  // message namespace
  "ObjectArray",  // message name
  2,  // number of fields
  sizeof(autocar_msgs::msg::ObjectArray),
  ObjectArray_message_member_array,  // message members
  ObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autocar_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocar_msgs::msg::ObjectArray>()
{
  return &::autocar_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocar_msgs, msg, ObjectArray)() {
  return &::autocar_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
