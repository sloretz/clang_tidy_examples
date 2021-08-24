cmake_minimum_required(VERSION 3.6.3)
project(clang_tidy_pure_cmake_all_targets_example)

find_program(CLANG_TIDY_BIN
  NAMES
    clang-tidy
    # Versioned names that have been used in Debian releases of clang-tidy
    clang-tidy-3.8
    clang-tidy-3.9
    clang-tidy-5.0
    clang-tidy-6.0
    clang-tidy-7
    clang-tidy-8
    clang-tidy-9
    clang-tidy-10
    clang-tidy-11
    clang-tidy-12
    clang-tidy-13
    clang-tidy-14)

# Enable clang-tidy on all C++ targets below
set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_BIN};-checks=bugprone-sizeof-expression"
  CACHE STRING "CXX clang-tidy-arguments"
)

# Oh look, a target below
add_executable(my_executable main.cpp)

install(TARGETS my_executable RUNTIME DESTINATION bin)
