cmake_minimum_required(VERSION 3.6.3)
project(clang_tidy_ament_cmake_what_if_example)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_clang_tidy REQUIRED)

## Enable clang-tidy for all targets below
## Letting clang-tidy find and use any `.clang-tidy` files it comes across
# ament_enable_clang_tidy()

## OR
## Using a specific clang-tidy config file
# ament_enable_clang_tidy(
#   CONFIG clang-tidy.yaml
# )

## OR
## Using specifc checks in CMake instead of a config file
# ament_enable_clang_tidy(
#   CHECKS bugprone-sizeof-expression bugprone-sizeof-container
# )

add_executable(my_executable main.cpp)
## Enable clang-tidy for just this target 
# ament_enable_clang_tidy(my_executable)

## OR
# ament_enable_clang_tidy(my_executable
#   CONFIG clang-tidy.yaml
# )

## OR
# ament_enable_clang_tidy(my_executable
#   CHECKS bugprone-sizeof-expression bugprone-sizeof-container
# )

install(TARGETS my_executable RUNTIME DESTINATION bin)

ament_package()
