# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mulinex_ignition_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mulinex_ignition_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mulinex_ignition_FOUND FALSE)
  elseif(NOT mulinex_ignition_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mulinex_ignition_FOUND FALSE)
  endif()
  return()
endif()
set(_mulinex_ignition_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mulinex_ignition_FIND_QUIETLY)
  message(STATUS "Found mulinex_ignition: 0.0.0 (${mulinex_ignition_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mulinex_ignition' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mulinex_ignition_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mulinex_ignition_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mulinex_ignition_DIR}/${_extra}")
endforeach()
