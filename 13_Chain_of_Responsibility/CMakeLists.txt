cmake_minimum_required(VERSION 3.1)

set(TARGET chain_of_responsibility)

project(${TARGET})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE 1)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(${TARGET}
    main.cpp
    ConcreteHandler1.cpp
    ConcreteHandler2.cpp
    Handler.cpp
)

add_definitions(
    -g
)