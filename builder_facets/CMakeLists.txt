cmake_minimum_required(VERSION 3.13)
project(builder_facets)

set(CMAKE_CXX_STANDARD 14)

add_executable(builder_facets main.cpp Person.cpp Person.h PersonBuilder.cpp PersonBuilder.h PersonJobBuilder.h PersonAddressBuilder.h)