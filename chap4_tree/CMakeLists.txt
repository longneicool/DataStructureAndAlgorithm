cmake_minimum_required(VERSION 2.8)

project(tree)

SET(ROOT_DIR ../../)

FILE(GLOB_RECURSE SOURCE_FILES code/*.cpp testcase/*.cpp)
FILE(GLOB_RECURSE HEAD_FILES code/*.h testcase/*.h)

include_directories(
    gtest/
    code/
    )
add_executable(tree ${SOURCE_FILES} ${HEAD_FILES})
target_link_libraries(tree gtest)
target_link_libraries(tree pthread)
add_test(NAME tree COMMAND tree)
