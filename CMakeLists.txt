cmake_minimum_required(VERSION 3.20)
project(TexChat VERSION 1.0.0)

find_package(Curses)

set(CMAKE_C_FLAGS "-Wall -Wextra -O2 -lncurses")
add_executable(tchat src/main.c)