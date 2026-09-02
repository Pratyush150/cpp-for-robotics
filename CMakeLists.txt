cmake_minimum_required(VERSION 3.16)
project(cpp_for_robotics CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_compile_options(-Wall -Wextra -Wpedantic)

# Every .cpp at the top level is a self-contained example and builds
# into its own executable under build/bin/.
file(GLOB EXAMPLE_SOURCES ${CMAKE_SOURCE_DIR}/*.cpp)

# Eigen is optional; the example that needs it is skipped when absent.
find_package(Eigen3 3.3 QUIET NO_MODULE)

foreach(SRC ${EXAMPLE_SOURCES})
  get_filename_component(NAME ${SRC} NAME_WE)
  if(NAME STREQUAL "simple_eigen_example" AND NOT Eigen3_FOUND)
    message(STATUS "Skipping ${NAME}: Eigen3 not found (apt install libeigen3-dev)")
    continue()
  endif()
  add_executable(${NAME} ${SRC})
  if(NAME STREQUAL "simple_eigen_example")
    target_link_libraries(${NAME} Eigen3::Eigen)
  endif()
endforeach()
