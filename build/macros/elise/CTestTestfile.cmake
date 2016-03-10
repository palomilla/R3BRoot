# CMake generated Testfile for 
# Source directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/macros/elise
# Build directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/elise
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(elsim "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/elise/elsim.sh")
SET_TESTS_PROPERTIES(elsim PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
