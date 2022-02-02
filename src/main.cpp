#include <filesystem>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "world.hpp"

int main (int argc, char *argv[])
{
    // Get the executable's location
    auto path = std::string(argv[0]);
    // Go one folder back
    std::filesystem::current_path(path.substr(0, path.find_last_of('/') + 1) + "..");

    World world;

    world.mainLoop();

    return 0;
}