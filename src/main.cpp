#include <filesystem>
#include <string>

#include "world.hpp"

World world;

int main (int argc, char *argv[])
{
    // Get the executable's location
    auto path = std::string(argv[0]);
    // Go one folder back
    std::filesystem::current_path(path.substr(0, path.find_last_of('/') + 1) + "..");

    world.render_loop();

    return 0;
}