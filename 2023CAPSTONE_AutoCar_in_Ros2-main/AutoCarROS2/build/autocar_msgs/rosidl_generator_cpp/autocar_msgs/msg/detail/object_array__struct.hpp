// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocar_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__STRUCT_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'object_list'
#include "autocar_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocar_msgs__msg__ObjectArray __attribute__((deprecated))
#else
# define DEPRECATED__autocar_msgs__msg__ObjectArray __declspec(deprecated)
#endif

namespace autocar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectArray_
{
  using Type = ObjectArray_<ContainerAllocator>;

  explicit ObjectArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ObjectArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_list_type =
    std::vector<autocar_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<autocar_msgs::msg::Object_<ContainerAllocator>>::other>;
  _object_list_type object_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_list(
    const std::vector<autocar_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<autocar_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->object_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocar_msgs::msg::ObjectArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocar_msgs::msg::ObjectArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::ObjectArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::ObjectArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocar_msgs__msg__ObjectArray
    std::shared_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocar_msgs__msg__ObjectArray
    std::shared_ptr<autocar_msgs::msg::ObjectArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_list != other.object_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectArray_

// alias to use template instance with default allocator
using ObjectArray =
  autocar_msgs::msg::ObjectArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__STRUCT_HPP_
