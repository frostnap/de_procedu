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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Google_Tests_run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Google_Tests_run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Google_Tests_run.dir/flags.make

CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.obj: CMakeFiles/Google_Tests_run.dir/flags.make
CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.obj: CMakeFiles/Google_Tests_run.dir/includes_CXX.rsp
CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.obj: ../tests/test1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Google_Tests_run.dir\tests\test1.cpp.obj -c C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\tests\test1.cpp

CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\tests\test1.cpp > CMakeFiles\Google_Tests_run.dir\tests\test1.cpp.i

CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\tests\test1.cpp -o CMakeFiles\Google_Tests_run.dir\tests\test1.cpp.s

# Object files for target Google_Tests_run
Google_Tests_run_OBJECTS = \
"CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.obj"

# External object files for target Google_Tests_run
Google_Tests_run_EXTERNAL_OBJECTS =

Google_Tests_run.exe: CMakeFiles/Google_Tests_run.dir/tests/test1.cpp.obj
Google_Tests_run.exe: CMakeFiles/Google_Tests_run.dir/build.make
Google_Tests_run.exe: lib/libgtestd.a
Google_Tests_run.exe: lib/libgtest_maind.a
Google_Tests_run.exe: lib/libgtestd.a
Google_Tests_run.exe: CMakeFiles/Google_Tests_run.dir/linklibs.rsp
Google_Tests_run.exe: CMakeFiles/Google_Tests_run.dir/objects1.rsp
Google_Tests_run.exe: CMakeFiles/Google_Tests_run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Google_Tests_run.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Google_Tests_run.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Google_Tests_run.dir/build: Google_Tests_run.exe

.PHONY : CMakeFiles/Google_Tests_run.dir/build

CMakeFiles/Google_Tests_run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Google_Tests_run.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Google_Tests_run.dir/clean

CMakeFiles/Google_Tests_run.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\cmake-build-debug C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\cmake-build-debug C:\Users\y2g\CLionProjects\Lab2020_P\Google_tests\cmake-build-debug\CMakeFiles\Google_Tests_run.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Google_Tests_run.dir/depend

