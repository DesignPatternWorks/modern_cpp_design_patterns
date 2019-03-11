cmake_minimum_required(VERSION 3.13)
project(abstract_factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstract_factory main.cpp HotDrink.h HotDrinkFactory.h DrinkFactory.h)