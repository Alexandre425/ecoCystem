# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alexandre/ecoCystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexandre/ecoCystem/build

# Include any dependencies generated for this target.
include CMakeFiles/ecoCystem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ecoCystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ecoCystem.dir/flags.make

CMakeFiles/ecoCystem.dir/src/components.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/components.cpp.o: ../src/components.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ecoCystem.dir/src/components.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/components.cpp.o -c /home/alexandre/ecoCystem/src/components.cpp

CMakeFiles/ecoCystem.dir/src/components.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/components.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/components.cpp > CMakeFiles/ecoCystem.dir/src/components.cpp.i

CMakeFiles/ecoCystem.dir/src/components.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/components.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/components.cpp -o CMakeFiles/ecoCystem.dir/src/components.cpp.s

CMakeFiles/ecoCystem.dir/src/creature.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/creature.cpp.o: ../src/creature.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ecoCystem.dir/src/creature.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/creature.cpp.o -c /home/alexandre/ecoCystem/src/creature.cpp

CMakeFiles/ecoCystem.dir/src/creature.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/creature.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/creature.cpp > CMakeFiles/ecoCystem.dir/src/creature.cpp.i

CMakeFiles/ecoCystem.dir/src/creature.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/creature.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/creature.cpp -o CMakeFiles/ecoCystem.dir/src/creature.cpp.s

CMakeFiles/ecoCystem.dir/src/graphics.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/graphics.cpp.o: ../src/graphics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ecoCystem.dir/src/graphics.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/graphics.cpp.o -c /home/alexandre/ecoCystem/src/graphics.cpp

CMakeFiles/ecoCystem.dir/src/graphics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/graphics.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/graphics.cpp > CMakeFiles/ecoCystem.dir/src/graphics.cpp.i

CMakeFiles/ecoCystem.dir/src/graphics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/graphics.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/graphics.cpp -o CMakeFiles/ecoCystem.dir/src/graphics.cpp.s

CMakeFiles/ecoCystem.dir/src/main.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ecoCystem.dir/src/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/main.cpp.o -c /home/alexandre/ecoCystem/src/main.cpp

CMakeFiles/ecoCystem.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/main.cpp > CMakeFiles/ecoCystem.dir/src/main.cpp.i

CMakeFiles/ecoCystem.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/main.cpp -o CMakeFiles/ecoCystem.dir/src/main.cpp.s

CMakeFiles/ecoCystem.dir/src/rng.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/rng.cpp.o: ../src/rng.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ecoCystem.dir/src/rng.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/rng.cpp.o -c /home/alexandre/ecoCystem/src/rng.cpp

CMakeFiles/ecoCystem.dir/src/rng.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/rng.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/rng.cpp > CMakeFiles/ecoCystem.dir/src/rng.cpp.i

CMakeFiles/ecoCystem.dir/src/rng.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/rng.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/rng.cpp -o CMakeFiles/ecoCystem.dir/src/rng.cpp.s

CMakeFiles/ecoCystem.dir/src/shader.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/shader.cpp.o: ../src/shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ecoCystem.dir/src/shader.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/shader.cpp.o -c /home/alexandre/ecoCystem/src/shader.cpp

CMakeFiles/ecoCystem.dir/src/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/shader.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/shader.cpp > CMakeFiles/ecoCystem.dir/src/shader.cpp.i

CMakeFiles/ecoCystem.dir/src/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/shader.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/shader.cpp -o CMakeFiles/ecoCystem.dir/src/shader.cpp.s

CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.o: ../src/systems/movement_system.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.o -c /home/alexandre/ecoCystem/src/systems/movement_system.cpp

CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/systems/movement_system.cpp > CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.i

CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/systems/movement_system.cpp -o CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.s

CMakeFiles/ecoCystem.dir/src/systems/system.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/systems/system.cpp.o: ../src/systems/system.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ecoCystem.dir/src/systems/system.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/systems/system.cpp.o -c /home/alexandre/ecoCystem/src/systems/system.cpp

CMakeFiles/ecoCystem.dir/src/systems/system.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/systems/system.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/systems/system.cpp > CMakeFiles/ecoCystem.dir/src/systems/system.cpp.i

CMakeFiles/ecoCystem.dir/src/systems/system.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/systems/system.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/systems/system.cpp -o CMakeFiles/ecoCystem.dir/src/systems/system.cpp.s

CMakeFiles/ecoCystem.dir/src/user_interface.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/user_interface.cpp.o: ../src/user_interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ecoCystem.dir/src/user_interface.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/user_interface.cpp.o -c /home/alexandre/ecoCystem/src/user_interface.cpp

CMakeFiles/ecoCystem.dir/src/user_interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/user_interface.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/user_interface.cpp > CMakeFiles/ecoCystem.dir/src/user_interface.cpp.i

CMakeFiles/ecoCystem.dir/src/user_interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/user_interface.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/user_interface.cpp -o CMakeFiles/ecoCystem.dir/src/user_interface.cpp.s

CMakeFiles/ecoCystem.dir/src/world.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/src/world.cpp.o: ../src/world.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ecoCystem.dir/src/world.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/src/world.cpp.o -c /home/alexandre/ecoCystem/src/world.cpp

CMakeFiles/ecoCystem.dir/src/world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/src/world.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/src/world.cpp > CMakeFiles/ecoCystem.dir/src/world.cpp.i

CMakeFiles/ecoCystem.dir/src/world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/src/world.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/src/world.cpp -o CMakeFiles/ecoCystem.dir/src/world.cpp.s

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.o: ../3rd/imgui/imgui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.o -c /home/alexandre/ecoCystem/3rd/imgui/imgui.cpp

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/3rd/imgui/imgui.cpp > CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.i

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/3rd/imgui/imgui.cpp -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.s

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.o: ../3rd/imgui/imgui_demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.o -c /home/alexandre/ecoCystem/3rd/imgui/imgui_demo.cpp

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/3rd/imgui/imgui_demo.cpp > CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.i

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/3rd/imgui/imgui_demo.cpp -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.s

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.o: ../3rd/imgui/imgui_draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.o -c /home/alexandre/ecoCystem/3rd/imgui/imgui_draw.cpp

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/3rd/imgui/imgui_draw.cpp > CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.i

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/3rd/imgui/imgui_draw.cpp -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.s

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.o: ../3rd/imgui/imgui_tables.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.o -c /home/alexandre/ecoCystem/3rd/imgui/imgui_tables.cpp

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/3rd/imgui/imgui_tables.cpp > CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.i

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/3rd/imgui/imgui_tables.cpp -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.s

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.o: ../3rd/imgui/imgui_widgets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.o -c /home/alexandre/ecoCystem/3rd/imgui/imgui_widgets.cpp

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/3rd/imgui/imgui_widgets.cpp > CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.i

CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/3rd/imgui/imgui_widgets.cpp -o CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.s

CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.o: ../3rd/imgui/backends/imgui_impl_opengl3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.o -c /home/alexandre/ecoCystem/3rd/imgui/backends/imgui_impl_opengl3.cpp

CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/3rd/imgui/backends/imgui_impl_opengl3.cpp > CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.i

CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/3rd/imgui/backends/imgui_impl_opengl3.cpp -o CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.s

CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.o: ../3rd/imgui/backends/imgui_impl_glfw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.o -c /home/alexandre/ecoCystem/3rd/imgui/backends/imgui_impl_glfw.cpp

CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandre/ecoCystem/3rd/imgui/backends/imgui_impl_glfw.cpp > CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.i

CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandre/ecoCystem/3rd/imgui/backends/imgui_impl_glfw.cpp -o CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.s

CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.o: CMakeFiles/ecoCystem.dir/flags.make
CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.o: ../3rd/glad/src/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.o"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.o   -c /home/alexandre/ecoCystem/3rd/glad/src/glad.c

CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.i"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alexandre/ecoCystem/3rd/glad/src/glad.c > CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.i

CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.s"
	/bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alexandre/ecoCystem/3rd/glad/src/glad.c -o CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.s

# Object files for target ecoCystem
ecoCystem_OBJECTS = \
"CMakeFiles/ecoCystem.dir/src/components.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/creature.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/graphics.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/main.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/rng.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/shader.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/systems/system.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/user_interface.cpp.o" \
"CMakeFiles/ecoCystem.dir/src/world.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.o" \
"CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.o"

# External object files for target ecoCystem
ecoCystem_EXTERNAL_OBJECTS =

ecoCystem: CMakeFiles/ecoCystem.dir/src/components.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/creature.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/graphics.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/main.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/rng.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/shader.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/systems/movement_system.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/systems/system.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/user_interface.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/src/world.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/imgui/imgui.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_demo.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_draw.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_tables.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/imgui/imgui_widgets.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_opengl3.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/imgui/backends/imgui_impl_glfw.cpp.o
ecoCystem: CMakeFiles/ecoCystem.dir/3rd/glad/src/glad.c.o
ecoCystem: CMakeFiles/ecoCystem.dir/build.make
ecoCystem: CMakeFiles/ecoCystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexandre/ecoCystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX executable ecoCystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ecoCystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ecoCystem.dir/build: ecoCystem

.PHONY : CMakeFiles/ecoCystem.dir/build

CMakeFiles/ecoCystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ecoCystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ecoCystem.dir/clean

CMakeFiles/ecoCystem.dir/depend:
	cd /home/alexandre/ecoCystem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexandre/ecoCystem /home/alexandre/ecoCystem /home/alexandre/ecoCystem/build /home/alexandre/ecoCystem/build /home/alexandre/ecoCystem/build/CMakeFiles/ecoCystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ecoCystem.dir/depend

