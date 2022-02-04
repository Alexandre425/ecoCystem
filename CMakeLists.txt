cmake_minimum_required(VERSION 3.16)

project(ecoCystem)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "")
set(GLAD "3rd/glad/src/glad.c")

file(GLOB_RECURSE SRC "src/*.cpp")
file(GLOB IMGUI_SRC "3rd/imgui/*.cpp")
file(GLOB IMGUI_GL_SRC "3rd/imgui/backends/imgui_impl_opengl3.cpp")
file(GLOB IMGUI_GLFW_SRC "3rd/imgui/backends/imgui_impl_glfw.cpp")

add_executable(ecoCystem ${SRC} ${IMGUI_SRC} ${IMGUI_GL_SRC} ${IMGUI_GLFW_SRC} ${GLAD})

target_link_libraries(ecoCystem dl glfw)

target_include_directories(ecoCystem PRIVATE "src")
target_include_directories(ecoCystem PRIVATE "3rd/glad/include")
target_include_directories(ecoCystem PRIVATE "3rd/glm")
target_include_directories(ecoCystem PRIVATE "3rd/imgui")