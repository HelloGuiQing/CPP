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
CMAKE_SOURCE_DIR = /home/parallels/Desktop/CPP/10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/Desktop/CPP/10/build

# Include any dependencies generated for this target.
include CMakeFiles/10.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/10.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10.dir/flags.make

CMakeFiles/10.dir/main.cpp.o: CMakeFiles/10.dir/flags.make
CMakeFiles/10.dir/main.cpp.o: ../main.cpp
CMakeFiles/10.dir/main.cpp.o: CMakeFiles/10.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Desktop/CPP/10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/10.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/10.dir/main.cpp.o -MF CMakeFiles/10.dir/main.cpp.o.d -o CMakeFiles/10.dir/main.cpp.o -c /home/parallels/Desktop/CPP/10/main.cpp

CMakeFiles/10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/10.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Desktop/CPP/10/main.cpp > CMakeFiles/10.dir/main.cpp.i

CMakeFiles/10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/10.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Desktop/CPP/10/main.cpp -o CMakeFiles/10.dir/main.cpp.s

CMakeFiles/10.dir/swap.cpp.o: CMakeFiles/10.dir/flags.make
CMakeFiles/10.dir/swap.cpp.o: ../swap.cpp
CMakeFiles/10.dir/swap.cpp.o: CMakeFiles/10.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Desktop/CPP/10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/10.dir/swap.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/10.dir/swap.cpp.o -MF CMakeFiles/10.dir/swap.cpp.o.d -o CMakeFiles/10.dir/swap.cpp.o -c /home/parallels/Desktop/CPP/10/swap.cpp

CMakeFiles/10.dir/swap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/10.dir/swap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Desktop/CPP/10/swap.cpp > CMakeFiles/10.dir/swap.cpp.i

CMakeFiles/10.dir/swap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/10.dir/swap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Desktop/CPP/10/swap.cpp -o CMakeFiles/10.dir/swap.cpp.s

# Object files for target 10
10_OBJECTS = \
"CMakeFiles/10.dir/main.cpp.o" \
"CMakeFiles/10.dir/swap.cpp.o"

# External object files for target 10
10_EXTERNAL_OBJECTS =

../10: CMakeFiles/10.dir/main.cpp.o
../10: CMakeFiles/10.dir/swap.cpp.o
../10: CMakeFiles/10.dir/build.make
../10: CMakeFiles/10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/Desktop/CPP/10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10.dir/build: ../10
.PHONY : CMakeFiles/10.dir/build

CMakeFiles/10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10.dir/clean

CMakeFiles/10.dir/depend:
	cd /home/parallels/Desktop/CPP/10/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/Desktop/CPP/10 /home/parallels/Desktop/CPP/10 /home/parallels/Desktop/CPP/10/build /home/parallels/Desktop/CPP/10/build /home/parallels/Desktop/CPP/10/build/CMakeFiles/10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/10.dir/depend

