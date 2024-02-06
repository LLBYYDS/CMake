cmake_minimum_required(VERSION 3.20.0)
#设置项目名称
set(project_name cmake_test)
#设置源文件
set(SRC cmake_test.cpp add.cpp minu.cpp multi.cpp div.cpp)
#设置C++标准
set(CMAKE_CXX_STANDARD 11)
#设置可执行文件输出位置
set(HOME C:/Users/LLB/Desktop/workspace/CMake/ch2_set)
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin/)
project(${project_name})
add_executable(cmake_test ${SRC})

