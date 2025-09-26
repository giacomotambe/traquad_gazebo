// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__STRUCT_HPP_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__STRUCT_HPP_

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
// Member 'position'
// Member 'velocity'
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pi3hat_moteus_int_msgs__msg__QuadFootState __attribute__((deprecated))
#else
# define DEPRECATED__pi3hat_moteus_int_msgs__msg__QuadFootState __declspec(deprecated)
#endif

namespace pi3hat_moteus_int_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadFootState_
{
  using Type = QuadFootState_<ContainerAllocator>;

  explicit QuadFootState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit QuadFootState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _foot_id_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _foot_id_type foot_id;
  using _position_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _position_type position;
  using _velocity_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _velocity_type velocity;
  using _force_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _force_type force;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__foot_id(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->foot_id = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__force(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pi3hat_moteus_int_msgs__msg__QuadFootState
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pi3hat_moteus_int_msgs__msg__QuadFootState
    std::shared_ptr<pi3hat_moteus_int_msgs::msg::QuadFootState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadFootState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->foot_id != other.foot_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadFootState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadFootState_

// alias to use template instance with default allocator
using QuadFootState =
  pi3hat_moteus_int_msgs::msg::QuadFootState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pi3hat_moteus_int_msgs

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__STRUCT_HPP_
