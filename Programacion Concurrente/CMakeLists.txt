cmake_minimum_required(VERSION 3.13)
project(Programacion_Concurrente)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(Programacion_Concurrente main.cpp MatrizAsincrona.h MatrizSincrona.h Test.cpp)