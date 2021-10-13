cmake_minimum_required(VERSION "3.21.3")
project("Assignment")

set(SOURCE_FILES main.cpp)
include_directories(InRec)
add_subdirectory(InRec)

add_executable("${PROJECT_NAME}" "${SOURCE_FILES}")