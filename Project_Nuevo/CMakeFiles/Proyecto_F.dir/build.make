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
CMAKE_SOURCE_DIR = /home/manuela/Documents/ProyectoALSE/Project_Nuevo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/manuela/Documents/ProyectoALSE/Project_Nuevo

# Include any dependencies generated for this target.
include CMakeFiles/Proyecto_F.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proyecto_F.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proyecto_F.dir/flags.make

CMakeFiles/Proyecto_F.dir/main.cpp.o: CMakeFiles/Proyecto_F.dir/flags.make
CMakeFiles/Proyecto_F.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manuela/Documents/ProyectoALSE/Project_Nuevo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proyecto_F.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto_F.dir/main.cpp.o -c /home/manuela/Documents/ProyectoALSE/Project_Nuevo/main.cpp

CMakeFiles/Proyecto_F.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto_F.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manuela/Documents/ProyectoALSE/Project_Nuevo/main.cpp > CMakeFiles/Proyecto_F.dir/main.cpp.i

CMakeFiles/Proyecto_F.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto_F.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manuela/Documents/ProyectoALSE/Project_Nuevo/main.cpp -o CMakeFiles/Proyecto_F.dir/main.cpp.s

CMakeFiles/Proyecto_F.dir/db_local.cpp.o: CMakeFiles/Proyecto_F.dir/flags.make
CMakeFiles/Proyecto_F.dir/db_local.cpp.o: db_local.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manuela/Documents/ProyectoALSE/Project_Nuevo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Proyecto_F.dir/db_local.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto_F.dir/db_local.cpp.o -c /home/manuela/Documents/ProyectoALSE/Project_Nuevo/db_local.cpp

CMakeFiles/Proyecto_F.dir/db_local.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto_F.dir/db_local.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manuela/Documents/ProyectoALSE/Project_Nuevo/db_local.cpp > CMakeFiles/Proyecto_F.dir/db_local.cpp.i

CMakeFiles/Proyecto_F.dir/db_local.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto_F.dir/db_local.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manuela/Documents/ProyectoALSE/Project_Nuevo/db_local.cpp -o CMakeFiles/Proyecto_F.dir/db_local.cpp.s

# Object files for target Proyecto_F
Proyecto_F_OBJECTS = \
"CMakeFiles/Proyecto_F.dir/main.cpp.o" \
"CMakeFiles/Proyecto_F.dir/db_local.cpp.o"

# External object files for target Proyecto_F
Proyecto_F_EXTERNAL_OBJECTS =

Proyecto_F: CMakeFiles/Proyecto_F.dir/main.cpp.o
Proyecto_F: CMakeFiles/Proyecto_F.dir/db_local.cpp.o
Proyecto_F: CMakeFiles/Proyecto_F.dir/build.make
Proyecto_F: CMakeFiles/Proyecto_F.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/manuela/Documents/ProyectoALSE/Project_Nuevo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Proyecto_F"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Proyecto_F.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proyecto_F.dir/build: Proyecto_F

.PHONY : CMakeFiles/Proyecto_F.dir/build

CMakeFiles/Proyecto_F.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Proyecto_F.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Proyecto_F.dir/clean

CMakeFiles/Proyecto_F.dir/depend:
	cd /home/manuela/Documents/ProyectoALSE/Project_Nuevo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/manuela/Documents/ProyectoALSE/Project_Nuevo /home/manuela/Documents/ProyectoALSE/Project_Nuevo /home/manuela/Documents/ProyectoALSE/Project_Nuevo /home/manuela/Documents/ProyectoALSE/Project_Nuevo /home/manuela/Documents/ProyectoALSE/Project_Nuevo/CMakeFiles/Proyecto_F.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proyecto_F.dir/depend
