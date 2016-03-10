# Install script for directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/r3bbase/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/passive/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/cal/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/xball/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dch/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/gfi/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/land/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/neuland/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/los/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/mtof/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/tof/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/tracker/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/startracker/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/r3bdata/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/r3bdb/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/field/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/r3bgen/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/plists/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lumon/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/evtvis/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/mfi/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/psp/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/timestitcher/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/compilehelper/cmake_install.cmake")
  INCLUDE("/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/tcal/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
