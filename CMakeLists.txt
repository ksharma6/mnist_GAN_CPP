cmake_minimum_required(VERSION 3.21.3)
project(mnist_gan_app)

find_package(Torch REQUIRED)
include_directories(SYSTEM ${TORCH_INCLUDE_DIRS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

target_link_libraries(mnist_gan_app "${TORCH_LIBRARIES}")
set_property(TARGET mnist_gan_app PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ../bin/)
add_executable(mnist_gan_app main.cpp)


#add_subdirectory(src/etl)
#add_subdirectory(src/modeling)
#add_subdirectory(src/lib/eigen)

#Add the given directories to those the compiler uses to search for include files.
include_directories(${PROJECT_SOURCE_DIR}/src) 

add_executable(${PROJECT_NAME}
    # src/main.cpp
    # src/etl/etl.cpp
    # src/modeling/log_reg.cpp)

# target_link_libraries(${PROJECT_NAME} 
#     PRIVATE etl
#     PRIVATE log_reg
#     PRIVATE eigen  
#     )