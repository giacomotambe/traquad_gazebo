// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interfaces:msg/WheelVelocityCommand.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/wheel_velocity_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/msg/detail/wheel_velocity_command__struct.h"
#include "custom_interfaces/msg/detail/wheel_velocity_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WheelVelocityCommand__ros_msg_type = custom_interfaces__msg__WheelVelocityCommand;

static bool _WheelVelocityCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WheelVelocityCommand__ros_msg_type * ros_message = static_cast<const _WheelVelocityCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: v_lf
  {
    cdr << ros_message->v_lf;
  }

  // Field name: v_lb
  {
    cdr << ros_message->v_lb;
  }

  // Field name: v_rf
  {
    cdr << ros_message->v_rf;
  }

  // Field name: v_rb
  {
    cdr << ros_message->v_rb;
  }

  return true;
}

static bool _WheelVelocityCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WheelVelocityCommand__ros_msg_type * ros_message = static_cast<_WheelVelocityCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: v_lf
  {
    cdr >> ros_message->v_lf;
  }

  // Field name: v_lb
  {
    cdr >> ros_message->v_lb;
  }

  // Field name: v_rf
  {
    cdr >> ros_message->v_rf;
  }

  // Field name: v_rb
  {
    cdr >> ros_message->v_rb;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__msg__WheelVelocityCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelVelocityCommand__ros_msg_type * ros_message = static_cast<const _WheelVelocityCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name v_lf
  {
    size_t item_size = sizeof(ros_message->v_lf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_lb
  {
    size_t item_size = sizeof(ros_message->v_lb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_rf
  {
    size_t item_size = sizeof(ros_message->v_rf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_rb
  {
    size_t item_size = sizeof(ros_message->v_rb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WheelVelocityCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__msg__WheelVelocityCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__msg__WheelVelocityCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: v_lf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v_lb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v_rf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v_rb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_interfaces__msg__WheelVelocityCommand;
    is_plain =
      (
      offsetof(DataType, v_rb) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WheelVelocityCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_interfaces__msg__WheelVelocityCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WheelVelocityCommand = {
  "custom_interfaces::msg",
  "WheelVelocityCommand",
  _WheelVelocityCommand__cdr_serialize,
  _WheelVelocityCommand__cdr_deserialize,
  _WheelVelocityCommand__get_serialized_size,
  _WheelVelocityCommand__max_serialized_size
};

static rosidl_message_type_support_t _WheelVelocityCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WheelVelocityCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, msg, WheelVelocityCommand)() {
  return &_WheelVelocityCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
