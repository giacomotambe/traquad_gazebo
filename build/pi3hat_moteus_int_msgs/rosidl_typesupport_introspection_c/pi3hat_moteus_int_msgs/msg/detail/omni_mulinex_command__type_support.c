// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pi3hat_moteus_int_msgs:msg/OmniMulinexCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pi3hat_moteus_int_msgs/msg/detail/omni_mulinex_command__rosidl_typesupport_introspection_c.h"
#include "pi3hat_moteus_int_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pi3hat_moteus_int_msgs/msg/detail/omni_mulinex_command__functions.h"
#include "pi3hat_moteus_int_msgs/msg/detail/omni_mulinex_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__init(message_memory);
}

void pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_fini_function(void * message_memory)
{
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand, v_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand, v_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "omega",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand, omega),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand, height_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_members = {
  "pi3hat_moteus_int_msgs__msg",  // message namespace
  "OmniMulinexCommand",  // message name
  5,  // number of fields
  sizeof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand),
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_member_array,  // message members
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_type_support_handle = {
  0,
  &pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi3hat_moteus_int_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi3hat_moteus_int_msgs, msg, OmniMulinexCommand)() {
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_type_support_handle.typesupport_identifier) {
    pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__rosidl_typesupport_introspection_c__OmniMulinexCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
