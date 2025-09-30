// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/WheelVelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/wheel_velocity_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelVelocityCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: v_lf
  {
    out << "v_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.v_lf, out);
    out << ", ";
  }

  // member: v_lb
  {
    out << "v_lb: ";
    rosidl_generator_traits::value_to_yaml(msg.v_lb, out);
    out << ", ";
  }

  // member: v_rf
  {
    out << "v_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rf, out);
    out << ", ";
  }

  // member: v_rb
  {
    out << "v_rb: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelVelocityCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: v_lf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.v_lf, out);
    out << "\n";
  }

  // member: v_lb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_lb: ";
    rosidl_generator_traits::value_to_yaml(msg.v_lb, out);
    out << "\n";
  }

  // member: v_rf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rf, out);
    out << "\n";
  }

  // member: v_rb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_rb: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelVelocityCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::WheelVelocityCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::WheelVelocityCommand & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::WheelVelocityCommand>()
{
  return "custom_interfaces::msg::WheelVelocityCommand";
}

template<>
inline const char * name<custom_interfaces::msg::WheelVelocityCommand>()
{
  return "custom_interfaces/msg/WheelVelocityCommand";
}

template<>
struct has_fixed_size<custom_interfaces::msg::WheelVelocityCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::WheelVelocityCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::WheelVelocityCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__WHEEL_VELOCITY_COMMAND__TRAITS_HPP_
