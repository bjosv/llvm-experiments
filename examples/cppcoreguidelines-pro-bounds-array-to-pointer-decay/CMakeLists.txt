cmake_minimum_required(VERSION 3.14)
project(example)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add_compile_options(-Wall -Wextra -pedantic -Werror -Wunused -Wunused-function)

add_executable(example
  main.cc
)
