cmake_minimum_required(VERSION 3.13)  # CMake version check
project(main)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

link_directories(/opt/nvidia/nsight-compute/2022.1.1/host/linux-desktop-glibc_2_11_3-x64/)
# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(simple_example ${SOURCE_FILES})

target_link_libraries(simple_example tss2-fapi)
