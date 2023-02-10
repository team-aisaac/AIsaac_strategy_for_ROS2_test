// Copyright 2021 Roots
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROBOT_CONTROLLER__VISIBILITY_CONTROL_H_
#define ROBOT_CONTROLLER__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROBOT_CONTROLLER_EXPORT __attribute__ ((dllexport))
    #define ROBOT_CONTROLLER_IMPORT __attribute__ ((dllimport))
  #else
    #define ROBOT_CONTROLLER_EXPORT __declspec(dllexport)
    #define ROBOT_CONTROLLER_IMPORT __declspec(dllimport)
  #endif
  #ifdef ROBOT_CONTROLLER_BUILDING_DLL
    #define ROBOT_CONTROLLER_PUBLIC CONSAI_VISION_TRACKER_EXPORT
  #else
    #define ROBOT_CONTROLLER_PUBLIC CONSAI_VISION_TRACKER_IMPORT
  #endif
  #define ROBOT_CONTROLLER_PUBLIC_TYPE CONSAI_VISION_TRACKER_PUBLIC
  #define ROBOT_CONTROLLER_LOCAL
#else
  #define ROBOT_CONTROLLER_EXPORT __attribute__ ((visibility("default")))
  #define ROBOT_CONTROLLER_IMPORT
  #if __GNUC__ >= 4
    #define ROBOT_CONTROLLER_PUBLIC __attribute__ ((visibility("default")))
    #define ROBOT_CONTROLLER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define ROBOT_CONTROLLER_PUBLIC
    #define ROBOT_CONTROLLER_LOCAL
  #endif
  #define ROBOT_CONTROLLER_PUBLIC_TYPE
#endif

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_CONTROLLER__VISIBILITY_CONTROL_H_
