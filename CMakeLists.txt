cmake_minimum_required(VERSION 3.8)
project(umc_wx)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/api.h src/handler.h src/message/baseMessage.h src/message/normalMessage.cpp src/message/normalMessage.h)
add_executable(umc_wx ${SOURCE_FILES})
target_link_libraries(umc_wx curl)