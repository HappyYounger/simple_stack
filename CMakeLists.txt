cmake_minimum_required(VERSION 3.12)
project(simple_stack C)

set(CMAKE_C_STANDARD 99)

add_executable(simple_stack main.c simple_stack.h simple_stack.c)