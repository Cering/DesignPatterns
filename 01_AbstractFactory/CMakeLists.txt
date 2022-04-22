cmake_minimum_required(VERSION 3.1)

set(TARGET abstract_factory)

project(${TARGET})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE 1)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(${TARGET}
    main.cpp
    ConcreteFactory1.cpp
    ConcreteFactory2.cpp
    ProductA1.cpp
    ProductA2.cpp
    ProductB1.cpp
    ProductB2.cpp
)

add_definitions(
    -g
)