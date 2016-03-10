# CMake generated Testfile for 
# Source directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/macros/r3b/land
# Build directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/land
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(landreco "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/land/run_test.sh")
SET_TESTS_PROPERTIES(landreco PROPERTIES  PASS_REGULAR_EXPRESSION "Reconstruction successful" TIMEOUT "300")
