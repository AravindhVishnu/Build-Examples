cmake_minimum_required(VERSION 3.0.0)
project(MyDLL)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

add_compile_options(-Wall -Wextra -pedantic -Werror)

include_directories(./inc)

file(GLOB SOURCES "./src/*.cpp")

add_library(MyDLL SHARED ${SOURCES})

add_custom_command(TARGET MyDLL POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    $<TARGET_FILE:MyDLL>
    "${PROJECT_SOURCE_DIR}/../MyExperiment/bin/libMyDLL.so")

add_custom_command(TARGET MyDLL POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    $<TARGET_FILE:MyDLL>
    "${PROJECT_SOURCE_DIR}/../MyExperiment/dll/libMyDLL.so")

add_custom_command(TARGET MyDLL POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    $<TARGET_FILE:MyDLL>
    "${PROJECT_SOURCE_DIR}/bin/libMyDLL.so")

file(GLOB MY_DLL_INC "./inc/*.h")
file(COPY ${MY_DLL_INC} DESTINATION "../../MyExperiment/dll/inc")