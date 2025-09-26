// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pi3hat_moteus_int_msgs:msg/OmniMulinexCommand.idl
// generated code does not contain a copyright notice
#include "pi3hat_moteus_int_msgs/msg/detail/omni_mulinex_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__init(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__fini(msg);
    return false;
  }
  // v_x
  // v_y
  // omega
  // height_rate
  return true;
}

void
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__fini(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // v_x
  // v_y
  // omega
  // height_rate
}

bool
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__are_equal(const pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * lhs, const pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * rhs)
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
  // v_x
  if (lhs->v_x != rhs->v_x) {
    return false;
  }
  // v_y
  if (lhs->v_y != rhs->v_y) {
    return false;
  }
  // omega
  if (lhs->omega != rhs->omega) {
    return false;
  }
  // height_rate
  if (lhs->height_rate != rhs->height_rate) {
    return false;
  }
  return true;
}

bool
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__copy(
  const pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * input,
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * output)
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
  // v_x
  output->v_x = input->v_x;
  // v_y
  output->v_y = input->v_y;
  // omega
  output->omega = input->omega;
  // height_rate
  output->height_rate = input->height_rate;
  return true;
}

pi3hat_moteus_int_msgs__msg__OmniMulinexCommand *
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * msg = (pi3hat_moteus_int_msgs__msg__OmniMulinexCommand *)allocator.allocate(sizeof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand));
  bool success = pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__destroy(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__init(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * data = NULL;

  if (size) {
    data = (pi3hat_moteus_int_msgs__msg__OmniMulinexCommand *)allocator.zero_allocate(size, sizeof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__fini(&data[i - 1]);
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
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__fini(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * array)
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
      pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__fini(&array->data[i]);
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

pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence *
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * array = (pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence *)allocator.allocate(sizeof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__destroy(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__are_equal(const pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * lhs, const pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence__copy(
  const pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * input,
  pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi3hat_moteus_int_msgs__msg__OmniMulinexCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi3hat_moteus_int_msgs__msg__OmniMulinexCommand * data =
      (pi3hat_moteus_int_msgs__msg__OmniMulinexCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi3hat_moteus_int_msgs__msg__OmniMulinexCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
