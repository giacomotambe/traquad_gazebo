// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__BUILDER_HPP_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pi3hat_moteus_int_msgs
{

namespace msg
{

namespace builder
{

class Init_QuadFootState_force
{
public:
  explicit Init_QuadFootState_force(::pi3hat_moteus_int_msgs::msg::QuadFootState & msg)
  : msg_(msg)
  {}
  ::pi3hat_moteus_int_msgs::msg::QuadFootState force(::pi3hat_moteus_int_msgs::msg::QuadFootState::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::QuadFootState msg_;
};

class Init_QuadFootState_velocity
{
public:
  explicit Init_QuadFootState_velocity(::pi3hat_moteus_int_msgs::msg::QuadFootState & msg)
  : msg_(msg)
  {}
  Init_QuadFootState_force velocity(::pi3hat_moteus_int_msgs::msg::QuadFootState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_QuadFootState_force(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::QuadFootState msg_;
};

class Init_QuadFootState_position
{
public:
  explicit Init_QuadFootState_position(::pi3hat_moteus_int_msgs::msg::QuadFootState & msg)
  : msg_(msg)
  {}
  Init_QuadFootState_velocity position(::pi3hat_moteus_int_msgs::msg::QuadFootState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_QuadFootState_velocity(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::QuadFootState msg_;
};

class Init_QuadFootState_foot_id
{
public:
  explicit Init_QuadFootState_foot_id(::pi3hat_moteus_int_msgs::msg::QuadFootState & msg)
  : msg_(msg)
  {}
  Init_QuadFootState_position foot_id(::pi3hat_moteus_int_msgs::msg::QuadFootState::_foot_id_type arg)
  {
    msg_.foot_id = std::move(arg);
    return Init_QuadFootState_position(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::QuadFootState msg_;
};

class Init_QuadFootState_header
{
public:
  Init_QuadFootState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadFootState_foot_id header(::pi3hat_moteus_int_msgs::msg::QuadFootState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QuadFootState_foot_id(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::QuadFootState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi3hat_moteus_int_msgs::msg::QuadFootState>()
{
  return pi3hat_moteus_int_msgs::msg::builder::Init_QuadFootState_header();
}

}  // namespace pi3hat_moteus_int_msgs

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__BUILDER_HPP_
