# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Abilio\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.4892.24\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Abilio\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.4892.24\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Abilio\Documents\GitHub\EP-s\EP-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EP_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EP_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EP_2.dir/flags.make

CMakeFiles/EP_2.dir/main.c.obj: CMakeFiles/EP_2.dir/flags.make
CMakeFiles/EP_2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EP_2.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\EP_2.dir\main.c.obj   -c C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\main.c

CMakeFiles/EP_2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EP_2.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\main.c > CMakeFiles\EP_2.dir\main.c.i

CMakeFiles/EP_2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EP_2.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\main.c -o CMakeFiles\EP_2.dir\main.c.s

CMakeFiles/EP_2.dir/pmp.c.obj: CMakeFiles/EP_2.dir/flags.make
CMakeFiles/EP_2.dir/pmp.c.obj: ../pmp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/EP_2.dir/pmp.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\EP_2.dir\pmp.c.obj   -c C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\pmp.c

CMakeFiles/EP_2.dir/pmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EP_2.dir/pmp.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\pmp.c > CMakeFiles\EP_2.dir\pmp.c.i

CMakeFiles/EP_2.dir/pmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EP_2.dir/pmp.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\pmp.c -o CMakeFiles\EP_2.dir\pmp.c.s

CMakeFiles/EP_2.dir/ponto.c.obj: CMakeFiles/EP_2.dir/flags.make
CMakeFiles/EP_2.dir/ponto.c.obj: ../ponto.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/EP_2.dir/ponto.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\EP_2.dir\ponto.c.obj   -c C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\ponto.c

CMakeFiles/EP_2.dir/ponto.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EP_2.dir/ponto.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\ponto.c > CMakeFiles\EP_2.dir\ponto.c.i

CMakeFiles/EP_2.dir/ponto.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EP_2.dir/ponto.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\ponto.c -o CMakeFiles\EP_2.dir\ponto.c.s

# Object files for target EP_2
EP_2_OBJECTS = \
"CMakeFiles/EP_2.dir/main.c.obj" \
"CMakeFiles/EP_2.dir/pmp.c.obj" \
"CMakeFiles/EP_2.dir/ponto.c.obj"

# External object files for target EP_2
EP_2_EXTERNAL_OBJECTS =

EP_2.exe: CMakeFiles/EP_2.dir/main.c.obj
EP_2.exe: CMakeFiles/EP_2.dir/pmp.c.obj
EP_2.exe: CMakeFiles/EP_2.dir/ponto.c.obj
EP_2.exe: CMakeFiles/EP_2.dir/build.make
EP_2.exe: CMakeFiles/EP_2.dir/linklibs.rsp
EP_2.exe: CMakeFiles/EP_2.dir/objects1.rsp
EP_2.exe: CMakeFiles/EP_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable EP_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EP_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EP_2.dir/build: EP_2.exe

.PHONY : CMakeFiles/EP_2.dir/build

CMakeFiles/EP_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EP_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EP_2.dir/clean

CMakeFiles/EP_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Abilio\Documents\GitHub\EP-s\EP-2 C:\Users\Abilio\Documents\GitHub\EP-s\EP-2 C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug C:\Users\Abilio\Documents\GitHub\EP-s\EP-2\cmake-build-debug\CMakeFiles\EP_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EP_2.dir/depend

