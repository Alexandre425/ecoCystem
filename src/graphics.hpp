#pragma once

#include <memory>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "shader.hpp"

// Handles the window and rendering
class Graphics
{
    public:
        GLFWwindow* window;

        // Initializes glfw and glad
        Graphics();
        // Frees all graphics related resources
        ~Graphics();
        // Draws a test triangle in the middle of the screen
        void drawTestTriangle();

    private:
        unsigned int arrow_VBO;
        unsigned int pos_VBO;
        unsigned int size_VBO;
        unsigned int color_VBO;

        unsigned int arrow_VAO;

        // Compiled vertex, fragment and program shaders
        std::unique_ptr<Shader> tri_shader;
};