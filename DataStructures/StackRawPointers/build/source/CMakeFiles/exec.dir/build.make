# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gosho/DataStructures/StackRawPointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gosho/DataStructures/StackRawPointers/build

# Include any dependencies generated for this target.
include source/CMakeFiles/exec.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/exec.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/exec.dir/flags.make

source/CMakeFiles/exec.dir/main.cpp.o: source/CMakeFiles/exec.dir/flags.make
source/CMakeFiles/exec.dir/main.cpp.o: ../source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gosho/DataStructures/StackRawPointers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/exec.dir/main.cpp.o"
	cd /home/gosho/DataStructures/StackRawPointers/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/main.cpp.o -c /home/gosho/DataStructures/StackRawPointers/source/main.cpp

source/CMakeFiles/exec.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/main.cpp.i"
	cd /home/gosho/DataStructures/StackRawPointers/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gosho/DataStructures/StackRawPointers/source/main.cpp > CMakeFiles/exec.dir/main.cpp.i

source/CMakeFiles/exec.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/main.cpp.s"
	cd /home/gosho/DataStructures/StackRawPointers/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gosho/DataStructures/StackRawPointers/source/main.cpp -o CMakeFiles/exec.dir/main.cpp.s

source/CMakeFiles/exec.dir/main.cpp.o.requires:

.PHONY : source/CMakeFiles/exec.dir/main.cpp.o.requires

source/CMakeFiles/exec.dir/main.cpp.o.provides: source/CMakeFiles/exec.dir/main.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/exec.dir/build.make source/CMakeFiles/exec.dir/main.cpp.o.provides.build
.PHONY : source/CMakeFiles/exec.dir/main.cpp.o.provides

source/CMakeFiles/exec.dir/main.cpp.o.provides.build: source/CMakeFiles/exec.dir/main.cpp.o


source/CMakeFiles/exec.dir/stack.cpp.o: source/CMakeFiles/exec.dir/flags.make
source/CMakeFiles/exec.dir/stack.cpp.o: ../source/stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gosho/DataStructures/StackRawPointers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/CMakeFiles/exec.dir/stack.cpp.o"
	cd /home/gosho/DataStructures/StackRawPointers/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/stack.cpp.o -c /home/gosho/DataStructures/StackRawPointers/source/stack.cpp

source/CMakeFiles/exec.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/stack.cpp.i"
	cd /home/gosho/DataStructures/StackRawPointers/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gosho/DataStructures/StackRawPointers/source/stack.cpp > CMakeFiles/exec.dir/stack.cpp.i

source/CMakeFiles/exec.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/stack.cpp.s"
	cd /home/gosho/DataStructures/StackRawPointers/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gosho/DataStructures/StackRawPointers/source/stack.cpp -o CMakeFiles/exec.dir/stack.cpp.s

source/CMakeFiles/exec.dir/stack.cpp.o.requires:

.PHONY : source/CMakeFiles/exec.dir/stack.cpp.o.requires

source/CMakeFiles/exec.dir/stack.cpp.o.provides: source/CMakeFiles/exec.dir/stack.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/exec.dir/build.make source/CMakeFiles/exec.dir/stack.cpp.o.provides.build
.PHONY : source/CMakeFiles/exec.dir/stack.cpp.o.provides

source/CMakeFiles/exec.dir/stack.cpp.o.provides.build: source/CMakeFiles/exec.dir/stack.cpp.o


# Object files for target exec
exec_OBJECTS = \
"CMakeFiles/exec.dir/main.cpp.o" \
"CMakeFiles/exec.dir/stack.cpp.o"

# External object files for target exec
exec_EXTERNAL_OBJECTS =

source/exec: source/CMakeFiles/exec.dir/main.cpp.o
source/exec: source/CMakeFiles/exec.dir/stack.cpp.o
source/exec: source/CMakeFiles/exec.dir/build.make
source/exec: source/CMakeFiles/exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gosho/DataStructures/StackRawPointers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable exec"
	cd /home/gosho/DataStructures/StackRawPointers/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/exec.dir/build: source/exec

.PHONY : source/CMakeFiles/exec.dir/build

source/CMakeFiles/exec.dir/requires: source/CMakeFiles/exec.dir/main.cpp.o.requires
source/CMakeFiles/exec.dir/requires: source/CMakeFiles/exec.dir/stack.cpp.o.requires

.PHONY : source/CMakeFiles/exec.dir/requires

source/CMakeFiles/exec.dir/clean:
	cd /home/gosho/DataStructures/StackRawPointers/build/source && $(CMAKE_COMMAND) -P CMakeFiles/exec.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/exec.dir/clean

source/CMakeFiles/exec.dir/depend:
	cd /home/gosho/DataStructures/StackRawPointers/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gosho/DataStructures/StackRawPointers /home/gosho/DataStructures/StackRawPointers/source /home/gosho/DataStructures/StackRawPointers/build /home/gosho/DataStructures/StackRawPointers/build/source /home/gosho/DataStructures/StackRawPointers/build/source/CMakeFiles/exec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/exec.dir/depend

