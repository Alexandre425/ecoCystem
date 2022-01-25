#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "world.hpp"


int main (void)
{
    World world;

    world.mainLoop();

    return 0;
}