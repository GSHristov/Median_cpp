# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/runUnitTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/runUnitTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runUnitTest.dir/flags.make

CMakeFiles/runUnitTest.dir/main.cpp.o: CMakeFiles/runUnitTest.dir/flags.make
CMakeFiles/runUnitTest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runUnitTest.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runUnitTest.dir/main.cpp.o -c /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/main.cpp

CMakeFiles/runUnitTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runUnitTest.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/main.cpp > CMakeFiles/runUnitTest.dir/main.cpp.i

CMakeFiles/runUnitTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runUnitTest.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/main.cpp -o CMakeFiles/runUnitTest.dir/main.cpp.s

CMakeFiles/runUnitTest.dir/median.cpp.o: CMakeFiles/runUnitTest.dir/flags.make
CMakeFiles/runUnitTest.dir/median.cpp.o: ../median.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/runUnitTest.dir/median.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runUnitTest.dir/median.cpp.o -c /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/median.cpp

CMakeFiles/runUnitTest.dir/median.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runUnitTest.dir/median.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/median.cpp > CMakeFiles/runUnitTest.dir/median.cpp.i

CMakeFiles/runUnitTest.dir/median.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runUnitTest.dir/median.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/median.cpp -o CMakeFiles/runUnitTest.dir/median.cpp.s

CMakeFiles/runUnitTest.dir/list.cpp.o: CMakeFiles/runUnitTest.dir/flags.make
CMakeFiles/runUnitTest.dir/list.cpp.o: ../list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/runUnitTest.dir/list.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runUnitTest.dir/list.cpp.o -c /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/list.cpp

CMakeFiles/runUnitTest.dir/list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runUnitTest.dir/list.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/list.cpp > CMakeFiles/runUnitTest.dir/list.cpp.i

CMakeFiles/runUnitTest.dir/list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runUnitTest.dir/list.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/list.cpp -o CMakeFiles/runUnitTest.dir/list.cpp.s

# Object files for target runUnitTest
runUnitTest_OBJECTS = \
"CMakeFiles/runUnitTest.dir/main.cpp.o" \
"CMakeFiles/runUnitTest.dir/median.cpp.o" \
"CMakeFiles/runUnitTest.dir/list.cpp.o"

# External object files for target runUnitTest
runUnitTest_EXTERNAL_OBJECTS =

runUnitTest: CMakeFiles/runUnitTest.dir/main.cpp.o
runUnitTest: CMakeFiles/runUnitTest.dir/median.cpp.o
runUnitTest: CMakeFiles/runUnitTest.dir/list.cpp.o
runUnitTest: CMakeFiles/runUnitTest.dir/build.make
runUnitTest: /usr/local/lib/libgtest.a
runUnitTest: /usr/local/lib/libgtest_main.a
runUnitTest: CMakeFiles/runUnitTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable runUnitTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runUnitTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runUnitTest.dir/build: runUnitTest

.PHONY : CMakeFiles/runUnitTest.dir/build

CMakeFiles/runUnitTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runUnitTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runUnitTest.dir/clean

CMakeFiles/runUnitTest.dir/depend:
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/CMakeFiles/runUnitTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runUnitTest.dir/depend

