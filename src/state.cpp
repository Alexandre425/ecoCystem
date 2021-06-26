#include <new>
#include "state.hpp"

void State::mainLoop()
{
    while (!glfwWindowShouldClose(graphics.window))
    {
        glfwSwapBuffers(graphics.window);
        glfwPollEvents();
    }
}
