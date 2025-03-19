cmake_minimum_required(VERSION 3.30)
project(Filas C)

set(CMAKE_C_STANDARD 11)

add_executable(Filas main.c
        FilaCircular.h
        FilaCircular.c)
