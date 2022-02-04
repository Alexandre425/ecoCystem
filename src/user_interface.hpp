#pragma once

#include <imgui.h>
#include <GLFW/glfw3.h>

class GUI
{
public:

    GUI(GLFWwindow *window);
    ~GUI();

    // Updates the GUI, once per frame
    void update();

};