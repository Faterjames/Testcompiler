# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/ubuntu/software/clion-2016.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ubuntu/software/clion-2016.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/programmes/Testcompiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/programmes/Testcompiler/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Testcompiler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Testcompiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Testcompiler.dir/flags.make

CMakeFiles/Testcompiler.dir/mycompiler.c.o: CMakeFiles/Testcompiler.dir/flags.make
CMakeFiles/Testcompiler.dir/mycompiler.c.o: ../mycompiler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/programmes/Testcompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Testcompiler.dir/mycompiler.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Testcompiler.dir/mycompiler.c.o   -c /home/ubuntu/programmes/Testcompiler/mycompiler.c

CMakeFiles/Testcompiler.dir/mycompiler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Testcompiler.dir/mycompiler.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/programmes/Testcompiler/mycompiler.c > CMakeFiles/Testcompiler.dir/mycompiler.c.i

CMakeFiles/Testcompiler.dir/mycompiler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Testcompiler.dir/mycompiler.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/programmes/Testcompiler/mycompiler.c -o CMakeFiles/Testcompiler.dir/mycompiler.c.s

CMakeFiles/Testcompiler.dir/mycompiler.c.o.requires:

.PHONY : CMakeFiles/Testcompiler.dir/mycompiler.c.o.requires

CMakeFiles/Testcompiler.dir/mycompiler.c.o.provides: CMakeFiles/Testcompiler.dir/mycompiler.c.o.requires
	$(MAKE) -f CMakeFiles/Testcompiler.dir/build.make CMakeFiles/Testcompiler.dir/mycompiler.c.o.provides.build
.PHONY : CMakeFiles/Testcompiler.dir/mycompiler.c.o.provides

CMakeFiles/Testcompiler.dir/mycompiler.c.o.provides.build: CMakeFiles/Testcompiler.dir/mycompiler.c.o


CMakeFiles/Testcompiler.dir/lex.c.o: CMakeFiles/Testcompiler.dir/flags.make
CMakeFiles/Testcompiler.dir/lex.c.o: ../lex.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/programmes/Testcompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Testcompiler.dir/lex.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Testcompiler.dir/lex.c.o   -c /home/ubuntu/programmes/Testcompiler/lex.c

CMakeFiles/Testcompiler.dir/lex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Testcompiler.dir/lex.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/programmes/Testcompiler/lex.c > CMakeFiles/Testcompiler.dir/lex.c.i

CMakeFiles/Testcompiler.dir/lex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Testcompiler.dir/lex.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/programmes/Testcompiler/lex.c -o CMakeFiles/Testcompiler.dir/lex.c.s

CMakeFiles/Testcompiler.dir/lex.c.o.requires:

.PHONY : CMakeFiles/Testcompiler.dir/lex.c.o.requires

CMakeFiles/Testcompiler.dir/lex.c.o.provides: CMakeFiles/Testcompiler.dir/lex.c.o.requires
	$(MAKE) -f CMakeFiles/Testcompiler.dir/build.make CMakeFiles/Testcompiler.dir/lex.c.o.provides.build
.PHONY : CMakeFiles/Testcompiler.dir/lex.c.o.provides

CMakeFiles/Testcompiler.dir/lex.c.o.provides.build: CMakeFiles/Testcompiler.dir/lex.c.o


# Object files for target Testcompiler
Testcompiler_OBJECTS = \
"CMakeFiles/Testcompiler.dir/mycompiler.c.o" \
"CMakeFiles/Testcompiler.dir/lex.c.o"

# External object files for target Testcompiler
Testcompiler_EXTERNAL_OBJECTS =

Testcompiler: CMakeFiles/Testcompiler.dir/mycompiler.c.o
Testcompiler: CMakeFiles/Testcompiler.dir/lex.c.o
Testcompiler: CMakeFiles/Testcompiler.dir/build.make
Testcompiler: CMakeFiles/Testcompiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/programmes/Testcompiler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Testcompiler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Testcompiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Testcompiler.dir/build: Testcompiler

.PHONY : CMakeFiles/Testcompiler.dir/build

CMakeFiles/Testcompiler.dir/requires: CMakeFiles/Testcompiler.dir/mycompiler.c.o.requires
CMakeFiles/Testcompiler.dir/requires: CMakeFiles/Testcompiler.dir/lex.c.o.requires

.PHONY : CMakeFiles/Testcompiler.dir/requires

CMakeFiles/Testcompiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Testcompiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Testcompiler.dir/clean

CMakeFiles/Testcompiler.dir/depend:
	cd /home/ubuntu/programmes/Testcompiler/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/programmes/Testcompiler /home/ubuntu/programmes/Testcompiler /home/ubuntu/programmes/Testcompiler/cmake-build-debug /home/ubuntu/programmes/Testcompiler/cmake-build-debug /home/ubuntu/programmes/Testcompiler/cmake-build-debug/CMakeFiles/Testcompiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Testcompiler.dir/depend

