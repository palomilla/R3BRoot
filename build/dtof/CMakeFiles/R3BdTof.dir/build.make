# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build

# Include any dependencies generated for this target.
include dtof/CMakeFiles/R3BdTof.dir/depend.make

# Include the progress variables for this target.
include dtof/CMakeFiles/R3BdTof.dir/progress.make

# Include the compile flags for this target's objects.
include dtof/CMakeFiles/R3BdTof.dir/flags.make

dtof/G__R3BdTofDict.cxx: ../dtof/R3BdTof.h
dtof/G__R3BdTofDict.cxx: ../dtof/R3BGeodTof.h
dtof/G__R3BdTofDict.cxx: ../dtof/R3BGeodTofPar.h
dtof/G__R3BdTofDict.cxx: ../dtof/R3BdTofContFact.h
dtof/G__R3BdTofDict.cxx: ../dtof/R3BdTofDigiPar.h
dtof/G__R3BdTofDict.cxx: ../dtof/dTofLinkDef.h
	$(CMAKE_COMMAND) -E cmake_progress_report /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating G__R3BdTofDict.cxx, G__R3BdTofDict_rdict.pcm, ../lib/libR3BdTof.rootmap"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && LD_LIBRARY_PATH=/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/lib/root::/cvmfs/it.gsi.de/compiler/gcc/4.8.4/lib64 ROOTSYS=/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6 /cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/bin/rootcint -f /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/G__R3BdTofDict.cxx -inlineInputHeader -rmf /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/libR3BdTof.rootmap -rml R3BdTof.so -c -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dtofData -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData -I/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData -I/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root -I/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include -I/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include R3BdTof.h R3BGeodTof.h R3BGeodTofPar.h R3BdTofContFact.h R3BdTofDigiPar.h dTofLinkDef.h
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /usr/bin/cmake -E copy_if_different /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/G__R3BdTofDict_rdict.pcm /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lib/G__R3BdTofDict_rdict.pcm

dtof/G__R3BdTofDict_rdict.pcm: dtof/G__R3BdTofDict.cxx

lib/libR3BdTof.rootmap: dtof/G__R3BdTofDict.cxx

dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o: dtof/CMakeFiles/R3BdTof.dir/flags.make
dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o: ../dtof/R3BdTof.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o -c /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTof.cxx

dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BdTof.dir/R3BdTof.cxx.i"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTof.cxx > CMakeFiles/R3BdTof.dir/R3BdTof.cxx.i

dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BdTof.dir/R3BdTof.cxx.s"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTof.cxx -o CMakeFiles/R3BdTof.dir/R3BdTof.cxx.s

dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.requires:
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.requires

dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.provides: dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.requires
	$(MAKE) -f dtof/CMakeFiles/R3BdTof.dir/build.make dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.provides.build
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.provides

dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.provides.build: dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o: dtof/CMakeFiles/R3BdTof.dir/flags.make
dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o: ../dtof/R3BGeodTof.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o -c /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BGeodTof.cxx

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.i"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BGeodTof.cxx > CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.i

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.s"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BGeodTof.cxx -o CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.s

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.requires:
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.requires

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.provides: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.requires
	$(MAKE) -f dtof/CMakeFiles/R3BdTof.dir/build.make dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.provides.build
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.provides

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.provides.build: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o: dtof/CMakeFiles/R3BdTof.dir/flags.make
dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o: ../dtof/R3BGeodTofPar.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o -c /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BGeodTofPar.cxx

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.i"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BGeodTofPar.cxx > CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.i

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.s"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BGeodTofPar.cxx -o CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.s

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.requires:
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.requires

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.provides: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.requires
	$(MAKE) -f dtof/CMakeFiles/R3BdTof.dir/build.make dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.provides.build
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.provides

dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.provides.build: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o

dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o: dtof/CMakeFiles/R3BdTof.dir/flags.make
dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o: ../dtof/R3BdTofContFact.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o -c /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTofContFact.cxx

dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.i"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTofContFact.cxx > CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.i

dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.s"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTofContFact.cxx -o CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.s

dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.requires:
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.requires

dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.provides: dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.requires
	$(MAKE) -f dtof/CMakeFiles/R3BdTof.dir/build.make dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.provides.build
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.provides

dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.provides.build: dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o

dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o: dtof/CMakeFiles/R3BdTof.dir/flags.make
dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o: ../dtof/R3BdTofDigiPar.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o -c /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTofDigiPar.cxx

dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.i"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTofDigiPar.cxx > CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.i

dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.s"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof/R3BdTofDigiPar.cxx -o CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.s

dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.requires:
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.requires

dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.provides: dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.requires
	$(MAKE) -f dtof/CMakeFiles/R3BdTof.dir/build.make dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.provides.build
.PHONY : dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.provides

dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.provides.build: dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o

dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o: dtof/CMakeFiles/R3BdTof.dir/flags.make
dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o: dtof/G__R3BdTofDict.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o -c /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/G__R3BdTofDict.cxx

dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.i"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/G__R3BdTofDict.cxx > CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.i

dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.s"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && /cvmfs/it.gsi.de/compiler/gcc/4.8.4/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/G__R3BdTofDict.cxx -o CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.s

dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.requires:
.PHONY : dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.requires

dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.provides: dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.requires
	$(MAKE) -f dtof/CMakeFiles/R3BdTof.dir/build.make dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.provides.build
.PHONY : dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.provides

dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.provides.build: dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o

# Object files for target R3BdTof
R3BdTof_OBJECTS = \
"CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o" \
"CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o" \
"CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o" \
"CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o" \
"CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o" \
"CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o"

# External object files for target R3BdTof
R3BdTof_EXTERNAL_OBJECTS =

lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o
lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o
lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o
lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o
lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o
lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o
lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/build.make
lib/libR3BdTof.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libR3BdTof.so.SOVERSION: lib/libR3BPassive.so.SOVERSION
lib/libR3BdTof.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3BdTof.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libR3BdTof.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3BdTof.so.SOVERSION: lib/libField.so.SOVERSION
lib/libR3BdTof.so.SOVERSION: dtof/CMakeFiles/R3BdTof.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../lib/libR3BdTof.so"
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3BdTof.dir/link.txt --verbose=$(VERBOSE)
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3BdTof.so.SOVERSION ../lib/libR3BdTof.so.SOVERSION ../lib/libR3BdTof.so

lib/libR3BdTof.so: lib/libR3BdTof.so.SOVERSION

# Rule to build all files generated by this target.
dtof/CMakeFiles/R3BdTof.dir/build: lib/libR3BdTof.so
.PHONY : dtof/CMakeFiles/R3BdTof.dir/build

dtof/CMakeFiles/R3BdTof.dir/requires: dtof/CMakeFiles/R3BdTof.dir/R3BdTof.cxx.o.requires
dtof/CMakeFiles/R3BdTof.dir/requires: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTof.cxx.o.requires
dtof/CMakeFiles/R3BdTof.dir/requires: dtof/CMakeFiles/R3BdTof.dir/R3BGeodTofPar.cxx.o.requires
dtof/CMakeFiles/R3BdTof.dir/requires: dtof/CMakeFiles/R3BdTof.dir/R3BdTofContFact.cxx.o.requires
dtof/CMakeFiles/R3BdTof.dir/requires: dtof/CMakeFiles/R3BdTof.dir/R3BdTofDigiPar.cxx.o.requires
dtof/CMakeFiles/R3BdTof.dir/requires: dtof/CMakeFiles/R3BdTof.dir/G__R3BdTofDict.cxx.o.requires
.PHONY : dtof/CMakeFiles/R3BdTof.dir/requires

dtof/CMakeFiles/R3BdTof.dir/clean:
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof && $(CMAKE_COMMAND) -P CMakeFiles/R3BdTof.dir/cmake_clean.cmake
.PHONY : dtof/CMakeFiles/R3BdTof.dir/clean

dtof/CMakeFiles/R3BdTof.dir/depend: dtof/G__R3BdTofDict.cxx
dtof/CMakeFiles/R3BdTof.dir/depend: dtof/G__R3BdTofDict_rdict.pcm
dtof/CMakeFiles/R3BdTof.dir/depend: lib/libR3BdTof.rootmap
	cd /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof /u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/CMakeFiles/R3BdTof.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dtof/CMakeFiles/R3BdTof.dir/depend

