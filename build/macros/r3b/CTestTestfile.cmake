# CMake generated Testfile for 
# Source directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/macros/r3b
# Build directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(r3bsim "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/r3bsim.sh")
SET_TESTS_PROPERTIES(r3bsim PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
ADD_TEST(r3bsim_g4 "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/r3bsim_g4.sh")
SET_TESTS_PROPERTIES(r3bsim_g4 PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
ADD_TEST(r3bsim_new "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/r3bsim_new.sh")
SET_TESTS_PROPERTIES(r3bsim_new PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
SUBDIRS(califa)
SUBDIRS(land)
SUBDIRS(unpack)
SUBDIRS(neuland)
