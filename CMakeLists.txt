cmake_minimum_required(VERSION 3.20)
project(cnit_example C)
enable_testing()

set(CMAKE_C_STANDARD 90)

add_executable(cnit_example tests.h main.c another.c cnit/cnit.h cnit/cnit_main.h)
add_test(NAME cnit_example COMMAND cnit_example)
