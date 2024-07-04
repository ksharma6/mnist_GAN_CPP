cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(mnist_gan)

find_package(Torch REQUIRED)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY /home/kishen/documents/projects/c++_projects/mnist_gan/build/bin)

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} "${TORCH_LIBRARIES}")
set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY CXX_STANDARD 17)
