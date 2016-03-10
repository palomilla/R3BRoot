#!/bin/bash

# This macro is needed to start the Root macros used for automatic testing
# from inside CMake using the add_test functionality. Since the tests 
# starts with a fresh environment on has to set first the correct environment
# needed to run FairRoot.
# Also parameters defined in add_test will be converted in the correct format
# to be passed to root.

# Setup the needed environment
export LD_LIBRARY_PATH=/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/lib:/cvmfs/it.gsi.de/compiler/gcc/4.8.4/lib64:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib/root:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib
export DYLD_LIBRARY_PATH=/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/lib:/cvmfs/it.gsi.de/compiler/gcc/4.8.4/lib64:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib/root:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib:/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib
export PATH=/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/bin:$PATH:
export ROOTSYS=/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6
export ROOTEXE=/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/bin/root.exe
export ROOT_INCLUDE_PATH=/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include
export VMCWORKDIR=/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot
export GEANT4VMC_MACRO_DIR=/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/geant4_vmc/macro
export USE_VGM=1
export BOOST=1
export G4LEDATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/G4EMLOW"
export G4LEVELGAMMADATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/PhotonEvaporation"
export G4NeutronHPCrossSections="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/G4NDL"
export G4NEUTRONHPDATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/G4NDL"
export G4NEUTRONXSDATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/G4NEUTRONXS"
export G4PIIDATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/G4PII"
export G4RADIOACTIVEDATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/RadioactiveDecay"
export G4REALSURFACEDATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/RealSurface"
export G4SAIDXSDATA="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/Geant4/data/G4SAIDDATA"
export G3SYS="/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/share/geant3"
export PYTHIA8DATA=""
if [ -e /env.sh ]; then
  . /env.sh
fi

# Concatenate all parameters given on the command line to one 
# comma separated string 
parameters=""
for i in $*; do 
  if [ -z $parameters ]; then
    parameters=$i
  else
    parameters=$(echo "$parameters,$i")
  fi 
done

cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/neuland/test

# execute root with the defined macro and the command line parameters
$ROOTEXE -q -b /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/macros/r3b/neuland/test/testNeulandSimulation.C\($parameters\)
