# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Demo\Cplus\chp5\forstr2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Demo\Cplus\chp5\forstr2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/forstr2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/forstr2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/forstr2.dir/flags.make

CMakeFiles/forstr2.dir/forstr2.cpp.obj: CMakeFiles/forstr2.dir/flags.make
CMakeFiles/forstr2.dir/forstr2.cpp.obj: ../forstr2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Demo\Cplus\chp5\forstr2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/forstr2.dir/forstr2.cpp.obj"
	E:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\forstr2.dir\forstr2.cpp.obj -c E:\Demo\Cplus\chp5\forstr2\forstr2.cpp

CMakeFiles/forstr2.dir/forstr2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/forstr2.dir/forstr2.cpp.i"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Demo\Cplus\chp5\forstr2\forstr2.cpp > CMakeFiles\forstr2.dir\forstr2.cpp.i

CMakeFiles/forstr2.dir/forstr2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/forstr2.dir/forstr2.cpp.s"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Demo\Cplus\chp5\forstr2\forstr2.cpp -o CMakeFiles\forstr2.dir\forstr2.cpp.s

# Object files for target forstr2
forstr2_OBJECTS = \
"CMakeFiles/forstr2.dir/forstr2.cpp.obj"

# External object files for target forstr2
forstr2_EXTERNAL_OBJECTS =

forstr2.exe: CMakeFiles/forstr2.dir/forstr2.cpp.obj
forstr2.exe: CMakeFiles/forstr2.dir/build.make
forstr2.exe: CMakeFiles/forstr2.dir/linklibs.rsp
forstr2.exe: CMakeFiles/forstr2.dir/objects1.rsp
forstr2.exe: CMakeFiles/forstr2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Demo\Cplus\chp5\forstr2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable forstr2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\forstr2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/forstr2.dir/build: forstr2.exe

.PHONY : CMakeFiles/forstr2.dir/build

CMakeFiles/forstr2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\forstr2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/forstr2.dir/clean

CMakeFiles/forstr2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Demo\Cplus\chp5\forstr2 E:\Demo\Cplus\chp5\forstr2 E:\Demo\Cplus\chp5\forstr2\cmake-build-debug E:\Demo\Cplus\chp5\forstr2\cmake-build-debug E:\Demo\Cplus\chp5\forstr2\cmake-build-debug\CMakeFiles\forstr2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/forstr2.dir/depend

