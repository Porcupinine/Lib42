# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/219/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/219/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /sam/Codamgit/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /sam/Codamgit/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/push_swap.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/main.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/main.c.o: /sam/Codamgit/push_swap/main.c
CMakeFiles/push_swap.dir/main.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/sam/Codamgit/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/main.c.o -MF CMakeFiles/push_swap.dir/main.c.o.d -o CMakeFiles/push_swap.dir/main.c.o -c /sam/Codamgit/push_swap/main.c

CMakeFiles/push_swap.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /sam/Codamgit/push_swap/main.c > CMakeFiles/push_swap.dir/main.c.i

CMakeFiles/push_swap.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /sam/Codamgit/push_swap/main.c -o CMakeFiles/push_swap.dir/main.c.s

CMakeFiles/push_swap.dir/pussh_swap.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/pussh_swap.c.o: /sam/Codamgit/push_swap/pussh_swap.c
CMakeFiles/push_swap.dir/pussh_swap.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/sam/Codamgit/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/pussh_swap.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/pussh_swap.c.o -MF CMakeFiles/push_swap.dir/pussh_swap.c.o.d -o CMakeFiles/push_swap.dir/pussh_swap.c.o -c /sam/Codamgit/push_swap/pussh_swap.c

CMakeFiles/push_swap.dir/pussh_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/pussh_swap.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /sam/Codamgit/push_swap/pussh_swap.c > CMakeFiles/push_swap.dir/pussh_swap.c.i

CMakeFiles/push_swap.dir/pussh_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/pussh_swap.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /sam/Codamgit/push_swap/pussh_swap.c -o CMakeFiles/push_swap.dir/pussh_swap.c.s

# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/main.c.o" \
"CMakeFiles/push_swap.dir/pussh_swap.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap: CMakeFiles/push_swap.dir/main.c.o
push_swap: CMakeFiles/push_swap.dir/pussh_swap.c.o
push_swap: CMakeFiles/push_swap.dir/build.make
push_swap: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/sam/Codamgit/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable push_swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap
.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd /sam/Codamgit/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /sam/Codamgit/push_swap /sam/Codamgit/push_swap /sam/Codamgit/push_swap/cmake-build-debug /sam/Codamgit/push_swap/cmake-build-debug /sam/Codamgit/push_swap/cmake-build-debug/CMakeFiles/push_swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend

