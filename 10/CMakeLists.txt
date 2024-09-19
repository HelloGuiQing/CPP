cmake_minimum_required(VERSION 3.22)
project(10)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../")  # 相对于Makefile的路径
add_executable(10
    main.cpp
    swap.cpp
)