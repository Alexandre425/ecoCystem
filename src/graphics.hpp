#pragma once

#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Handles the window and rendering
class Graphics
{
    public:
        GLFWwindow* window;

        // Initializes glfw and glad
        void init();
        // Frees all graphics related resources
        void terminate();
        // Draws a test triangle in the middle of the screen
        void drawTestTriangle();

    private:
        unsigned int vertex_buffer;

        // Compiled vertex, fragment and program shaders
        unsigned int tri_shader;
};