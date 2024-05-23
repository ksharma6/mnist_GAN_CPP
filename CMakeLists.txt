cmake_minimum_required(VERSION 3.21.3)
project(mnist_gan_app)

set(CMAKE_CXX_STANDARD 17)

add_executable(mnist_gan_app src/main.cpp)
# set_property(TARGET mnist_gan_app PROPERTY CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH bin/)