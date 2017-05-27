cmake_minimum_required(VERSION 2.8)

set(TEST_NAME "UnitTests")

project(${TEST_NAME})

aux_source_directory(. SRC)

include_directories(${gtest_SOURCE_DIR}/include)
include_directories(${gmock_SOURCE_DIR}/include)
include_directories(${primesLib_SOURCE_DIR})

add_executable(${TEST_NAME} ${SRC})

target_link_libraries(${TEST_NAME} gmock gmock_main)
target_link_libraries(${TEST_NAME} primesLib)

add_custom_target(RUN_${TEST_NAME}
        COMMAND ${TEST_NAME}
        COMMENT "Runnning " ${TEST_NAME})