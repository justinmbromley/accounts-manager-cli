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
include CMakeFiles/accounts_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/accounts_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/accounts_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/accounts_test.dir/flags.make

CMakeFiles/accounts_test.dir/src/Account.cpp.o: CMakeFiles/accounts_test.dir/flags.make
CMakeFiles/accounts_test.dir/src/Account.cpp.o: /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Account.cpp
CMakeFiles/accounts_test.dir/src/Account.cpp.o: CMakeFiles/accounts_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/accounts_test.dir/src/Account.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/accounts_test.dir/src/Account.cpp.o -MF CMakeFiles/accounts_test.dir/src/Account.cpp.o.d -o CMakeFiles/accounts_test.dir/src/Account.cpp.o -c /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Account.cpp

CMakeFiles/accounts_test.dir/src/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/accounts_test.dir/src/Account.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Account.cpp > CMakeFiles/accounts_test.dir/src/Account.cpp.i

CMakeFiles/accounts_test.dir/src/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/accounts_test.dir/src/Account.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Account.cpp -o CMakeFiles/accounts_test.dir/src/Account.cpp.s

CMakeFiles/accounts_test.dir/src/Accounts.cpp.o: CMakeFiles/accounts_test.dir/flags.make
CMakeFiles/accounts_test.dir/src/Accounts.cpp.o: /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Accounts.cpp
CMakeFiles/accounts_test.dir/src/Accounts.cpp.o: CMakeFiles/accounts_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/accounts_test.dir/src/Accounts.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/accounts_test.dir/src/Accounts.cpp.o -MF CMakeFiles/accounts_test.dir/src/Accounts.cpp.o.d -o CMakeFiles/accounts_test.dir/src/Accounts.cpp.o -c /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Accounts.cpp

CMakeFiles/accounts_test.dir/src/Accounts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/accounts_test.dir/src/Accounts.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Accounts.cpp > CMakeFiles/accounts_test.dir/src/Accounts.cpp.i

CMakeFiles/accounts_test.dir/src/Accounts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/accounts_test.dir/src/Accounts.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bromastone/Documents/cpp-projects/accounts-manager-cli/src/Accounts.cpp -o CMakeFiles/accounts_test.dir/src/Accounts.cpp.s

CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o: CMakeFiles/accounts_test.dir/flags.make
CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o: /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp
CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o: CMakeFiles/accounts_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o -MF CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o.d -o CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o -c /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp

CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp > CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.i

CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bromastone/Documents/cpp-projects/accounts-manager-cli/tests/Accounts.test.cpp -o CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.s

# Object files for target accounts_test
accounts_test_OBJECTS = \
"CMakeFiles/accounts_test.dir/src/Account.cpp.o" \
"CMakeFiles/accounts_test.dir/src/Accounts.cpp.o" \
"CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o"

# External object files for target accounts_test
accounts_test_EXTERNAL_OBJECTS =

accounts_test: CMakeFiles/accounts_test.dir/src/Account.cpp.o
accounts_test: CMakeFiles/accounts_test.dir/src/Accounts.cpp.o
accounts_test: CMakeFiles/accounts_test.dir/tests/Accounts.test.cpp.o
accounts_test: CMakeFiles/accounts_test.dir/build.make
accounts_test: lib/libgtest_main.a
accounts_test: lib/libgtest.a
accounts_test: CMakeFiles/accounts_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable accounts_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/accounts_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/accounts_test.dir/build: accounts_test
.PHONY : CMakeFiles/accounts_test.dir/build

CMakeFiles/accounts_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/accounts_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/accounts_test.dir/clean

CMakeFiles/accounts_test.dir/depend:
	cd /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bromastone/Documents/cpp-projects/accounts-manager-cli /home/bromastone/Documents/cpp-projects/accounts-manager-cli /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/CMakeFiles/accounts_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/accounts_test.dir/depend

