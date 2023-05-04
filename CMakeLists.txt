cmake_minimum_required(VERSION 3.12)
project(CPP-StringExtract)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(str_extr STATIC src/StringExtract.cpp)

add_executable(tests tests/tests.cpp)

# Link the criterion library using the -lcriterion flag
target_link_libraries(tests PRIVATE str_extr -lcriterion)
