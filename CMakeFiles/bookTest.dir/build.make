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
include CMakeFiles/bookTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bookTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bookTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bookTest.dir/flags.make

CMakeFiles/bookTest.dir/tests/BookTest.cpp.o: CMakeFiles/bookTest.dir/flags.make
CMakeFiles/bookTest.dir/tests/BookTest.cpp.o: tests/BookTest.cpp
CMakeFiles/bookTest.dir/tests/BookTest.cpp.o: CMakeFiles/bookTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ykahil/projects/Library-Registration-System/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bookTest.dir/tests/BookTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bookTest.dir/tests/BookTest.cpp.o -MF CMakeFiles/bookTest.dir/tests/BookTest.cpp.o.d -o CMakeFiles/bookTest.dir/tests/BookTest.cpp.o -c /home/ykahil/projects/Library-Registration-System/tests/BookTest.cpp

CMakeFiles/bookTest.dir/tests/BookTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bookTest.dir/tests/BookTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ykahil/projects/Library-Registration-System/tests/BookTest.cpp > CMakeFiles/bookTest.dir/tests/BookTest.cpp.i

CMakeFiles/bookTest.dir/tests/BookTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bookTest.dir/tests/BookTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ykahil/projects/Library-Registration-System/tests/BookTest.cpp -o CMakeFiles/bookTest.dir/tests/BookTest.cpp.s

CMakeFiles/bookTest.dir/src/Book.cpp.o: CMakeFiles/bookTest.dir/flags.make
CMakeFiles/bookTest.dir/src/Book.cpp.o: src/Book.cpp
CMakeFiles/bookTest.dir/src/Book.cpp.o: CMakeFiles/bookTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ykahil/projects/Library-Registration-System/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bookTest.dir/src/Book.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bookTest.dir/src/Book.cpp.o -MF CMakeFiles/bookTest.dir/src/Book.cpp.o.d -o CMakeFiles/bookTest.dir/src/Book.cpp.o -c /home/ykahil/projects/Library-Registration-System/src/Book.cpp

CMakeFiles/bookTest.dir/src/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bookTest.dir/src/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ykahil/projects/Library-Registration-System/src/Book.cpp > CMakeFiles/bookTest.dir/src/Book.cpp.i

CMakeFiles/bookTest.dir/src/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bookTest.dir/src/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ykahil/projects/Library-Registration-System/src/Book.cpp -o CMakeFiles/bookTest.dir/src/Book.cpp.s

# Object files for target bookTest
bookTest_OBJECTS = \
"CMakeFiles/bookTest.dir/tests/BookTest.cpp.o" \
"CMakeFiles/bookTest.dir/src/Book.cpp.o"

# External object files for target bookTest
bookTest_EXTERNAL_OBJECTS =

bookTest: CMakeFiles/bookTest.dir/tests/BookTest.cpp.o
bookTest: CMakeFiles/bookTest.dir/src/Book.cpp.o
bookTest: CMakeFiles/bookTest.dir/build.make
bookTest: CMakeFiles/bookTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ykahil/projects/Library-Registration-System/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bookTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bookTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bookTest.dir/build: bookTest
.PHONY : CMakeFiles/bookTest.dir/build

CMakeFiles/bookTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bookTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bookTest.dir/clean

CMakeFiles/bookTest.dir/depend:
	cd /home/ykahil/projects/Library-Registration-System && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System /home/ykahil/projects/Library-Registration-System/CMakeFiles/bookTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bookTest.dir/depend
