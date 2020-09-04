cmake_minimum_required(VERSION 3.0.0)
project(MyStaticLib)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

add_compile_options(-Wall -Wextra -pedantic -Werror)

include_directories(./inc)

file(GLOB SOURCES "./src/*.cpp")

add_library(MyStaticLib STATIC ${SOURCES})

add_custom_command(TARGET MyStaticLib POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    $<TARGET_FILE:MyStaticLib>
    "${PROJECT_SOURCE_DIR}/../MyExperiment/lib/libMyStaticLib.a")

add_custom_command(TARGET MyStaticLib POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    $<TARGET_FILE:MyStaticLib>
    "${PROJECT_SOURCE_DIR}/bin/libMyStaticLib.a")

file(GLOB MY_LIB_INC "./inc/*.h")
file(COPY ${MY_LIB_INC} DESTINATION "../../MyExperiment/lib/inc")