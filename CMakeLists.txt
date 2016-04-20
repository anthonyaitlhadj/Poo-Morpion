cmake_minimum_required(VERSION 3.3)
project(Morpion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Joueur.cpp Joueur.h Emplacement.cpp Emplacement.h menu.cpp menu.h)
add_executable(Morpion ${SOURCE_FILES})