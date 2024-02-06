cmake_minimum_required(VERSION 3.20.0)
#设置项目名称
set(project_name cmake_test)
project(${project_name})
#设置源文件
#set(SRC cmake_test.cpp add.cpp minu.cpp multi.cpp div.cpp)
#设置C++标准
set(CMAKE_CXX_STANDARD 11)
#设置可执行文件输出位置
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin/)

#搜索文件方式1
include_directories(${PROJECT_SOURCE_DIR}/inc)
#aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)

#搜索文件方式2
file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(cmake_test ${SRC})

