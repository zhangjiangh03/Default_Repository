cmake_minimum_required(VERSION 3.5)

project(Project-20230505-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Project-20230505-1 main.cpp)

install(TARGETS Project-20230505-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
