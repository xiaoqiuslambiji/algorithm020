# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/q/data/VSLAM/CLionProjects/algorithm020/Week9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/reverseStr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reverseStr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reverseStr.dir/flags.make

CMakeFiles/reverseStr.dir/reverseStr.cpp.o: CMakeFiles/reverseStr.dir/flags.make
CMakeFiles/reverseStr.dir/reverseStr.cpp.o: ../reverseStr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/q/data/VSLAM/CLionProjects/algorithm020/Week9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reverseStr.dir/reverseStr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reverseStr.dir/reverseStr.cpp.o -c /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/reverseStr.cpp

CMakeFiles/reverseStr.dir/reverseStr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverseStr.dir/reverseStr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/reverseStr.cpp > CMakeFiles/reverseStr.dir/reverseStr.cpp.i

CMakeFiles/reverseStr.dir/reverseStr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverseStr.dir/reverseStr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/reverseStr.cpp -o CMakeFiles/reverseStr.dir/reverseStr.cpp.s

# Object files for target reverseStr
reverseStr_OBJECTS = \
"CMakeFiles/reverseStr.dir/reverseStr.cpp.o"

# External object files for target reverseStr
reverseStr_EXTERNAL_OBJECTS =

reverseStr: CMakeFiles/reverseStr.dir/reverseStr.cpp.o
reverseStr: CMakeFiles/reverseStr.dir/build.make
reverseStr: CMakeFiles/reverseStr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/q/data/VSLAM/CLionProjects/algorithm020/Week9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable reverseStr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reverseStr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reverseStr.dir/build: reverseStr

.PHONY : CMakeFiles/reverseStr.dir/build

CMakeFiles/reverseStr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reverseStr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reverseStr.dir/clean

CMakeFiles/reverseStr.dir/depend:
	cd /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/q/data/VSLAM/CLionProjects/algorithm020/Week9 /home/q/data/VSLAM/CLionProjects/algorithm020/Week9 /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/cmake-build-debug /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/cmake-build-debug /home/q/data/VSLAM/CLionProjects/algorithm020/Week9/cmake-build-debug/CMakeFiles/reverseStr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reverseStr.dir/depend

