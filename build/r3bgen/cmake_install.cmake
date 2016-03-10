# Install script for directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BPrimaryGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BSpecificGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BReadKinematics.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BCDGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BBeamInfo.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BBackTracking.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BBackTrackingStorageState.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BAsciiGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BCosmicGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3Bp2pGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BLandGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BCALIFATestGenerator.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BAsciiIQMDGen.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BAsciiUrQMDGen.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen/R3BIonGenerator.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/G__R3BGenDict_rdict.pcm"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BGen.rootmap"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BGen.so.SOVERSION"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BGen.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BGen.so.SOVERSION"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BGen.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BGen.so.SOVERSION"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BGen.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_REMOVE
           FILE "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

