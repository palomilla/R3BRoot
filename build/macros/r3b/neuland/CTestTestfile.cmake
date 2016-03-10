# CMake generated Testfile for 
# Source directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/macros/r3b/neuland
# Build directory: /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/neuland
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(NeulandSimulation "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/neuland/test/testNeulandSimulation.sh")
SET_TESTS_PROPERTIES(NeulandSimulation PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished succesfully." TIMEOUT "2000")
ADD_TEST(NeulandDigitizer "/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/macros/r3b/neuland/test/testNeulandDigitizer.sh")
SET_TESTS_PROPERTIES(NeulandDigitizer PROPERTIES  DEPENDS "NeulandSimulation" PASS_REGULAR_EXPRESSION "Macro finished succesfully." TIMEOUT "1000")
