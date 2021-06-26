#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "state.hpp"

State state;

int main (void)
{
    state.init();
    state.mainLoop();
    state.terminate();

    return 0;
}