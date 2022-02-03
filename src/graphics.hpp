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
    const float min_zoom = 10;
    const float max_zoom = 1000;

    // Updates the camera's zoom, ran once per tick
    void update(const float delta)
    {
        const float K = 10;
        zoom = low_pass_filter(zoom, target_zoom, K, delta);
        x = low_pass_filter(x, target_x, K, delta);
        y = low_pass_filter(y, target_y, K, delta);
    }

    Camera()
    {
        x = y = target_x = target_y = 0;
        zoom = target_zoom = max_zoom;
        w = 800; h = 600;
    }
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

    private:
        unsigned int arrow_VBO;
        unsigned int model_VBO;
        unsigned int color_VBO;

        unsigned int arrow_VAO;

        // Compiled vertex, fragment and program shaders
        std::unique_ptr<Shader> tri_shader;
};