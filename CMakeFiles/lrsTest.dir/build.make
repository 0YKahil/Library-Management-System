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
CMAKE_SOURCE_DIR = /home/ykahil/projects/Library-Registration-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ykahil/projects/Library-Registration-System

# Include any dependencies generated for this target.
include CMakeFiles/lrsTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lrsTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lrsTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lrsTest.dir/flags.make

CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o: CMakeFiles/lrsTest.dir/flags.make
CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o: tests/UserTest.cpp
CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o: CMakeFiles/lrsTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ykahil/projects/Library-Registration-System/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o -MF CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o.d -o CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o -c /home/ykahil/projects/Library-Registration-System/tests/UserTest.cpp

CMakeFiles/lrsTest.dir/tests/UserTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lrsTest.dir/tests/UserTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ykahil/projects/Library-Registration-System/tests/UserTest.cpp > CMakeFiles/lrsTest.dir/tests/UserTest.cpp.i

CMakeFiles/lrsTest.dir/tests/UserTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lrsTest.dir/tests/UserTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ykahil/projects/Library-Registration-System/tests/UserTest.cpp -o CMakeFiles/lrsTest.dir/tests/UserTest.cpp.s

CMakeFiles/lrsTest.dir/src/User.cpp.o: CMakeFiles/lrsTest.dir/flags.make
CMakeFiles/lrsTest.dir/src/User.cpp.o: src/User.cpp
CMakeFiles/lrsTest.dir/src/User.cpp.o: CMakeFiles/lrsTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ykahil/projects/Library-Registration-System/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lrsTest.dir/src/User.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lrsTest.dir/src/User.cpp.o -MF CMakeFiles/lrsTest.dir/src/User.cpp.o.d -o CMakeFiles/lrsTest.dir/src/User.cpp.o -c /home/ykahil/projects/Library-Registration-System/src/User.cpp

CMakeFiles/lrsTest.dir/src/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lrsTest.dir/src/User.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ykahil/projects/Library-Registration-System/src/User.cpp > CMakeFiles/lrsTest.dir/src/User.cpp.i

CMakeFiles/lrsTest.dir/src/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lrsTest.dir/src/User.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ykahil/projects/Library-Registration-System/src/User.cpp -o CMakeFiles/lrsTest.dir/src/User.cpp.s

CMakeFiles/lrsTest.dir/src/Book.cpp.o: CMakeFiles/lrsTest.dir/flags.make
CMakeFiles/lrsTest.dir/src/Book.cpp.o: src/Book.cpp
CMakeFiles/lrsTest.dir/src/Book.cpp.o: CMakeFiles/lrsTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ykahil/projects/Library-Registration-System/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lrsTest.dir/src/Book.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lrsTest.dir/src/Book.cpp.o -MF CMakeFiles/lrsTest.dir/src/Book.cpp.o.d -o CMakeFiles/lrsTest.dir/src/Book.cpp.o -c /home/ykahil/projects/Library-Registration-System/src/Book.cpp

CMakeFiles/lrsTest.dir/src/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lrsTest.dir/src/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ykahil/projects/Library-Registration-System/src/Book.cpp > CMakeFiles/lrsTest.dir/src/Book.cpp.i

CMakeFiles/lrsTest.dir/src/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lrsTest.dir/src/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ykahil/projects/Library-Registration-System/src/Book.cpp -o CMakeFiles/lrsTest.dir/src/Book.cpp.s

# Object files for target lrsTest
lrsTest_OBJECTS = \
"CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o" \
"CMakeFiles/lrsTest.dir/src/User.cpp.o" \
"CMakeFiles/lrsTest.dir/src/Book.cpp.o"

# External object files for target lrsTest
lrsTest_EXTERNAL_OBJECTS =

lrsTest: CMakeFiles/lrsTest.dir/tests/UserTest.cpp.o
lrsTest: CMakeFiles/lrsTest.dir/src/User.cpp.o
lrsTest: CMakeFiles/lrsTest.dir/src/Book.cpp.o
lrsTest: CMakeFiles/lrsTest.dir/build.make
lrsTest: CMakeFiles/lrsTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ykahil/projects/Library-Registration-System/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lrsTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lrsTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lrsTest.dir/build: lrsTest
.PHONY : CMakeFiles/lrsTest.dir/build

CMakeFiles/lrsTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lrsTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lrsTest.dir/clean

CMakeFiles/lrsTest.dir/depend:
	cd /home/ykahil/projects/Library-Registration-System && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System/CMakeFiles/lrsTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lrsTest.dir/depend

