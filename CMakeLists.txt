# CMake version
cmake_minimum_required(VERSION 3.29.2)
project(accounts_manager_cli)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Defining source and test directories
set(src_dir ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(test_dir ${CMAKE_CURRENT_SOURCE_DIR}/tests)

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
    account_test
    ${src_dir}/Account.cpp
    ${test_dir}/Account.test.cpp
)

add_executable(
    accounts_test
    ${src_dir}/Account.cpp
    ${src_dir}/Accounts.cpp
    ${test_dir}/Accounts.test.cpp
)

add_executable(
    account_id_validator_test
    ${src_dir}/Account.cpp
    ${src_dir}/Accounts.cpp
    ${src_dir}/AccountIDValidator.cpp
    ${test_dir}/AccountIDValidator.test.cpp
)

add_executable(
    account_id_generator_test
    ${src_dir}/AccountIDGenerator.cpp
    ${test_dir}/AccountIDGenerator.test.cpp
)

add_executable(
    new_account_id_generator_test
    ${src_dir}/Account.cpp
    ${src_dir}/Accounts.cpp
    ${src_dir}/AccountIDGenerator.cpp
    ${src_dir}/AccountIDValidator.cpp
    ${src_dir}/NewAccountIDGenerator.cpp
    ${test_dir}/NewAccountIDGenerator.test.cpp
)

add_executable(
    accounts_getter_by_name_test
    ${src_dir}/Account.cpp
    ${src_dir}/Accounts.cpp
    ${src_dir}/AccountsGetterByName.cpp
    ${test_dir}/AccountsGetterByName.test.cpp
)

target_link_libraries(
    account_test
    GTest::gtest_main
)

target_link_libraries(
    accounts_test
    GTest::gtest_main
)

target_link_libraries(
    account_id_validator_test
    GTest::gtest_main
)

target_link_libraries(
    account_id_generator_test
    GTest::gtest_main
)

target_link_libraries(
    new_account_id_generator_test
    GTest::gtest_main
)

target_link_libraries(
    accounts_getter_by_name_test
    GTest::gtest_main
)