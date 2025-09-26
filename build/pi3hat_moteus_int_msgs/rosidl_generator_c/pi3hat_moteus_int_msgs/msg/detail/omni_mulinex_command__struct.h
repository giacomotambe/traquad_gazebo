// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pi3hat_moteus_int_msgs:msg/OmniMulinexCommand.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__STRUCT_H_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/OmniMulinexCommand in the package pi3hat_moteus_int_msgs.
typedef struct pi3hat_moteus_int_msgs__msg__OmniMulinexCommand
{
  std_msgs__msg__Header header;
  /// velocity components in base frame
  double v_x;
  double v_y;
  double omega;
  double height_rate;
} pi3hat_moteus_int_msgs__msg__OmniMulinexCommand;

// Struct for a sequence of pi3hat_moteus_int_msgs__msg__OmniMulinexCommand.
typedef struct pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence
{
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__OMNI_MULINEX_COMMAND__STRUCT_H_
