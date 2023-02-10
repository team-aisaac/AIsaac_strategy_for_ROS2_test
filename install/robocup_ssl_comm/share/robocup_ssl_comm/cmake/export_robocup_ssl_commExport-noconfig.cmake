#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "robocup_ssl_comm::vision_component" for configuration ""
set_property(TARGET robocup_ssl_comm::vision_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(robocup_ssl_comm::vision_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libvision_component.so"
  IMPORTED_SONAME_NOCONFIG "libvision_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS robocup_ssl_comm::vision_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_robocup_ssl_comm::vision_component "${_IMPORT_PREFIX}/lib/libvision_component.so" )

# Import target "robocup_ssl_comm::game_controller_component" for configuration ""
set_property(TARGET robocup_ssl_comm::game_controller_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(robocup_ssl_comm::game_controller_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgame_controller_component.so"
  IMPORTED_SONAME_NOCONFIG "libgame_controller_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS robocup_ssl_comm::game_controller_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_robocup_ssl_comm::game_controller_component "${_IMPORT_PREFIX}/lib/libgame_controller_component.so" )

# Import target "robocup_ssl_comm::grsim_component" for configuration ""
set_property(TARGET robocup_ssl_comm::grsim_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(robocup_ssl_comm::grsim_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgrsim_component.so"
  IMPORTED_SONAME_NOCONFIG "libgrsim_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS robocup_ssl_comm::grsim_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_robocup_ssl_comm::grsim_component "${_IMPORT_PREFIX}/lib/libgrsim_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
