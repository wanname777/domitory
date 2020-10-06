cmake_minimum_required(VERSION 3.17)
project(domitory)

set(CMAKE_CXX_STANDARD 14)

add_executable(domitory main.cpp sqList.cpp sqList.h node.cpp node.h index.cpp index.h)