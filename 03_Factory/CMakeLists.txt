cmake_minimum_required(VERSION 3.1)

set(TARGET factory)

project(${TARGET})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE 1)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(${TARGET}
    main.cpp
    ConcreteCreator.cpp
    ConcreteProduct1.cpp
    ConcreteProduct2.cpp
)

add_definitions(
    -g
)

add_test(
    NAME ${TARGET}_test
    COMMAND ${TARGET}
)