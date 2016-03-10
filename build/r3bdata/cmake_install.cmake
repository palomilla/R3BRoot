# Install script for directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata

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
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/R3BMCStack.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/R3BMCTrack.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/xballData/R3BXBallPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/xballData/R3BXBallCrystalHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/xballData/R3BXBallCrystalHitSim.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData/R3BCaloCrystalHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData/R3BCaloCrystalHitSim.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData/R3BCaloRawHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData/R3BCaloHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData/R3BCaloHitSim.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData/R3BCaloPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData/R3BCaloRawHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData/R3BDchPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData/R3BDchFullPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData/R3BGfiPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData/R3BmTofPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dtofData/R3BdTofPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData/R3BTofPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/vetoData/R3BVetoPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/lumonData/ELILuMonPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTraPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTraHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BSitrackerHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTrackerHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/startrackerData/R3BSTaRTraPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/startrackerData/R3BSTaRTraHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/startrackerData/R3BSTaRTrackerHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/startrackerData/R3BSTaRTrackerDigitHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData/R3BLandPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData/R3BLandDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData/R3BLandFirstHits.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData/R3BLandHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData/R3BPaddleCrystalHit.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData/R3BNeutronTrack.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData/R3BDchDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData/R3BDch2pDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData/R3BTofDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData/R3BTof2pDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData/R3BmTofDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData/R3BGfiDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTraDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTra2pDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTraFraDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTargetDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData/R3BTarget2pDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mfiData/R3BMfiPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mfiData/R3BMfiDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/pspData/R3BPspPoint.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/pspData/R3BPspDigi.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/neulandData/R3BNeulandRawItem.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/neulandData/R3BNeulandMappedItem.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/pspData/R3BPspxMappedItem.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/pspData/R3BPspxCalItem.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/losData/R3BLosMappedItem.h"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/R3BDetectorList.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/G__R3BDataDict_rdict.pcm"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BData.rootmap"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BData.so.SOVERSION"
    "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BData.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so"
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

