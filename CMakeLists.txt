cmake_minimum_required(VERSION 3.8)
project(contacts)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Field.cpp Field.h Entry.cpp Entry.h)
add_executable(contacts ${SOURCE_FILES})