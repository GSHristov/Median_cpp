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
include gtest/googlemock/CMakeFiles/gmock_main.dir/depend.make

# Include the progress variables for this target.
include gtest/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include gtest/googlemock/CMakeFiles/gmock_main.dir/flags.make

gtest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: gtest/googlemock/CMakeFiles/gmock_main.dir/flags.make
gtest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: ../googletest/googlemock/src/gmock_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gtest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock && /Library/Developer/CommandLineTools/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/googletest/googlemock/src/gmock_main.cc

gtest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock && /Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/googletest/googlemock/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

gtest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock && /Library/Developer/CommandLineTools/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/googletest/googlemock/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s

# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

lib/libgmock_main.a: gtest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
lib/libgmock_main.a: gtest/googlemock/CMakeFiles/gmock_main.dir/build.make
lib/libgmock_main.a: gtest/googlemock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libgmock_main.a"
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gtest/googlemock/CMakeFiles/gmock_main.dir/build: lib/libgmock_main.a

.PHONY : gtest/googlemock/CMakeFiles/gmock_main.dir/build

gtest/googlemock/CMakeFiles/gmock_main.dir/clean:
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : gtest/googlemock/CMakeFiles/gmock_main.dir/clean

gtest/googlemock/CMakeFiles/gmock_main.dir/depend:
	cd /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/googletest/googlemock /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock /Users/georgihristov/Desktop/alkatraz_median_cpp/Median_cpp/build/gtest/googlemock/CMakeFiles/gmock_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/googlemock/CMakeFiles/gmock_main.dir/depend

