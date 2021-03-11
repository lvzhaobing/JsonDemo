cmake_minimum_required (VERSION 2.6)
project (mq_demo)
set(INCLUDE_DIR include)
include_directories(
    ${INCLUDE_DIR}
)
add_executable(${PROJECT_NAME} main.cpp)