// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pi3hat_moteus_int_msgs:msg/OmniMulinexCommand.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__TRAITS_HPP_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pi3hat_moteus_int_msgs/msg/detail/omni_mulinex_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pi3hat_moteus_int_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OmniMulinexCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: v_x
  {
    out << "v_x: ";
    rosidl_generator_traits::value_to_yaml(msg.v_x, out);
    out << ", ";
  }

  // member: v_y
  {
    out << "v_y: ";
    rosidl_generator_traits::value_to_yaml(msg.v_y, out);
    out << ", ";
  }

  // member: omega
  {
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << ", ";
  }

  // member: height_rate
  {
    out << "height_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OmniMulinexCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: v_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_x: ";
    rosidl_generator_traits::value_to_yaml(msg.v_x, out);
    out << "\n";
  }

  // member: v_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_y: ";
    rosidl_generator_traits::value_to_yaml(msg.v_y, out);
    out << "\n";
  }

  // member: omega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << "\n";
  }

  // member: height_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OmniMulinexCommand & msg, bool use_flow_style = false)
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

}  // namespace pi3hat_moteus_int_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pi3hat_moteus_int_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi3hat_moteus_int_msgs::msg::OmniMulinexCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi3hat_moteus_int_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi3hat_moteus_int_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pi3hat_moteus_int_msgs::msg::OmniMulinexCommand & msg)
{
  return pi3hat_moteus_int_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand>()
{
  return "pi3hat_moteus_int_msgs::msg::OmniMulinexCommand";
}

template<>
inline const char * name<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand>()
{
  return "pi3hat_moteus_int_msgs/msg/OmniMulinexCommand";
}

template<>
struct has_fixed_size<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pi3hat_moteus_int_msgs::msg::OmniMulinexCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__TRAITS_HPP_
