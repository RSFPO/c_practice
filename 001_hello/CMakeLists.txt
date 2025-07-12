cmake_minimum_required(VERSION 3.10)  # 设置最低 CMake 版本
project(001_hello)  # 项目名称

# 指定 C 标准
set(CMAKE_C_STANDARD 99)

# 添加可执行文件
add_executable(hello_world hello.c
        ../003_subtract/subtraction.c)

