# Install script for directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land

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
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BLand.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BGeoLand.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BGeoLandPar.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BLandContFact.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BLandDigitizer.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BLandDigitizerQA.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BNeutronTracker.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BLandDigiPar.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BNeuLandCluster.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BNeuLandClusterFinder.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BNeutronCalibr2D.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BPrimPart.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BNeutronTracker2D.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/R3BNeutHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandRawAna.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandRawAnaS438b.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandMapping.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandUnpack.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTcalFill.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandParamRead.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandPmt.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTcal.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTdiffFill.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandAna.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTcalTest.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTSync.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandCosmic1.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandCosmic1LSQR.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandCosmic1Util.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTSyncContFact.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTSyncPar.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack/R3BLandTSyncModulePar.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/G__R3BLandDict_rdict.pcm"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BLand.rootmap"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BLand.so.SOVERSION"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BLand.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BLand.so.SOVERSION"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BLand.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BLand.so.SOVERSION"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BLand.so"
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

