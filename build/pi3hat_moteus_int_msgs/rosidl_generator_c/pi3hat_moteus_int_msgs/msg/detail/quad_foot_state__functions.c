// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pi3hat_moteus_int_msgs:msg/QuadFootState.idl
// generated code does not contain a copyright notice
#include "pi3hat_moteus_int_msgs/msg/detail/quad_foot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `foot_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
pi3hat_moteus_int_msgs__msg__QuadFootState__init(pi3hat_moteus_int_msgs__msg__QuadFootState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__fini(msg);
    return false;
  }
  // foot_id
  if (!rosidl_runtime_c__String__Sequence__init(&msg->foot_id, 0)) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->position, 0)) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->velocity, 0)) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__fini(msg);
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->force, 0)) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__fini(msg);
    return false;
  }
  return true;
}

void
pi3hat_moteus_int_msgs__msg__QuadFootState__fini(pi3hat_moteus_int_msgs__msg__QuadFootState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // foot_id
  rosidl_runtime_c__String__Sequence__fini(&msg->foot_id);
  // position
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->velocity);
  // force
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->force);
}

bool
pi3hat_moteus_int_msgs__msg__QuadFootState__are_equal(const pi3hat_moteus_int_msgs__msg__QuadFootState * lhs, const pi3hat_moteus_int_msgs__msg__QuadFootState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // foot_id
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->foot_id), &(rhs->foot_id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->force), &(rhs->force)))
  {
    return false;
  }
  return true;
}

bool
pi3hat_moteus_int_msgs__msg__QuadFootState__copy(
  const pi3hat_moteus_int_msgs__msg__QuadFootState * input,
  pi3hat_moteus_int_msgs__msg__QuadFootState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // foot_id
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->foot_id), &(output->foot_id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->force), &(output->force)))
  {
    return false;
  }
  return true;
}

pi3hat_moteus_int_msgs__msg__QuadFootState *
pi3hat_moteus_int_msgs__msg__QuadFootState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi3hat_moteus_int_msgs__msg__QuadFootState * msg = (pi3hat_moteus_int_msgs__msg__QuadFootState *)allocator.allocate(sizeof(pi3hat_moteus_int_msgs__msg__QuadFootState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi3hat_moteus_int_msgs__msg__QuadFootState));
  bool success = pi3hat_moteus_int_msgs__msg__QuadFootState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi3hat_moteus_int_msgs__msg__QuadFootState__destroy(pi3hat_moteus_int_msgs__msg__QuadFootState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__init(pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi3hat_moteus_int_msgs__msg__QuadFootState * data = NULL;

  if (size) {
    data = (pi3hat_moteus_int_msgs__msg__QuadFootState *)allocator.zero_allocate(size, sizeof(pi3hat_moteus_int_msgs__msg__QuadFootState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi3hat_moteus_int_msgs__msg__QuadFootState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi3hat_moteus_int_msgs__msg__QuadFootState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__fini(pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi3hat_moteus_int_msgs__msg__QuadFootState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence *
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * array = (pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence *)allocator.allocate(sizeof(pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__destroy(pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__are_equal(const pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * lhs, const pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi3hat_moteus_int_msgs__msg__QuadFootState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence__copy(
  const pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * input,
  pi3hat_moteus_int_msgs__msg__QuadFootState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi3hat_moteus_int_msgs__msg__QuadFootState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi3hat_moteus_int_msgs__msg__QuadFootState * data =
      (pi3hat_moteus_int_msgs__msg__QuadFootState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi3hat_moteus_int_msgs__msg__QuadFootState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi3hat_moteus_int_msgs__msg__QuadFootState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi3hat_moteus_int_msgs__msg__QuadFootState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
