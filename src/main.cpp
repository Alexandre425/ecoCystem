#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "state.hpp"

State state;

int main (void)
{
    state.graphics.initialize();

    state.mainLoop();

    return 0;
}