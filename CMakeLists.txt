cmake_minimum_required(VERSION 3.10)
project(lv_demo)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FOLDER .)
set(SOURCE_FILE .)

add_library(lv_demo ${SOURCE_FILE})
