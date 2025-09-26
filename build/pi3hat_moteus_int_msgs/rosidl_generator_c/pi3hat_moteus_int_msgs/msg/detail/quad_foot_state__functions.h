// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice

#ifndef PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__FUNCTIONS_H_
#define PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pi3hat_moteus_int_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__struct.h"

/// Initialize msg/QuadFootState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pi3hat_moteus_int_msgs__msg__QuadFootState
 * )) before or use
 * pi3hat_moteus_int_msgs__msg__QuadFootState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
bool
pi3hat_moteus_int_msgs__msg__QuadFootState__init(pi3hat_moteus_int_msgs__msg__QuadFootState * msg);

/// Finalize msg/QuadFootState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
void
pi3hat_moteus_int_msgs__msg__QuadFootState__fini(pi3hat_moteus_int_msgs__msg__QuadFootState * msg);

/// Create msg/QuadFootState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pi3hat_moteus_int_msgs__msg__QuadFootState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
pi3hat_moteus_int_msgs__msg__QuadFootState *
pi3hat_moteus_int_msgs__msg__QuadFootState__create();

/// Destroy msg/QuadFootState message.
/**
 * It calls
 * pi3hat_moteus_int_msgs__msg__QuadFootState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
void
pi3hat_moteus_int_msgs__msg__QuadFootState__destroy(pi3hat_moteus_int_msgs__msg__QuadFootState * msg);

/// Check for msg/QuadFootState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
bool
pi3hat_moteus_int_msgs__msg__QuadFootState__are_equal(const pi3hat_moteus_int_msgs__msg__QuadFootState * lhs, const pi3hat_moteus_int_msgs__msg__QuadFootState * rhs);

/// Copy a msg/QuadFootState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
bool
pi3hat_moteus_int_msgs__msg__QuadFootState__copy(
  const pi3hat_moteus_int_msgs__msg__QuadFootState * input,
  pi3hat_moteus_int_msgs__msg__QuadFootState * output);

/// Initialize array of msg/QuadFootState messages.
/**
 * It allocates the memory for the number of elements and calls
 * pi3hat_moteus_int_msgs__msg__QuadFootState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
bool
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__init(pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * array, size_t size);

/// Finalize array of msg/QuadFootState messages.
/**
 * It calls
 * pi3hat_moteus_int_msgs__msg__QuadFootState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
void
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__fini(pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * array);

/// Create array of msg/QuadFootState messages.
/**
 * It allocates the memory for the array and calls
 * pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence *
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__create(size_t size);

/// Destroy array of msg/QuadFootState messages.
/**
 * It calls
 * pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
void
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__destroy(pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * array);

/// Check for msg/QuadFootState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
bool
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__are_equal(const pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * lhs, const pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * rhs);

/// Copy an array of msg/QuadFootState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pi3hat_moteus_int_msgs
bool
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__copy(
  const pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * input,
  pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PI3HAT_MOTEUS_INT_MSGS__MSG__DETAIL__QUAD_FOOT_STATE__FUNCTIONS_H_
