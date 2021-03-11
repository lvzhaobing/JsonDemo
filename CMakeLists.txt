cmake_minimum_required (VERSION 3.5)
project (json_demo VERSION 1.0)

# 设置指定的C++编译器版本是必须的，如果不设置，或者为OFF，则指定版本不可用时，会使用上一版本。
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 指定为C++11 版本
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_DIR src)
set(INCLUDE_DIR ${SOURCE_DIR}/include)
set(DATAMODEL_DIR ${SOURCE_DIR}/data_model)

file(GLOB SOURCE_FILE 
    ${SOURCE_DIR}/*.cpp
    ${DATAMODEL_DIR}/*.cpp
)

include_directories(
    ${INCLUDE_DIR}
    ${DATAMODEL_DIR}
)

add_executable(${PROJECT_NAME} ${SOURCE_FILE})