cmake_minimum_required(VERSION 2.8)

set(LIB_NAME primesLib)

project(${LIB_NAME})

aux_source_directory(. SRC)

add_library(${LIB_NAME} STATIC ${SRC})