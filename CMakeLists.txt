cmake_minimum_required(VERSION 3.22)
project(CPP)

# 执行shell命令排序并取最大编号的.cpp文件
execute_process(
    COMMAND bash -c "ls -v ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp | tail -n 1 | tr -d '\n'"
    OUTPUT_VARIABLE MAX_CPP_FILE
    ERROR_QUIET
)

# 检查是否找到了文件
if(NOT MAX_CPP_FILE STREQUAL "")
    message(STATUS "Found max numbered file: ${MAX_CPP_FILE}")

    # 从完整路径中提取文件名（如果需要）
    # get_filename_component(MAX_CPP_FILENAME ${MAX_CPP_FILE} NAME)

    # 添加编译目标
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")
    add_executable(${PROJECT_NAME} ${MAX_CPP_FILE})

else()
    message(FATAL_ERROR "No .cpp files found in the directory!")

endif()
