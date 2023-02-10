// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robocup_ssl_msgs:msg/KickedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__FUNCTIONS_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robocup_ssl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robocup_ssl_msgs/msg/detail/kicked_ball__struct.h"

/// Initialize msg/KickedBall message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocup_ssl_msgs__msg__KickedBall
 * )) before or use
 * robocup_ssl_msgs__msg__KickedBall__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__KickedBall__init(robocup_ssl_msgs__msg__KickedBall * msg);

/// Finalize msg/KickedBall message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__KickedBall__fini(robocup_ssl_msgs__msg__KickedBall * msg);

/// Create msg/KickedBall message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocup_ssl_msgs__msg__KickedBall__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
robocup_ssl_msgs__msg__KickedBall *
robocup_ssl_msgs__msg__KickedBall__create();

/// Destroy msg/KickedBall message.
/**
 * It calls
 * robocup_ssl_msgs__msg__KickedBall__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__KickedBall__destroy(robocup_ssl_msgs__msg__KickedBall * msg);

/// Check for msg/KickedBall message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__KickedBall__are_equal(const robocup_ssl_msgs__msg__KickedBall * lhs, const robocup_ssl_msgs__msg__KickedBall * rhs);

/// Copy a msg/KickedBall message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__KickedBall__copy(
  const robocup_ssl_msgs__msg__KickedBall * input,
  robocup_ssl_msgs__msg__KickedBall * output);

/// Initialize array of msg/KickedBall messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocup_ssl_msgs__msg__KickedBall__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__KickedBall__Sequence__init(robocup_ssl_msgs__msg__KickedBall__Sequence * array, size_t size);

/// Finalize array of msg/KickedBall messages.
/**
 * It calls
 * robocup_ssl_msgs__msg__KickedBall__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__KickedBall__Sequence__fini(robocup_ssl_msgs__msg__KickedBall__Sequence * array);

/// Create array of msg/KickedBall messages.
/**
 * It allocates the memory for the array and calls
 * robocup_ssl_msgs__msg__KickedBall__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
robocup_ssl_msgs__msg__KickedBall__Sequence *
robocup_ssl_msgs__msg__KickedBall__Sequence__create(size_t size);

/// Destroy array of msg/KickedBall messages.
/**
 * It calls
 * robocup_ssl_msgs__msg__KickedBall__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__KickedBall__Sequence__destroy(robocup_ssl_msgs__msg__KickedBall__Sequence * array);

/// Check for msg/KickedBall message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__KickedBall__Sequence__are_equal(const robocup_ssl_msgs__msg__KickedBall__Sequence * lhs, const robocup_ssl_msgs__msg__KickedBall__Sequence * rhs);

/// Copy an array of msg/KickedBall messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__KickedBall__Sequence__copy(
  const robocup_ssl_msgs__msg__KickedBall__Sequence * input,
  robocup_ssl_msgs__msg__KickedBall__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__FUNCTIONS_H_
