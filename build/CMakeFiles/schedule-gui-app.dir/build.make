# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/skinny/Projects/schedule_gui_app

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/skinny/Projects/schedule_gui_app/build

# Include any dependencies generated for this target.
include CMakeFiles/schedule-gui-app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/schedule-gui-app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/schedule-gui-app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/schedule-gui-app.dir/flags.make

CMakeFiles/schedule-gui-app.dir/src/main.cpp.o: CMakeFiles/schedule-gui-app.dir/flags.make
CMakeFiles/schedule-gui-app.dir/src/main.cpp.o: /home/skinny/Projects/schedule_gui_app/src/main.cpp
CMakeFiles/schedule-gui-app.dir/src/main.cpp.o: CMakeFiles/schedule-gui-app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skinny/Projects/schedule_gui_app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/schedule-gui-app.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/schedule-gui-app.dir/src/main.cpp.o -MF CMakeFiles/schedule-gui-app.dir/src/main.cpp.o.d -o CMakeFiles/schedule-gui-app.dir/src/main.cpp.o -c /home/skinny/Projects/schedule_gui_app/src/main.cpp

CMakeFiles/schedule-gui-app.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/schedule-gui-app.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skinny/Projects/schedule_gui_app/src/main.cpp > CMakeFiles/schedule-gui-app.dir/src/main.cpp.i

CMakeFiles/schedule-gui-app.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/schedule-gui-app.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skinny/Projects/schedule_gui_app/src/main.cpp -o CMakeFiles/schedule-gui-app.dir/src/main.cpp.s

CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o: CMakeFiles/schedule-gui-app.dir/flags.make
CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o: /home/skinny/Projects/schedule_gui_app/src/canvas.cpp
CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o: CMakeFiles/schedule-gui-app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skinny/Projects/schedule_gui_app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o -MF CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o.d -o CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o -c /home/skinny/Projects/schedule_gui_app/src/canvas.cpp

CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skinny/Projects/schedule_gui_app/src/canvas.cpp > CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.i

CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skinny/Projects/schedule_gui_app/src/canvas.cpp -o CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.s

CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o: CMakeFiles/schedule-gui-app.dir/flags.make
CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o: /home/skinny/Projects/schedule_gui_app/src/engine.cpp
CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o: CMakeFiles/schedule-gui-app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skinny/Projects/schedule_gui_app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o -MF CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o.d -o CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o -c /home/skinny/Projects/schedule_gui_app/src/engine.cpp

CMakeFiles/schedule-gui-app.dir/src/engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/schedule-gui-app.dir/src/engine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skinny/Projects/schedule_gui_app/src/engine.cpp > CMakeFiles/schedule-gui-app.dir/src/engine.cpp.i

CMakeFiles/schedule-gui-app.dir/src/engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/schedule-gui-app.dir/src/engine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skinny/Projects/schedule_gui_app/src/engine.cpp -o CMakeFiles/schedule-gui-app.dir/src/engine.cpp.s

# Object files for target schedule-gui-app
schedule__gui__app_OBJECTS = \
"CMakeFiles/schedule-gui-app.dir/src/main.cpp.o" \
"CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o" \
"CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o"

# External object files for target schedule-gui-app
schedule__gui__app_EXTERNAL_OBJECTS =

/home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app: CMakeFiles/schedule-gui-app.dir/src/main.cpp.o
/home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app: CMakeFiles/schedule-gui-app.dir/src/canvas.cpp.o
/home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app: CMakeFiles/schedule-gui-app.dir/src/engine.cpp.o
/home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app: CMakeFiles/schedule-gui-app.dir/build.make
/home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app: /usr/lib/x86_64-linux-gnu/libSDL2.so
/home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app: CMakeFiles/schedule-gui-app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skinny/Projects/schedule_gui_app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable /home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/schedule-gui-app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/schedule-gui-app.dir/build: /home/skinny/Projects/schedule_gui_app/bin/schedule-gui-app
.PHONY : CMakeFiles/schedule-gui-app.dir/build

CMakeFiles/schedule-gui-app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/schedule-gui-app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/schedule-gui-app.dir/clean

CMakeFiles/schedule-gui-app.dir/depend:
	cd /home/skinny/Projects/schedule_gui_app/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skinny/Projects/schedule_gui_app /home/skinny/Projects/schedule_gui_app /home/skinny/Projects/schedule_gui_app/build /home/skinny/Projects/schedule_gui_app/build /home/skinny/Projects/schedule_gui_app/build/CMakeFiles/schedule-gui-app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/schedule-gui-app.dir/depend

