// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pi3hat_moteus_int_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void QuadFootState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pi3hat_moteus_int_msgs::msg::QuadFootState(_init);
}

void QuadFootState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pi3hat_moteus_int_msgs::msg::QuadFootState *>(message_memory);
  typed_message->~QuadFootState();
}

size_t size_function__QuadFootState__foot_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuadFootState__foot_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadFootState__foot_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadFootState__foot_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__QuadFootState__foot_id(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__QuadFootState__foot_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__QuadFootState__foot_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__QuadFootState__foot_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QuadFootState__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuadFootState__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadFootState__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadFootState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__QuadFootState__position(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__QuadFootState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__QuadFootState__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__QuadFootState__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QuadFootState__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuadFootState__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadFootState__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadFootState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__QuadFootState__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__QuadFootState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__QuadFootState__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__QuadFootState__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QuadFootState__force(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuadFootState__force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadFootState__force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadFootState__force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__QuadFootState__force(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__QuadFootState__force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__QuadFootState__force(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__QuadFootState__force(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QuadFootState_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs::msg::QuadFootState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs::msg::QuadFootState, foot_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadFootState__foot_id,  // size() function pointer
    get_const_function__QuadFootState__foot_id,  // get_const(index) function pointer
    get_function__QuadFootState__foot_id,  // get(index) function pointer
    fetch_function__QuadFootState__foot_id,  // fetch(index, &value) function pointer
    assign_function__QuadFootState__foot_id,  // assign(index, value) function pointer
    resize_function__QuadFootState__foot_id  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs::msg::QuadFootState, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadFootState__position,  // size() function pointer
    get_const_function__QuadFootState__position,  // get_const(index) function pointer
    get_function__QuadFootState__position,  // get(index) function pointer
    fetch_function__QuadFootState__position,  // fetch(index, &value) function pointer
    assign_function__QuadFootState__position,  // assign(index, value) function pointer
    resize_function__QuadFootState__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs::msg::QuadFootState, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadFootState__velocity,  // size() function pointer
    get_const_function__QuadFootState__velocity,  // get_const(index) function pointer
    get_function__QuadFootState__velocity,  // get(index) function pointer
    fetch_function__QuadFootState__velocity,  // fetch(index, &value) function pointer
    assign_function__QuadFootState__velocity,  // assign(index, value) function pointer
    resize_function__QuadFootState__velocity  // resize(index) function pointer
  },
  {
    "force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi3hat_moteus_int_msgs::msg::QuadFootState, force),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadFootState__force,  // size() function pointer
    get_const_function__QuadFootState__force,  // get_const(index) function pointer
    get_function__QuadFootState__force,  // get(index) function pointer
    fetch_function__QuadFootState__force,  // fetch(index, &value) function pointer
    assign_function__QuadFootState__force,  // assign(index, value) function pointer
    resize_function__QuadFootState__force  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QuadFootState_message_members = {
  "pi3hat_moteus_int_msgs::msg",  // message namespace
  "QuadFootState",  // message name
  5,  // number of fields
  sizeof(pi3hat_moteus_int_msgs::msg::QuadFootState),
  QuadFootState_message_member_array,  // message members
  QuadFootState_init_function,  // function to initialize message memory (memory has to be allocated)
  QuadFootState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QuadFootState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QuadFootState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pi3hat_moteus_int_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi3hat_moteus_int_msgs::msg::QuadFootState>()
{
  return &::pi3hat_moteus_int_msgs::msg::rosidl_typesupport_introspection_cpp::QuadFootState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi3hat_moteus_int_msgs, msg, QuadFootState)() {
  return &::pi3hat_moteus_int_msgs::msg::rosidl_typesupport_introspection_cpp::QuadFootState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
