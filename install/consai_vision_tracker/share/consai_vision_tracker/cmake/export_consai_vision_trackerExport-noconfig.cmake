#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "consai_vision_tracker::tracker_component" for configuration ""
set_property(TARGET consai_vision_tracker::tracker_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(consai_vision_tracker::tracker_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtracker_component.so"
  IMPORTED_SONAME_NOCONFIG "libtracker_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS consai_vision_tracker::tracker_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_consai_vision_tracker::tracker_component "${_IMPORT_PREFIX}/lib/libtracker_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
