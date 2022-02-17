#pragma once

#include <memory>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "shader.hpp"
#include "utilities.hpp"

struct Camera
{
    float w, h;
    float x, y, target_x, target_y;
    float zoom, target_zoom;
    const float min_zoom = 1;
    const float max_zoom = 1000;

    // Updates the camera's zoom, ran once per tick
    void update(const float delta);

    Camera();
};

// Handles the window and rendering
class Graphics
{
    public:
        Camera camera;

        GLFWwindow* window;

        // Initializes glfw and glad
        Graphics();
        // Frees all graphics related resources
        ~Graphics();
        void update_cam();
        // Draw test
        void draw_test(float delta);
        // Draws all creatures
        void draw_creatures();

    private:
        unsigned int arrow_VBO;
        unsigned int model_VBO;
        unsigned int color1_VBO;
        unsigned int color2_VBO;

        unsigned int arrow_VAO;

        // Compiled vertex, fragment and program shaders
        std::unique_ptr<Shader> tri_shader;
};