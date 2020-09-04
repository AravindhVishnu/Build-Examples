cmake_minimum_required(VERSION 3.0.0)
project(MyExperiment)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

set(PROJECT_LINK_DLLS libMyDLL.dll)
link_directories(./dll)
 
set(PROJECT_LINK_LIBS libMyStaticLib.a)
link_directories(./lib)

add_compile_options(-Wall -Wextra -pedantic -Werror)

include_directories(./inc)
include_directories(./dll/inc)
include_directories(./lib/inc)

file(GLOB SOURCES "./src/*.cpp")

add_executable(MyExperiment ${SOURCES})
target_link_libraries(MyExperiment ${PROJECT_LINK_LIBS} ${PROJECT_LINK_DLLS})

add_custom_command(TARGET MyExperiment POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    $<TARGET_FILE:MyExperiment>
    "${PROJECT_SOURCE_DIR}/bin/MyExperiment.exe")
