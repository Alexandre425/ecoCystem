#include <iostream>
#include <algorithm>
#include <thread>
#include "world.hpp"

extern World world;

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    auto &cam = world.graphics.camera;
    cam.target_zoom = std::clamp(cam.target_zoom * float(0.25 * yoffset + 1.0), cam.min_zoom, cam.max_zoom);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (action == GLFW_PRESS)
    {

    }
}

// Polls the keys to check if they are being held, and controlls the application accordingly
void key_poll(const float delta)
{
    GLFWwindow* window = world.graphics.window;
    auto &cam = world.graphics.camera;

    const float CAM_SPEED = 1500;

    float speed = (float(glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS) + 1.0) * CAM_SPEED * delta / cam.zoom;

    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        cam.target_y += speed;
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        cam.target_x -= speed;
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        cam.target_y -= speed;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        cam.target_x += speed;

}

World::World()
    : interface(graphics.window)
{
    epoch = std::chrono::steady_clock::now();
    glfwSetKeyCallback(graphics.window, key_callback);
    glfwSetScrollCallback(graphics.window, scroll_callback);

}

World::~World()
{

}

void World::mainLoop()
{
    while (!glfwWindowShouldClose(graphics.window))
    {
        auto now   = std::chrono::steady_clock::now();
        auto delta = std::chrono::duration_cast<std::chrono::duration<float>>(now - last_tick).count();
        last_tick  = now;

        glfwPollEvents();

        key_poll(delta);

        graphics.camera.update(delta);

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        graphics.draw_test(delta);

        interface.update();

        glfwSwapBuffers(graphics.window);

        std::this_thread::sleep_for(std::chrono::duration<float>(std::max(target_delta_time - delta, (float)0.0)));
    }
}
