cmake_minimum_required(VERSION 3.16)

project(ecoCystem)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "")
set(GLAD "3rd/glad/src/glad.cpp")

file(GLOB_RECURSE SRC "src/*.cpp")

add_executable(ecoCystem ${SRC} ${GLAD})

target_link_libraries(ecoCystem dl glfw)

target_include_directories(ecoCystem PRIVATE "src")
target_include_directories(ecoCystem PRIVATE "3rd/glad/include")