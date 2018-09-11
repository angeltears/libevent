cmake_minimum_required(VERSION 3.9)
project(libevent)

set(CMAKE_CXX_STANDARD 11)

set(Wall)

add_executable(test1
                    test1.cpp )
target_link_libraries(test1 event)


add_executable(attribute
                    attribute.cc)