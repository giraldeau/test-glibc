cmake_minimum_required(VERSION 3.1.0)

if (NOT DEFINED CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE Release CACHE STRING "Build type")
endif ()

project(test-glibc VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Dependencies
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(glibc-version glibc-version.cpp)
target_link_libraries(glibc-version Threads::Threads)
add_executable(glibc-atexit glibc-atexit.cpp)
target_link_libraries(glibc-atexit Threads::Threads dl)
