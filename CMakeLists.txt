cmake_minimum_required(VERSION 3.5)
project(TextAdventure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Player.cpp Player.h PlayerOptions.h Game.cpp Game.h)
add_executable(TextAdventure ${SOURCE_FILES})