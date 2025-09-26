// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__STRUCT_H_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__STRUCT_H_

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
// Member 'foot_id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/QuadFootState in the package pi3hat_moteus_int_msgs.
typedef struct pi3hat_moteus_int_msgs__msg__QuadFootState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence foot_id;
  geometry_msgs__msg__Vector3__Sequence position;
  geometry_msgs__msg__Vector3__Sequence velocity;
  geometry_msgs__msg__Vector3__Sequence force;
} pi3hat_moteus_int_msgs__msg__QuadFootState;

// Struct for a sequence of pi3hat_moteus_int_msgs__msg__QuadFootState.
typedef struct pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence
{
  pi3hat_moteus_int_msgs__msg__QuadFootState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__STRUCT_H_
