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
CMAKE_SOURCE_DIR = E:\Demo\Cplus\chp6\6.7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Demo\Cplus\chp6\6.7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/6_7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/6_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/6_7.dir/flags.make

CMakeFiles/6_7.dir/not.cpp.obj: CMakeFiles/6_7.dir/flags.make
CMakeFiles/6_7.dir/not.cpp.obj: ../not.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Demo\Cplus\chp6\6.7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/6_7.dir/not.cpp.obj"
	E:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\6_7.dir\not.cpp.obj -c E:\Demo\Cplus\chp6\6.7\not.cpp

CMakeFiles/6_7.dir/not.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/6_7.dir/not.cpp.i"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Demo\Cplus\chp6\6.7\not.cpp > CMakeFiles\6_7.dir\not.cpp.i

CMakeFiles/6_7.dir/not.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/6_7.dir/not.cpp.s"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Demo\Cplus\chp6\6.7\not.cpp -o CMakeFiles\6_7.dir\not.cpp.s

# Object files for target 6_7
6_7_OBJECTS = \
"CMakeFiles/6_7.dir/not.cpp.obj"

# External object files for target 6_7
6_7_EXTERNAL_OBJECTS =

6_7.exe: CMakeFiles/6_7.dir/not.cpp.obj
6_7.exe: CMakeFiles/6_7.dir/build.make
6_7.exe: CMakeFiles/6_7.dir/linklibs.rsp
6_7.exe: CMakeFiles/6_7.dir/objects1.rsp
6_7.exe: CMakeFiles/6_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Demo\Cplus\chp6\6.7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 6_7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\6_7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/6_7.dir/build: 6_7.exe

.PHONY : CMakeFiles/6_7.dir/build

CMakeFiles/6_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\6_7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/6_7.dir/clean

CMakeFiles/6_7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Demo\Cplus\chp6\6.7 E:\Demo\Cplus\chp6\6.7 E:\Demo\Cplus\chp6\6.7\cmake-build-debug E:\Demo\Cplus\chp6\6.7\cmake-build-debug E:\Demo\Cplus\chp6\6.7\cmake-build-debug\CMakeFiles\6_7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/6_7.dir/depend

