// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/WheelVelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/wheel_velocity_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelVelocityCommand_v_rb
{
public:
  explicit Init_WheelVelocityCommand_v_rb(::custom_interfaces::msg::WheelVelocityCommand & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::WheelVelocityCommand v_rb(::custom_interfaces::msg::WheelVelocityCommand::_v_rb_type arg)
  {
    msg_.v_rb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::WheelVelocityCommand msg_;
};

class Init_WheelVelocityCommand_v_rf
{
public:
  explicit Init_WheelVelocityCommand_v_rf(::custom_interfaces::msg::WheelVelocityCommand & msg)
  : msg_(msg)
  {}
  Init_WheelVelocityCommand_v_rb v_rf(::custom_interfaces::msg::WheelVelocityCommand::_v_rf_type arg)
  {
    msg_.v_rf = std::move(arg);
    return Init_WheelVelocityCommand_v_rb(msg_);
  }

private:
  ::custom_interfaces::msg::WheelVelocityCommand msg_;
};

class Init_WheelVelocityCommand_v_lb
{
public:
  explicit Init_WheelVelocityCommand_v_lb(::custom_interfaces::msg::WheelVelocityCommand & msg)
  : msg_(msg)
  {}
  Init_WheelVelocityCommand_v_rf v_lb(::custom_interfaces::msg::WheelVelocityCommand::_v_lb_type arg)
  {
    msg_.v_lb = std::move(arg);
    return Init_WheelVelocityCommand_v_rf(msg_);
  }

private:
  ::custom_interfaces::msg::WheelVelocityCommand msg_;
};

class Init_WheelVelocityCommand_v_lf
{
public:
  Init_WheelVelocityCommand_v_lf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelVelocityCommand_v_lb v_lf(::custom_interfaces::msg::WheelVelocityCommand::_v_lf_type arg)
  {
    msg_.v_lf = std::move(arg);
    return Init_WheelVelocityCommand_v_lb(msg_);
  }

private:
  ::custom_interfaces::msg::WheelVelocityCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::WheelVelocityCommand>()
{
  return custom_interfaces::msg::builder::Init_WheelVelocityCommand_v_lf();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__BUILDER_HPP_
