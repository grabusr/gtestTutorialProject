cmake_minimum_required(VERSION 2.8)

set(APP_NAME "App")

project(${APP_NAME})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)

include_directories(${primesLib_SOURCE_DIR})

aux_source_directory(. SRC)

add_executable(${APP_NAME} ${SRC})

target_link_libraries(${APP_NAME} primesLib)

add_dependencies(${APP_NAME} RUN_UnitTests)