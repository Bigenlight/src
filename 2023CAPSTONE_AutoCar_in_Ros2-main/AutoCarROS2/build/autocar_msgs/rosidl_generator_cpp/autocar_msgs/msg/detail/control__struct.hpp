// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocar_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__autocar_msgs__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__autocar_msgs__msg__Control __declspec(deprecated)
#endif

namespace autocar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel = 0.0f;
      this->kappa = 0.0f;
      this->delta = 0.0f;
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel = 0.0f;
      this->kappa = 0.0f;
      this->delta = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _accel_type =
    float;
  _accel_type accel;
  using _kappa_type =
    float;
  _kappa_type kappa;
  using _delta_type =
    float;
  _delta_type delta;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__accel(
    const float & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__kappa(
    const float & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__delta(
    const float & _arg)
  {
    this->delta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocar_msgs::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocar_msgs::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocar_msgs::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocar_msgs::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocar_msgs::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocar_msgs::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocar_msgs__msg__Control
    std::shared_ptr<autocar_msgs::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocar_msgs__msg__Control
    std::shared_ptr<autocar_msgs::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  autocar_msgs::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
