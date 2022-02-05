#pragma once

#include <imgui.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class GUI
{
public:

    GUI(GLFWwindow *window);
    ~GUI();

    // Updates the GUI, once per frame
    void update();

private:

    // Creates the simulation control window
    void simulation_control();

    // Creates the creature inspector window
    void creature_inspector();

};