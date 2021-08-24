cmake_minimum_required(VERSION 3.6.3)
project(clang_tidy_pure_cmake_command_line_example)

add_executable(my_executable main.cpp)

install(TARGETS my_executable RUNTIME DESTINATION bin)
