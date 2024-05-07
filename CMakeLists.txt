# CMake version
cmake_minimum_required(VERSION 3.29.2)
project(int_add)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Defining source and test directories
set(${src_dir} CMAKE_CURRENT_SOURCE_DIR)
set(${test_dir} CMAKE_CURRENT_SOURCE_DIR/tests)

# SOURCE
add_executable(
	int_add
	${src_dir}/add.h
	${src_dir}/add.cpp
	${src_dir}/main.cpp
)

# TESTING
include(FetchContent)
FetchContent_Declare(
    googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
	int_add_test
	src/add.h
	src/add.cpp
	${test_dir}/add.test.cpp
)

target_link_libraries(
	int_add_test
	GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(int_add_test)
