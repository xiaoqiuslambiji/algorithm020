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
CMAKE_COMMAND = /home/q/packages/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/q/packages/clion-2020.1.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/q/CLionProjects/algorithm020/Week1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/q/CLionProjects/algorithm020/Week1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rotate.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rotate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rotate.dir/flags.make

CMakeFiles/rotate.dir/189-rotate.cpp.o: CMakeFiles/rotate.dir/flags.make
CMakeFiles/rotate.dir/189-rotate.cpp.o: ../189-rotate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/q/CLionProjects/algorithm020/Week1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rotate.dir/189-rotate.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rotate.dir/189-rotate.cpp.o -c /home/q/CLionProjects/algorithm020/Week1/189-rotate.cpp

CMakeFiles/rotate.dir/189-rotate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rotate.dir/189-rotate.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/q/CLionProjects/algorithm020/Week1/189-rotate.cpp > CMakeFiles/rotate.dir/189-rotate.cpp.i

CMakeFiles/rotate.dir/189-rotate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rotate.dir/189-rotate.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/q/CLionProjects/algorithm020/Week1/189-rotate.cpp -o CMakeFiles/rotate.dir/189-rotate.cpp.s

# Object files for target rotate
rotate_OBJECTS = \
"CMakeFiles/rotate.dir/189-rotate.cpp.o"

# External object files for target rotate
rotate_EXTERNAL_OBJECTS =

rotate: CMakeFiles/rotate.dir/189-rotate.cpp.o
rotate: CMakeFiles/rotate.dir/build.make
rotate: CMakeFiles/rotate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/q/CLionProjects/algorithm020/Week1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rotate"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rotate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rotate.dir/build: rotate

.PHONY : CMakeFiles/rotate.dir/build

CMakeFiles/rotate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rotate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rotate.dir/clean

CMakeFiles/rotate.dir/depend:
	cd /home/q/CLionProjects/algorithm020/Week1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/q/CLionProjects/algorithm020/Week1 /home/q/CLionProjects/algorithm020/Week1 /home/q/CLionProjects/algorithm020/Week1/cmake-build-debug /home/q/CLionProjects/algorithm020/Week1/cmake-build-debug /home/q/CLionProjects/algorithm020/Week1/cmake-build-debug/CMakeFiles/rotate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rotate.dir/depend

