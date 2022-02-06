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

    bool show_simulation_control = false;
    bool show_entity_inspector = false;

    // Creates the start menu window
    void start_menu();

    // Creates the main menu bar with window select
    void main_menu_bar();

    // Creates the simulation control window
    void simulation_control();

    // Creates the entity inspector window
    void entity_inspector();

};