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
CMAKE_SOURCE_DIR = E:\Demo\Cplus\chp5\waiting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Demo\Cplus\chp5\waiting\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/waiting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/waiting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/waiting.dir/flags.make

CMakeFiles/waiting.dir/waiting.cpp.obj: CMakeFiles/waiting.dir/flags.make
CMakeFiles/waiting.dir/waiting.cpp.obj: ../waiting.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Demo\Cplus\chp5\waiting\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/waiting.dir/waiting.cpp.obj"
	E:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\waiting.dir\waiting.cpp.obj -c E:\Demo\Cplus\chp5\waiting\waiting.cpp

CMakeFiles/waiting.dir/waiting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/waiting.dir/waiting.cpp.i"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Demo\Cplus\chp5\waiting\waiting.cpp > CMakeFiles\waiting.dir\waiting.cpp.i

CMakeFiles/waiting.dir/waiting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/waiting.dir/waiting.cpp.s"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Demo\Cplus\chp5\waiting\waiting.cpp -o CMakeFiles\waiting.dir\waiting.cpp.s

# Object files for target waiting
waiting_OBJECTS = \
"CMakeFiles/waiting.dir/waiting.cpp.obj"

# External object files for target waiting
waiting_EXTERNAL_OBJECTS =

waiting.exe: CMakeFiles/waiting.dir/waiting.cpp.obj
waiting.exe: CMakeFiles/waiting.dir/build.make
waiting.exe: CMakeFiles/waiting.dir/linklibs.rsp
waiting.exe: CMakeFiles/waiting.dir/objects1.rsp
waiting.exe: CMakeFiles/waiting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Demo\Cplus\chp5\waiting\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable waiting.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\waiting.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/waiting.dir/build: waiting.exe

.PHONY : CMakeFiles/waiting.dir/build

CMakeFiles/waiting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\waiting.dir\cmake_clean.cmake
.PHONY : CMakeFiles/waiting.dir/clean

CMakeFiles/waiting.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Demo\Cplus\chp5\waiting E:\Demo\Cplus\chp5\waiting E:\Demo\Cplus\chp5\waiting\cmake-build-debug E:\Demo\Cplus\chp5\waiting\cmake-build-debug E:\Demo\Cplus\chp5\waiting\cmake-build-debug\CMakeFiles\waiting.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/waiting.dir/depend

