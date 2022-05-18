cmake_minimum_required(VERSION 3.1)

set(TARGET interpreter)

project(${TARGET})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE 1)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(${TARGET}
    main.cpp
    Context.cpp
    NoTerminalExpressionPlus.cpp
    TerminalExpressionConstant.cpp
    TerminalExpressionVariable.cpp
)

add_definitions(
    -g
)