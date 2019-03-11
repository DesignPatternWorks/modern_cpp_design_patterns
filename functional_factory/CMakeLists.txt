cmake_minimum_required(VERSION 3.13)
project(functional_factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(functional_factory main.cpp DrinkFactory.h HotDrink.h HotDrinkFactory.h)