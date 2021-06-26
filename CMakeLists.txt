cmake_minimum_required(VERSION 3.10)

project(ecoCystem)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-g")

file(GLOB_RECURSE SRC "src/*.cpp")
file(GLOB GLAD "3rd/glad/src/glad.c")

add_executable(ecoCystem ${SRC} ${GLAD})

target_link_libraries(ecoCystem dl glfw)

target_include_directories(ecoCystem PRIVATE "src")
target_include_directories(ecoCystem PRIVATE "3rd/glad/include")