# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/parallels/Desktop/CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/Desktop/CPP/build

# Include any dependencies generated for this target.
include CMakeFiles/CPP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CPP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP.dir/flags.make

CMakeFiles/CPP.dir/09.cpp.o: CMakeFiles/CPP.dir/flags.make
CMakeFiles/CPP.dir/09.cpp.o: ../09.cpp
CMakeFiles/CPP.dir/09.cpp.o: CMakeFiles/CPP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPP.dir/09.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CPP.dir/09.cpp.o -MF CMakeFiles/CPP.dir/09.cpp.o.d -o CMakeFiles/CPP.dir/09.cpp.o -c /home/parallels/Desktop/CPP/09.cpp

CMakeFiles/CPP.dir/09.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP.dir/09.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Desktop/CPP/09.cpp > CMakeFiles/CPP.dir/09.cpp.i

CMakeFiles/CPP.dir/09.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP.dir/09.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Desktop/CPP/09.cpp -o CMakeFiles/CPP.dir/09.cpp.s

# Object files for target CPP
CPP_OBJECTS = \
"CMakeFiles/CPP.dir/09.cpp.o"

# External object files for target CPP
CPP_EXTERNAL_OBJECTS =

../CPP: CMakeFiles/CPP.dir/09.cpp.o
../CPP: CMakeFiles/CPP.dir/build.make
../CPP: CMakeFiles/CPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../CPP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP.dir/build: ../CPP
.PHONY : CMakeFiles/CPP.dir/build

CMakeFiles/CPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPP.dir/clean

CMakeFiles/CPP.dir/depend:
	cd /home/parallels/Desktop/CPP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/Desktop/CPP /home/parallels/Desktop/CPP /home/parallels/Desktop/CPP/build /home/parallels/Desktop/CPP/build /home/parallels/Desktop/CPP/build/CMakeFiles/CPP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPP.dir/depend

