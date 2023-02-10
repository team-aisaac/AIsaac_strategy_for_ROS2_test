#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "robot_controller::controller_component" for configuration ""
set_property(TARGET robot_controller::controller_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(robot_controller::controller_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcontroller_component.so"
  IMPORTED_SONAME_NOCONFIG "libcontroller_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS robot_controller::controller_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_robot_controller::controller_component "${_IMPORT_PREFIX}/lib/libcontroller_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
