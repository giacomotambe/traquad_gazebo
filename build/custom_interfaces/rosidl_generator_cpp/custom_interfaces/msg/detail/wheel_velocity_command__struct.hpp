// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/WheelVelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__WheelVelocityCommand __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__WheelVelocityCommand __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelVelocityCommand_
{
  using Type = WheelVelocityCommand_<ContainerAllocator>;

  explicit WheelVelocityCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_lf = 0.0;
      this->v_lb = 0.0;
      this->v_rf = 0.0;
      this->v_rb = 0.0;
    }
  }

  explicit WheelVelocityCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_lf = 0.0;
      this->v_lb = 0.0;
      this->v_rf = 0.0;
      this->v_rb = 0.0;
    }
  }

  // field types and members
  using _v_lf_type =
    double;
  _v_lf_type v_lf;
  using _v_lb_type =
    double;
  _v_lb_type v_lb;
  using _v_rf_type =
    double;
  _v_rf_type v_rf;
  using _v_rb_type =
    double;
  _v_rb_type v_rb;

  // setters for named parameter idiom
  Type & set__v_lf(
    const double & _arg)
  {
    this->v_lf = _arg;
    return *this;
  }
  Type & set__v_lb(
    const double & _arg)
  {
    this->v_lb = _arg;
    return *this;
  }
  Type & set__v_rf(
    const double & _arg)
  {
    this->v_rf = _arg;
    return *this;
  }
  Type & set__v_rb(
    const double & _arg)
  {
    this->v_rb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__WheelVelocityCommand
    std::shared_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__WheelVelocityCommand
    std::shared_ptr<custom_interfaces::msg::WheelVelocityCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelVelocityCommand_ & other) const
  {
    if (this->v_lf != other.v_lf) {
      return false;
    }
    if (this->v_lb != other.v_lb) {
      return false;
    }
    if (this->v_rf != other.v_rf) {
      return false;
    }
    if (this->v_rb != other.v_rb) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelVelocityCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelVelocityCommand_

// alias to use template instance with default allocator
using WheelVelocityCommand =
  custom_interfaces::msg::WheelVelocityCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__STRUCT_HPP_
