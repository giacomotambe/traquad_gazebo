// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__rosidl_typesupport_introspection_c.h"
#include "pi3hat_moteus_int_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__functions.h"
#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `foot_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `force`
#include "geometry_msgs/msg/vector3.h"
// Member `position`
// Member `velocity`
// Member `force`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi3hat_moteus_int_msgs__msg__QuadFootState__init(message_memory);
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_fini_function(void * message_memory)
{
  pi3hat_moteus_int_msgs__msg__QuadFootState__fini(message_memory);
}

size_t pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__foot_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__foot_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__foot_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__foot_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__foot_id(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__foot_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__foot_id(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__foot_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__position(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__position(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__position(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__position(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__position(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__position(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__velocity(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__velocity(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__velocity(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__velocity(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__velocity(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__velocity(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__force(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__force(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__force(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__force(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__force(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__force(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__QuadFootState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__QuadFootState, foot_id),  // bytes offset in struct
    NULL,  // default value
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__foot_id,  // size() function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__foot_id,  // get_const(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__foot_id,  // get(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__foot_id,  // fetch(index, &value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__foot_id,  // assign(index, value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__foot_id  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__QuadFootState, position),  // bytes offset in struct
    NULL,  // default value
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__position,  // size() function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__position,  // get_const(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__position,  // get(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__position,  // fetch(index, &value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__position,  // assign(index, value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__QuadFootState, velocity),  // bytes offset in struct
    NULL,  // default value
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__velocity,  // size() function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__velocity,  // get_const(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__velocity,  // get(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__velocity,  // fetch(index, &value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__velocity,  // assign(index, value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__velocity  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__QuadFootState, force),  // bytes offset in struct
    NULL,  // default value
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__size_function__QuadFootState__force,  // size() function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_const_function__QuadFootState__force,  // get_const(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__get_function__QuadFootState__force,  // get(index) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__fetch_function__QuadFootState__force,  // fetch(index, &value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__assign_function__QuadFootState__force,  // assign(index, value) function pointer
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__resize_function__QuadFootState__force  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_members = {
  "pi3hat_moteus_int_msgs__msg",  // message namespace
  "QuadFootState",  // message name
  5,  // number of fields
  sizeof(pi3hat_moteus_int_msgs__msg__QuadFootState),
  pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_member_array,  // message members
  pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_init_function,  // function to initialize message memory (memory has to be allocated)
  pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_type_support_handle = {
  0,
  &pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi3hat_moteus_int_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi3hat_moteus_int_msgs, msg, QuadFootState)() {
  pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_type_support_handle.typesupport_identifier) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pi3hat_moteus_int_msgs__msg__QuadFootState__rosidl_typesupport_introspection_c__QuadFootState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
