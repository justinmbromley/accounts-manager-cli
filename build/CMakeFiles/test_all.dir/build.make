# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bromastone/Documents/cpp-projects/accounts-manager-cli

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build

# Include any dependencies generated for this target.
include CMakeFiles/test_all.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_all.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_all.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_all.dir/flags.make

CMakeFiles/test_all.dir/tests/Account.test.cpp.o: CMakeFiles/test_all.dir/flags.make
CMakeFiles/test_all.dir/tests/Account.test.cpp.o: /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Account.test.cpp
CMakeFiles/test_all.dir/tests/Account.test.cpp.o: CMakeFiles/test_all.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_all.dir/tests/Account.test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_all.dir/tests/Account.test.cpp.o -MF CMakeFiles/test_all.dir/tests/Account.test.cpp.o.d -o CMakeFiles/test_all.dir/tests/Account.test.cpp.o -c /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Account.test.cpp

CMakeFiles/test_all.dir/tests/Account.test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_all.dir/tests/Account.test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Account.test.cpp > CMakeFiles/test_all.dir/tests/Account.test.cpp.i

CMakeFiles/test_all.dir/tests/Account.test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_all.dir/tests/Account.test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Account.test.cpp -o CMakeFiles/test_all.dir/tests/Account.test.cpp.s

CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o: CMakeFiles/test_all.dir/flags.make
CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o: /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp
CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o: CMakeFiles/test_all.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o -MF CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o.d -o CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o -c /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp

CMakeFiles/test_all.dir/tests/Accounts.test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_all.dir/tests/Accounts.test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp > CMakeFiles/test_all.dir/tests/Accounts.test.cpp.i

CMakeFiles/test_all.dir/tests/Accounts.test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_all.dir/tests/Accounts.test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp -o CMakeFiles/test_all.dir/tests/Accounts.test.cpp.s

# Object files for target test_all
test_all_OBJECTS = \
"CMakeFiles/test_all.dir/tests/Account.test.cpp.o" \
"CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o"

# External object files for target test_all
test_all_EXTERNAL_OBJECTS =

tests/test_all: CMakeFiles/test_all.dir/tests/Account.test.cpp.o
tests/test_all: CMakeFiles/test_all.dir/tests/Accounts.test.cpp.o
tests/test_all: CMakeFiles/test_all.dir/build.make
tests/test_all: lib/libgtest_main.a
tests/test_all: lib/libgtest.a
tests/test_all: CMakeFiles/test_all.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tests/test_all"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_all.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_all.dir/build: tests/test_all
.PHONY : CMakeFiles/test_all.dir/build

CMakeFiles/test_all.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_all.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_all.dir/clean

CMakeFiles/test_all.dir/depend:
	cd /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bromastone/Documents/cpp-projects/accounts-manager-cli /home/bromastone/Documents/cpp-projects/accounts-manager-cli /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles/test_all.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_all.dir/depend
