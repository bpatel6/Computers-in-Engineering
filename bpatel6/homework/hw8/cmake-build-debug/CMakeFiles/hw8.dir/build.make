# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CIE\bpatel6\homework\hw8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CIE\bpatel6\homework\hw8\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw8.dir/flags.make

CMakeFiles/hw8.dir/main.cpp.obj: CMakeFiles/hw8.dir/flags.make
CMakeFiles/hw8.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CIE\bpatel6\homework\hw8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw8.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hw8.dir\main.cpp.obj -c C:\CIE\bpatel6\homework\hw8\main.cpp

CMakeFiles/hw8.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw8.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CIE\bpatel6\homework\hw8\main.cpp > CMakeFiles\hw8.dir\main.cpp.i

CMakeFiles/hw8.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw8.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CIE\bpatel6\homework\hw8\main.cpp -o CMakeFiles\hw8.dir\main.cpp.s

# Object files for target hw8
hw8_OBJECTS = \
"CMakeFiles/hw8.dir/main.cpp.obj"

# External object files for target hw8
hw8_EXTERNAL_OBJECTS =

hw8.exe: CMakeFiles/hw8.dir/main.cpp.obj
hw8.exe: CMakeFiles/hw8.dir/build.make
hw8.exe: CMakeFiles/hw8.dir/linklibs.rsp
hw8.exe: CMakeFiles/hw8.dir/objects1.rsp
hw8.exe: CMakeFiles/hw8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CIE\bpatel6\homework\hw8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hw8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw8.dir/build: hw8.exe

.PHONY : CMakeFiles/hw8.dir/build

CMakeFiles/hw8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hw8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hw8.dir/clean

CMakeFiles/hw8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CIE\bpatel6\homework\hw8 C:\CIE\bpatel6\homework\hw8 C:\CIE\bpatel6\homework\hw8\cmake-build-debug C:\CIE\bpatel6\homework\hw8\cmake-build-debug C:\CIE\bpatel6\homework\hw8\cmake-build-debug\CMakeFiles\hw8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw8.dir/depend

