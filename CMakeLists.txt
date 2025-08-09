cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE /home/marcel/extern/vcpkg/scripts/buildsystems/vcpkg.cmake)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(proj)

include_directories(include)

add_subdirectory(lib)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

