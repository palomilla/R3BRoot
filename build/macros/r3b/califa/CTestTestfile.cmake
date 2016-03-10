# CMake generated Testfile for 
# Source directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/macros/r3b/califa
# Build directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/califa
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(califasim "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/califa/r3bsim.sh")
SET_TESTS_PROPERTIES(califasim PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
ADD_TEST(califasim2 "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/califa/runsim.sh")
SET_TESTS_PROPERTIES(califasim2 PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
