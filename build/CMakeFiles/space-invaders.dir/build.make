# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gaurav/projects/space-invaders

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gaurav/projects/space-invaders/build

# Include any dependencies generated for this target.
include CMakeFiles/space-invaders.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/space-invaders.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/space-invaders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/space-invaders.dir/flags.make

CMakeFiles/space-invaders.dir/codegen:
.PHONY : CMakeFiles/space-invaders.dir/codegen

CMakeFiles/space-invaders.dir/src/alien.cpp.o: CMakeFiles/space-invaders.dir/flags.make
CMakeFiles/space-invaders.dir/src/alien.cpp.o: /Users/gaurav/projects/space-invaders/src/alien.cpp
CMakeFiles/space-invaders.dir/src/alien.cpp.o: CMakeFiles/space-invaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/space-invaders.dir/src/alien.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/space-invaders.dir/src/alien.cpp.o -MF CMakeFiles/space-invaders.dir/src/alien.cpp.o.d -o CMakeFiles/space-invaders.dir/src/alien.cpp.o -c /Users/gaurav/projects/space-invaders/src/alien.cpp

CMakeFiles/space-invaders.dir/src/alien.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/space-invaders.dir/src/alien.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaurav/projects/space-invaders/src/alien.cpp > CMakeFiles/space-invaders.dir/src/alien.cpp.i

CMakeFiles/space-invaders.dir/src/alien.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/space-invaders.dir/src/alien.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaurav/projects/space-invaders/src/alien.cpp -o CMakeFiles/space-invaders.dir/src/alien.cpp.s

CMakeFiles/space-invaders.dir/src/block.cpp.o: CMakeFiles/space-invaders.dir/flags.make
CMakeFiles/space-invaders.dir/src/block.cpp.o: /Users/gaurav/projects/space-invaders/src/block.cpp
CMakeFiles/space-invaders.dir/src/block.cpp.o: CMakeFiles/space-invaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/space-invaders.dir/src/block.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/space-invaders.dir/src/block.cpp.o -MF CMakeFiles/space-invaders.dir/src/block.cpp.o.d -o CMakeFiles/space-invaders.dir/src/block.cpp.o -c /Users/gaurav/projects/space-invaders/src/block.cpp

CMakeFiles/space-invaders.dir/src/block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/space-invaders.dir/src/block.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaurav/projects/space-invaders/src/block.cpp > CMakeFiles/space-invaders.dir/src/block.cpp.i

CMakeFiles/space-invaders.dir/src/block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/space-invaders.dir/src/block.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaurav/projects/space-invaders/src/block.cpp -o CMakeFiles/space-invaders.dir/src/block.cpp.s

CMakeFiles/space-invaders.dir/src/bunker.cpp.o: CMakeFiles/space-invaders.dir/flags.make
CMakeFiles/space-invaders.dir/src/bunker.cpp.o: /Users/gaurav/projects/space-invaders/src/bunker.cpp
CMakeFiles/space-invaders.dir/src/bunker.cpp.o: CMakeFiles/space-invaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/space-invaders.dir/src/bunker.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/space-invaders.dir/src/bunker.cpp.o -MF CMakeFiles/space-invaders.dir/src/bunker.cpp.o.d -o CMakeFiles/space-invaders.dir/src/bunker.cpp.o -c /Users/gaurav/projects/space-invaders/src/bunker.cpp

CMakeFiles/space-invaders.dir/src/bunker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/space-invaders.dir/src/bunker.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaurav/projects/space-invaders/src/bunker.cpp > CMakeFiles/space-invaders.dir/src/bunker.cpp.i

CMakeFiles/space-invaders.dir/src/bunker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/space-invaders.dir/src/bunker.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaurav/projects/space-invaders/src/bunker.cpp -o CMakeFiles/space-invaders.dir/src/bunker.cpp.s

CMakeFiles/space-invaders.dir/src/game.cpp.o: CMakeFiles/space-invaders.dir/flags.make
CMakeFiles/space-invaders.dir/src/game.cpp.o: /Users/gaurav/projects/space-invaders/src/game.cpp
CMakeFiles/space-invaders.dir/src/game.cpp.o: CMakeFiles/space-invaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/space-invaders.dir/src/game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/space-invaders.dir/src/game.cpp.o -MF CMakeFiles/space-invaders.dir/src/game.cpp.o.d -o CMakeFiles/space-invaders.dir/src/game.cpp.o -c /Users/gaurav/projects/space-invaders/src/game.cpp

CMakeFiles/space-invaders.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/space-invaders.dir/src/game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaurav/projects/space-invaders/src/game.cpp > CMakeFiles/space-invaders.dir/src/game.cpp.i

CMakeFiles/space-invaders.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/space-invaders.dir/src/game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaurav/projects/space-invaders/src/game.cpp -o CMakeFiles/space-invaders.dir/src/game.cpp.s

CMakeFiles/space-invaders.dir/src/laser.cpp.o: CMakeFiles/space-invaders.dir/flags.make
CMakeFiles/space-invaders.dir/src/laser.cpp.o: /Users/gaurav/projects/space-invaders/src/laser.cpp
CMakeFiles/space-invaders.dir/src/laser.cpp.o: CMakeFiles/space-invaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/space-invaders.dir/src/laser.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/space-invaders.dir/src/laser.cpp.o -MF CMakeFiles/space-invaders.dir/src/laser.cpp.o.d -o CMakeFiles/space-invaders.dir/src/laser.cpp.o -c /Users/gaurav/projects/space-invaders/src/laser.cpp

CMakeFiles/space-invaders.dir/src/laser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/space-invaders.dir/src/laser.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaurav/projects/space-invaders/src/laser.cpp > CMakeFiles/space-invaders.dir/src/laser.cpp.i

CMakeFiles/space-invaders.dir/src/laser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/space-invaders.dir/src/laser.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaurav/projects/space-invaders/src/laser.cpp -o CMakeFiles/space-invaders.dir/src/laser.cpp.s

CMakeFiles/space-invaders.dir/src/main.cpp.o: CMakeFiles/space-invaders.dir/flags.make
CMakeFiles/space-invaders.dir/src/main.cpp.o: /Users/gaurav/projects/space-invaders/src/main.cpp
CMakeFiles/space-invaders.dir/src/main.cpp.o: CMakeFiles/space-invaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/space-invaders.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/space-invaders.dir/src/main.cpp.o -MF CMakeFiles/space-invaders.dir/src/main.cpp.o.d -o CMakeFiles/space-invaders.dir/src/main.cpp.o -c /Users/gaurav/projects/space-invaders/src/main.cpp

CMakeFiles/space-invaders.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/space-invaders.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaurav/projects/space-invaders/src/main.cpp > CMakeFiles/space-invaders.dir/src/main.cpp.i

CMakeFiles/space-invaders.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/space-invaders.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaurav/projects/space-invaders/src/main.cpp -o CMakeFiles/space-invaders.dir/src/main.cpp.s

CMakeFiles/space-invaders.dir/src/spaceship.cpp.o: CMakeFiles/space-invaders.dir/flags.make
CMakeFiles/space-invaders.dir/src/spaceship.cpp.o: /Users/gaurav/projects/space-invaders/src/spaceship.cpp
CMakeFiles/space-invaders.dir/src/spaceship.cpp.o: CMakeFiles/space-invaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/space-invaders.dir/src/spaceship.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/space-invaders.dir/src/spaceship.cpp.o -MF CMakeFiles/space-invaders.dir/src/spaceship.cpp.o.d -o CMakeFiles/space-invaders.dir/src/spaceship.cpp.o -c /Users/gaurav/projects/space-invaders/src/spaceship.cpp

CMakeFiles/space-invaders.dir/src/spaceship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/space-invaders.dir/src/spaceship.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gaurav/projects/space-invaders/src/spaceship.cpp > CMakeFiles/space-invaders.dir/src/spaceship.cpp.i

CMakeFiles/space-invaders.dir/src/spaceship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/space-invaders.dir/src/spaceship.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gaurav/projects/space-invaders/src/spaceship.cpp -o CMakeFiles/space-invaders.dir/src/spaceship.cpp.s

# Object files for target space-invaders
space__invaders_OBJECTS = \
"CMakeFiles/space-invaders.dir/src/alien.cpp.o" \
"CMakeFiles/space-invaders.dir/src/block.cpp.o" \
"CMakeFiles/space-invaders.dir/src/bunker.cpp.o" \
"CMakeFiles/space-invaders.dir/src/game.cpp.o" \
"CMakeFiles/space-invaders.dir/src/laser.cpp.o" \
"CMakeFiles/space-invaders.dir/src/main.cpp.o" \
"CMakeFiles/space-invaders.dir/src/spaceship.cpp.o"

# External object files for target space-invaders
space__invaders_EXTERNAL_OBJECTS =

space-invaders: CMakeFiles/space-invaders.dir/src/alien.cpp.o
space-invaders: CMakeFiles/space-invaders.dir/src/block.cpp.o
space-invaders: CMakeFiles/space-invaders.dir/src/bunker.cpp.o
space-invaders: CMakeFiles/space-invaders.dir/src/game.cpp.o
space-invaders: CMakeFiles/space-invaders.dir/src/laser.cpp.o
space-invaders: CMakeFiles/space-invaders.dir/src/main.cpp.o
space-invaders: CMakeFiles/space-invaders.dir/src/spaceship.cpp.o
space-invaders: CMakeFiles/space-invaders.dir/build.make
space-invaders: /Users/gaurav/projects/space-invaders/lib/libraylib.a
space-invaders: CMakeFiles/space-invaders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/gaurav/projects/space-invaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable space-invaders"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/space-invaders.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/space-invaders.dir/build: space-invaders
.PHONY : CMakeFiles/space-invaders.dir/build

CMakeFiles/space-invaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/space-invaders.dir/cmake_clean.cmake
.PHONY : CMakeFiles/space-invaders.dir/clean

CMakeFiles/space-invaders.dir/depend:
	cd /Users/gaurav/projects/space-invaders/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gaurav/projects/space-invaders /Users/gaurav/projects/space-invaders /Users/gaurav/projects/space-invaders/build /Users/gaurav/projects/space-invaders/build /Users/gaurav/projects/space-invaders/build/CMakeFiles/space-invaders.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/space-invaders.dir/depend

