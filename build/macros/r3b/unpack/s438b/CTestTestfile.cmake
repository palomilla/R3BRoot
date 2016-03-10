# CMake generated Testfile for 
# Source directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/macros/r3b/unpack/s438b
# Build directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/unpack/s438b
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(landunpack "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/unpack/s438b/run_sample_data.sh")
SET_TESTS_PROPERTIES(landunpack PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
