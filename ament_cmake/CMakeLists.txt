cmake_minimum_required(VERSION 3.5)
project(clang_tidy_ament_cmake_example)

# Produce a compile_commands.json for all targets below
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# find dependencies
find_package(ament_cmake REQUIRED)

add_executable(my_executable main.cpp)

install(TARGETS my_executable RUNTIME DESTINATION bin)

if(BUILD_TESTING)
  if(UNIX)
    find_package(ament_cmake_clang_tidy REQUIRED)
    ament_clang_tidy("${CMAKE_CURRENT_BINARY_DIR}" CONFIG_FILE my-clang-tidy-config.yaml)
  endif()
endif()

ament_package()
