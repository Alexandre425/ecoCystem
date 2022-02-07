#include <backends/imgui_impl_opengl3.h>
#include <backends/imgui_impl_glfw.h>
#include <iostream>

#include "user_interface.hpp"
#include "world.hpp"
#include "utilities.hpp"

extern World world;

GUI::GUI(GLFWwindow *window)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    ImGui::StyleColorsDark();
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    const char* glsl_version = "#version 150";
    ImGui_ImplOpenGL3_Init(glsl_version);
}

GUI::~GUI()
{
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
}

void GUI::update()
{
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();

    if (!world.started)
    {
        start_menu();
    }
    else
    {
        GUI::main_menu_bar();
        if (show_simulation_control)    GUI::simulation_control();
        if (show_entity_inspector)      GUI::entity_inspector();
        ImGui::ShowDemoWindow();
    }

    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

// Helper to display a little (?) mark which shows a tooltip when hovered.
// In your own code you may want to display an actual icon if you are using a merged icon fonts (see docs/FONTS.md)
static void HelpMarker(const char* desc)
{
    ImGui::TextDisabled("(?)");
    if (ImGui::IsItemHovered())
    {
        ImGui::BeginTooltip();
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(desc);
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
}

void GUI::start_menu()
{
    // Creates a fullscreen window
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings;
    const ImGuiViewport* viewport = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(viewport->WorkPos);
    ImGui::SetNextWindowSize(viewport->WorkSize);

    ImGui::Begin("Start Menu", nullptr, flags);

    ImGui::PushItemWidth(ImGui::GetFontSize() * 20);

    static float size = world.MAX_SIZE / 2.0f;
    ImGui::SliderFloat("World size", &size, world.MIN_SIZE, world.MAX_SIZE, "%.0lfm", ImGuiSliderFlags_AlwaysClamp);
    world.size = static_cast<double>(size);

    if (ImGui::Button("Start Simulation"))
    {
        world.start_sim();
    }

    ImGui::End();
}

void GUI::main_menu_bar()
{
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("Windows"))
        {
            ImGui::MenuItem("Simulation Control", nullptr, &show_simulation_control);
            ImGui::MenuItem("Entity Inspector", nullptr, &show_entity_inspector);

            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }
}


void GUI::simulation_control()
{
    ImGui::Begin("Simulation Control");

    ImGui::PushItemWidth(ImGui::GetFontSize() * -12);

    ImGui::SliderInt("TPS", &world.ticks_per_sec, 15, 1000);
    ImGui::SameLine();
    HelpMarker("Ticks per second, the number of simulation steps ran every second");

    ImGui::SliderFloat("Delta time", &world.sim_delta, 1 / 60.0f, 1 / 15.0f, "%f", ImGuiSliderFlags_AlwaysClamp);
    ImGui::SameLine();
    HelpMarker("The simulation delta time, may cause unstable behavior if raised");

    if (ImGui::Button("Reset"))
    {
        world.ticks_per_sec = 60;
        world.sim_delta = 1 / 60.0f;
    }

    ImGui::Separator();

    // TODO: Fix this once the simulation delta times are properly calculated
    static int effective_TPS = 0;
    effective_TPS = low_pass_filter(effective_TPS, static_cast<int>(1 / world.last_delta), 0.95);
    float progress = static_cast<float>(effective_TPS) / static_cast<float>(world.ticks_per_sec);
    char buf[16];
    sprintf(buf, "%4d/%4d", effective_TPS, world.ticks_per_sec);
    ImGui::ProgressBar(progress, ImVec2(0.0f, 0.0f), buf);
    ImGui::SameLine();
    ImGui::Text("TPS");

    ImGui::End();
}

void GUI::entity_inspector()
{
    ImGui::Begin("Entity Inspector");

    ImGui::End();
}


