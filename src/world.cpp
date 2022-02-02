#include <new>
#include <iostream>
#include "world.hpp"

World::World()
{

}

World::~World()
{

}

void World::mainLoop()
{
    while (!glfwWindowShouldClose(graphics.window))
    {
        glfwPollEvents();

        if (glfwGetKey(graphics.window, GLFW_KEY_PERIOD) == GLFW_PRESS)
            std::cout << "period pressed" << std::endl;

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        graphics.drawTestTriangle();

        glfwSwapBuffers(graphics.window);
    }
}
