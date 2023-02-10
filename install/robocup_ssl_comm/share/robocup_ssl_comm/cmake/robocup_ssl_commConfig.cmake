# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_robocup_ssl_comm_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED robocup_ssl_comm_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(robocup_ssl_comm_FOUND FALSE)
  elseif(NOT robocup_ssl_comm_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(robocup_ssl_comm_FOUND FALSE)
  endif()
  return()
endif()
set(_robocup_ssl_comm_CONFIG_INCLUDED TRUE)

# output package information
if(NOT robocup_ssl_comm_FIND_QUIETLY)
  message(STATUS "Found robocup_ssl_comm: 0.1.0 (${robocup_ssl_comm_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'robocup_ssl_comm' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${robocup_ssl_comm_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(robocup_ssl_comm_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${robocup_ssl_comm_DIR}/${_extra}")
endforeach()
