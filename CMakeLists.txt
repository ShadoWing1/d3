cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 17)

get_filename_component(DIR ${CMAKE_SOURCE_DIR} NAME)

project(${DIR})

file(GLOB PROJECT_SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp" "${CMAKE_SOURCE_DIR}/src/*.c")

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/include")
