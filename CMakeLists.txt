cmake_minimum_required(VERSION 3.10)
project(lv_demo)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FOLDER src)
set(INCLUDE_FOLDER include)
set(HELLO_WORLD_DEMO hello_world)

include_directories(${INCLUDE_FOLDER} ../lvgl)

set(SOURCE_FILE ${SOURCE_FOLDER}/${HELLO_WORLD_DEMO}/lv_demo_hello_world.c)

add_library(lv_demo ${SOURCE_FILE})
