// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pi3hat_moteus_int_msgs:msg/OmniMulinexCommand.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__BUILDER_HPP_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pi3hat_moteus_int_msgs/msg/detail/omni_mulinex_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pi3hat_moteus_int_msgs
{

namespace msg
{

namespace builder
{

class Init_OmniMulinexCommand_height_rate
{
public:
  explicit Init_OmniMulinexCommand_height_rate(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand & msg)
  : msg_(msg)
  {}
  ::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand height_rate(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand::_height_rate_type arg)
  {
    msg_.height_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand msg_;
};

class Init_OmniMulinexCommand_omega
{
public:
  explicit Init_OmniMulinexCommand_omega(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand & msg)
  : msg_(msg)
  {}
  Init_OmniMulinexCommand_height_rate omega(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand::_omega_type arg)
  {
    msg_.omega = std::move(arg);
    return Init_OmniMulinexCommand_height_rate(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand msg_;
};

class Init_OmniMulinexCommand_v_y
{
public:
  explicit Init_OmniMulinexCommand_v_y(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand & msg)
  : msg_(msg)
  {}
  Init_OmniMulinexCommand_omega v_y(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand::_v_y_type arg)
  {
    msg_.v_y = std::move(arg);
    return Init_OmniMulinexCommand_omega(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand msg_;
};

class Init_OmniMulinexCommand_v_x
{
public:
  explicit Init_OmniMulinexCommand_v_x(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand & msg)
  : msg_(msg)
  {}
  Init_OmniMulinexCommand_v_y v_x(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand::_v_x_type arg)
  {
    msg_.v_x = std::move(arg);
    return Init_OmniMulinexCommand_v_y(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand msg_;
};

class Init_OmniMulinexCommand_header
{
public:
  Init_OmniMulinexCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OmniMulinexCommand_v_x header(::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OmniMulinexCommand_v_x(msg_);
  }

private:
  ::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi3hat_moteus_int_msgs::msg::OmniMulinexCommand>()
{
  return pi3hat_moteus_int_msgs::msg::builder::Init_OmniMulinexCommand_header();
}

}  // namespace pi3hat_moteus_int_msgs

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__BUILDER_HPP_
