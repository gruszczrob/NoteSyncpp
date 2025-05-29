cmake_minimum_required(VERSION 3.20)

project(NoteSyncpp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src/FilesWorkOn)
add_subdirectory(src/Time)

add_executable(NoteSyncpp src/main.cpp)

target_link_libraries(NoteSyncpp PRIVATE filesWorkOn)
target_link_libraries(NoteSyncpp PRIVATE time)
