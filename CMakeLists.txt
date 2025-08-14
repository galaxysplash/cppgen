cmake_minimum_required(VERSION 3.28)
project(cpp-gen)

include_directories(include)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES src/*.cpp*)
add_executable(${PROJECT_NAME} ${SOURCES})


