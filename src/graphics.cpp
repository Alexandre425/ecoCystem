#include <iostream>

#include "graphics.hpp"

void resize_callback(GLFWwindow *window, int w, int h)
{
    glViewport(0, 0, w, h);
}

void Graphics::initialize()
{
    glfwInit();
    // Configure openGL with version 4.6 and only core functionality
    glfwInitHint(GLFW_VERSION_MAJOR, 4);
    glfwInitHint(GLFW_VERSION_MINOR, 6);
    glfwInitHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(800, 600, "ecoCystem", NULL, NULL);
    glfwMakeContextCurrent(window);

    // Configure glad
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(window, resize_callback);
}
