#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Handles the window and rendering
class Graphics
{
    public:
        GLFWwindow* window;

        // Initializes glfw and glad
        void initialize();
};