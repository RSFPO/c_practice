cmake_minimum_required(VERSION 3.10)  # 设置最低 CMake 版本
project(013_composite)  # 项目名称

# 指定 C 标准
set(CMAKE_C_STANDARD 99)

# 添加可执行文件
add_executable(013_composite composite.c
        ../014_homework_1/homework_1.c)

