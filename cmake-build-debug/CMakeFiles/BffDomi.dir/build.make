# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\JurijCerar\Projects\UTF

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\JurijCerar\Projects\UTF\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BffDomi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BffDomi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BffDomi.dir/flags.make

CMakeFiles/BffDomi.dir/main.cpp.obj: CMakeFiles/BffDomi.dir/flags.make
CMakeFiles/BffDomi.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\JurijCerar\Projects\UTF\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BffDomi.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BffDomi.dir\main.cpp.obj -c C:\Users\JurijCerar\Projects\UTF\main.cpp

CMakeFiles/BffDomi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BffDomi.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\JurijCerar\Projects\UTF\main.cpp > CMakeFiles\BffDomi.dir\main.cpp.i

CMakeFiles/BffDomi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BffDomi.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\JurijCerar\Projects\UTF\main.cpp -o CMakeFiles\BffDomi.dir\main.cpp.s

# Object files for target BffDomi
BffDomi_OBJECTS = \
"CMakeFiles/BffDomi.dir/main.cpp.obj"

# External object files for target BffDomi
BffDomi_EXTERNAL_OBJECTS =

BffDomi.exe: CMakeFiles/BffDomi.dir/main.cpp.obj
BffDomi.exe: CMakeFiles/BffDomi.dir/build.make
BffDomi.exe: CMakeFiles/BffDomi.dir/linklibs.rsp
BffDomi.exe: CMakeFiles/BffDomi.dir/objects1.rsp
BffDomi.exe: CMakeFiles/BffDomi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\JurijCerar\Projects\UTF\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BffDomi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BffDomi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BffDomi.dir/build: BffDomi.exe

.PHONY : CMakeFiles/BffDomi.dir/build

CMakeFiles/BffDomi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BffDomi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BffDomi.dir/clean

CMakeFiles/BffDomi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\JurijCerar\Projects\UTF C:\Users\JurijCerar\Projects\UTF C:\Users\JurijCerar\Projects\UTF\cmake-build-debug C:\Users\JurijCerar\Projects\UTF\cmake-build-debug C:\Users\JurijCerar\Projects\UTF\cmake-build-debug\CMakeFiles\BffDomi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BffDomi.dir/depend

