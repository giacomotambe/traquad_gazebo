// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pi3hat_moteus_int_msgs:msg/OmniMulinexCommand.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__STRUCT_HPP_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pi3hat_moteus_int_msgs__msg__OmniMulinexCommand __attribute__((deprecated))
#else
# define DEPRECATED__pi3hat_moteus_int_msgs__msg__OmniMulinexCommand __declspec(deprecated)
#endif

namespace pi3hat_moteus_int_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OmniMulinexCommand_
{
  using Type = OmniMulinexCommand_<ContainerAllocator>;

  explicit OmniMulinexCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_x = 0.0;
      this->v_y = 0.0;
      this->omega = 0.0;
      this->height_rate = 0.0;
    }
  }

  explicit OmniMulinexCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_x = 0.0;
      this->v_y = 0.0;
      this->omega = 0.0;
      this->height_rate = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _v_x_type =
    double;
  _v_x_type v_x;
  using _v_y_type =
    double;
  _v_y_type v_y;
  using _omega_type =
    double;
  _omega_type omega;
  using _height_rate_type =
    double;
  _height_rate_type height_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__v_x(
    const double & _arg)
  {
    this->v_x = _arg;
    return *this;
  }
  Type & set__v_y(
    const double & _arg)
  {
    this->v_y = _arg;
    return *this;
  }
  Type & set__omega(
    const double & _arg)
  {
    this->omega = _arg;
    return *this;
  }
  Type & set__height_rate(
    const double & _arg)
  {
    this->height_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pi3hat_moteus_int_msgs__msg__OmniMulinexCommand
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pi3hat_moteus_int_msgs__msg__OmniMulinexCommand
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OmniMulinexCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->v_x != other.v_x) {
      return false;
    }
    if (this->v_y != other.v_y) {
      return false;
    }
    if (this->omega != other.omega) {
      return false;
    }
    if (this->height_rate != other.height_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const OmniMulinexCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OmniMulinexCommand_

// alias to use template instance with default allocator
using OmniMulinexCommand =
  pi3hat_moteus_int_msgs::msg::OmniMulinexCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pi3hat_moteus_int_msgs

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__STRUCT_HPP_
