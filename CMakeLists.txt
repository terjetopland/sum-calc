cmake_minimum_required(VERSION 3.20)
project(testForFunksjonEkstern C)

set(CMAKE_C_STANDARD 99)

add_executable(testForFunksjonEkstern main.c Funksjoner.c Funksjoner.h)
