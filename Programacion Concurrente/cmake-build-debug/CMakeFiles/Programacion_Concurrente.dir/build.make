# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Programacion_Concurrente.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Programacion_Concurrente.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Programacion_Concurrente.dir/flags.make

CMakeFiles/Programacion_Concurrente.dir/main.cpp.o: CMakeFiles/Programacion_Concurrente.dir/flags.make
CMakeFiles/Programacion_Concurrente.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Programacion_Concurrente.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Programacion_Concurrente.dir/main.cpp.o -c "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/main.cpp"

CMakeFiles/Programacion_Concurrente.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Programacion_Concurrente.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/main.cpp" > CMakeFiles/Programacion_Concurrente.dir/main.cpp.i

CMakeFiles/Programacion_Concurrente.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Programacion_Concurrente.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/main.cpp" -o CMakeFiles/Programacion_Concurrente.dir/main.cpp.s

CMakeFiles/Programacion_Concurrente.dir/Test.cpp.o: CMakeFiles/Programacion_Concurrente.dir/flags.make
CMakeFiles/Programacion_Concurrente.dir/Test.cpp.o: ../Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Programacion_Concurrente.dir/Test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Programacion_Concurrente.dir/Test.cpp.o -c "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/Test.cpp"

CMakeFiles/Programacion_Concurrente.dir/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Programacion_Concurrente.dir/Test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/Test.cpp" > CMakeFiles/Programacion_Concurrente.dir/Test.cpp.i

CMakeFiles/Programacion_Concurrente.dir/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Programacion_Concurrente.dir/Test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/Test.cpp" -o CMakeFiles/Programacion_Concurrente.dir/Test.cpp.s

# Object files for target Programacion_Concurrente
Programacion_Concurrente_OBJECTS = \
"CMakeFiles/Programacion_Concurrente.dir/main.cpp.o" \
"CMakeFiles/Programacion_Concurrente.dir/Test.cpp.o"

# External object files for target Programacion_Concurrente
Programacion_Concurrente_EXTERNAL_OBJECTS =

Programacion_Concurrente: CMakeFiles/Programacion_Concurrente.dir/main.cpp.o
Programacion_Concurrente: CMakeFiles/Programacion_Concurrente.dir/Test.cpp.o
Programacion_Concurrente: CMakeFiles/Programacion_Concurrente.dir/build.make
Programacion_Concurrente: CMakeFiles/Programacion_Concurrente.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Programacion_Concurrente"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Programacion_Concurrente.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Programacion_Concurrente.dir/build: Programacion_Concurrente

.PHONY : CMakeFiles/Programacion_Concurrente.dir/build

CMakeFiles/Programacion_Concurrente.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Programacion_Concurrente.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Programacion_Concurrente.dir/clean

CMakeFiles/Programacion_Concurrente.dir/depend:
	cd "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2" "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2" "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug" "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug" "/Users/gabrielspranger/Desktop/POO II/Programacion Concurrente 2/cmake-build-debug/CMakeFiles/Programacion_Concurrente.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Programacion_Concurrente.dir/depend

