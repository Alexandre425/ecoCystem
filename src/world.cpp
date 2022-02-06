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

    systems =
    {
        new MovementSys()
    };

}

World::~World()
{
    for (auto sys : systems)
        delete sys;
}

void World::start_sim()
{
    started = true;
}

void World::render_loop()
{
    using clock = std::chrono::steady_clock;

    const float target_delta = 1 / 60.0f;
    auto last_frame_time = clock::now();
    while (!glfwWindowShouldClose(graphics.window))
    {
        // Calculate the delta time and update the last frame time
        auto start = clock::now();
        auto delta = std::chrono::duration_cast<std::chrono::duration<float>>(start - last_frame_time).count();
        last_frame_time = start;

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Controls
        glfwPollEvents();

        if (!started)
        {
            render_start_menu(delta);
        }
        else
        {
            key_poll(delta);
            // Update camera position and zoom
            graphics.camera.update(delta);

            render_sim(delta);
        }

        // Render the interface and capture input
        interface.update();

        glfwSwapBuffers(graphics.window);

        // Calculate how long the render took and compensate for it
        auto lag = std::chrono::duration_cast<std::chrono::duration<float>>(clock::now() - start).count();
        std::this_thread::sleep_for(std::chrono::duration<float>(std::max(target_delta - lag, (float)0.0)));
    }
}

void World::render_start_menu(float delta)
{

}

void World::render_sim(float delta)
{
    graphics.draw_test(delta);
}


void World::sim_loop()
{
    // Update all systems
    for (const auto &sys : systems)
    {
        sys->update(sim_delta);
    }

    registry_mutex.lock();
    // Process events
    registry_mutex.unlock();

}
