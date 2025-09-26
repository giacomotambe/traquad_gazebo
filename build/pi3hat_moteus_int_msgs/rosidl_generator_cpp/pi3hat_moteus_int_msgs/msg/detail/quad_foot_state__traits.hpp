// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__TRAITS_HPP_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
// Member 'velocity'
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace pi3hat_moteus_int_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadFootState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: foot_id
  {
    if (msg.foot_id.size() == 0) {
      out << "foot_id: []";
    } else {
      out << "foot_id: [";
      size_t pending_items = msg.foot_id.size();
      for (auto item : msg.foot_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: force
  {
    if (msg.force.size() == 0) {
      out << "force: []";
    } else {
      out << "force: [";
      size_t pending_items = msg.force.size();
      for (auto item : msg.force) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadFootState & msg,
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

  // member: foot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_id.size() == 0) {
      out << "foot_id: []\n";
    } else {
      out << "foot_id:\n";
      for (auto item : msg.foot_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force.size() == 0) {
      out << "force: []\n";
    } else {
      out << "force:\n";
      for (auto item : msg.force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadFootState & msg, bool use_flow_style = false)
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
  const pi3hat_moteus_int_msgs::msg::QuadFootState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi3hat_moteus_int_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi3hat_moteus_int_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pi3hat_moteus_int_msgs::msg::QuadFootState & msg)
{
  return pi3hat_moteus_int_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pi3hat_moteus_int_msgs::msg::QuadFootState>()
{
  return "pi3hat_moteus_int_msgs::msg::QuadFootState";
}

template<>
inline const char * name<pi3hat_moteus_int_msgs::msg::QuadFootState>()
{
  return "pi3hat_moteus_int_msgs/msg/QuadFootState";
}

template<>
struct has_fixed_size<pi3hat_moteus_int_msgs::msg::QuadFootState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pi3hat_moteus_int_msgs::msg::QuadFootState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pi3hat_moteus_int_msgs::msg::QuadFootState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__TRAITS_HPP_
