#include <iostream>
#include <fstream>
#include <chrono>
#include <streambuf>
#include <glm/glm.hpp>
#include <glm/gtx/matrix_transform_2d.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <entt/entt.hpp>

#include "graphics.hpp"
#include "world.hpp"
#include "components.hpp"

extern World world;

void resize_callback(GLFWwindow *window, int w, int h)
{
    glViewport(0, 0, w, h);

    auto &cam = world.graphics.camera;
    cam.w = w; cam.h = h;
}

// Note that this is to be used with GL_TRIANGLE_FAN mode
static float arrow[] = {
    0, -0.75,
    -1, -1,
    0, 1,
    1, -1
};

static int arrow_color_idx[] =
{
    0,
    0,
    1,
    0
};

Graphics::Graphics()
{
    glfwInit();
    // Configure openGL with version 3.1 and only core functionality
    glfwInitHint(GLFW_VERSION_MAJOR, 3);
    glfwInitHint(GLFW_VERSION_MINOR, 3);
    glfwInitHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // MSAA
    glfwWindowHint(GLFW_SAMPLES, 4);

    window = glfwCreateWindow(800, 600, "ecoCystem", NULL, NULL);
    glfwMakeContextCurrent(window);

    // v-sync
    glfwSwapInterval(1);

    // Configure glad
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(window, resize_callback);

    glEnable(GL_MULTISAMPLE);

    // Configure the vertex buffers and arrays
    // Arrow (creature)
    glGenVertexArrays(1, &arrow_VAO);                               // Create the VAO
    glBindVertexArray(arrow_VAO);                                   // Bind it
    glGenBuffers(1, &arrow_VBO);                                            // Create the VBO
    glGenBuffers(1, &model_VBO);
    glGenBuffers(1, &color1_VBO);
    glGenBuffers(1, &color2_VBO);

    glBindBuffer(GL_ARRAY_BUFFER, arrow_VBO);                               // Bind it
    glBufferData(GL_ARRAY_BUFFER, sizeof(arrow), arrow, GL_STATIC_DRAW);    // Send its data
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                       // Unbind it

    glEnableVertexAttribArray(0);                                   // Create a VAA
    glBindBuffer(GL_ARRAY_BUFFER, arrow_VBO);                       // Bind the arrow VBO
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);    // Set the VAA attributes
    glBindBuffer(GL_ARRAY_BUFFER, 0);                               // Unbind the arrow VBO

    // A vertex attrib has at most a size of 4 floats
    // As we are working with a 3x3 matrix, we need 3 attribs of size 3
    glBindBuffer(GL_ARRAY_BUFFER, model_VBO);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(glm::mat3), (void*)0);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(glm::mat3), (void*)(sizeof(glm::vec3)));
    glEnableVertexAttribArray(3);
    glVertexAttribPointer(3, 3, GL_FLOAT, GL_FALSE, sizeof(glm::mat3), (void*)(2 * sizeof(glm::vec3)));

    glVertexAttribDivisor(1, 1);                                    // Set the VAA's divisor
    glVertexAttribDivisor(2, 1);
    glVertexAttribDivisor(3, 1);

    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glEnableVertexAttribArray(4);
    glBindBuffer(GL_ARRAY_BUFFER, color1_VBO);
    glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glVertexAttribDivisor(4, 1);

    glEnableVertexAttribArray(5);
    glBindBuffer(GL_ARRAY_BUFFER, color2_VBO);
    glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glVertexAttribDivisor(5, 1);

    glBindVertexArray(0);

    // Create the necessary shader programs
    tri_shader = std::make_unique<Shader>("res/shaders/triangle.vs", "res/shaders/triangle.fs");
}

Graphics::~Graphics()
{
    tri_shader.reset();

    glfwTerminate();
}

void Graphics::draw_creatures()
{
    auto &reg = world.registry;
    auto group = reg.group<Position, Velocity, Size, CreatureColor>();

    auto creature_count = group.size();

    // TODO: static this?
    std::vector<Color> color_vec1(creature_count), color_vec2(creature_count);
    std::vector<glm::mat3> model_vec(creature_count);

    // Store the data in the respective vectors
    std::size_t count = 0;
    group.each([&](auto ent, const Position &pos, const Velocity &vel, const Size &size, const CreatureColor &col)
    {
        // Generate the model matrix
        glm::mat3 model;
        model = glm::mat3(1.0);
        model = glm::translate(model, glm::vec2(pos.pos.x, pos.pos.y));
        model = glm::scale(model, glm::vec2(size.size));
        auto ang = glm::acos(vel.vel.x / vel.vel.length()) * glm::sign(vel.vel.y);
        model = glm::rotate(model, float(ang));
        // Push the data onto the vectors
        model_vec[count]  = model;
        color_vec1[count] = col.color1;
        color_vec2[count] = col.color2;
        count++;
    });

    // Transfer it
    glBindBuffer(GL_ARRAY_BUFFER, model_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(glm::mat3) * creature_count, model_vec.data(), GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glBindBuffer(GL_ARRAY_BUFFER, color1_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Color) * creature_count, color_vec1.data(), GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glBindBuffer(GL_ARRAY_BUFFER, color2_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Color) * creature_count, color_vec2.data(), GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glm::mat3 view(1.0);
    view = glm::scale(view, glm::vec2(camera.zoom) * glm::vec2(1 / camera.w, 1 / camera.h));
    view = glm::translate(view, -glm::vec2(camera.x, camera.y));

    tri_shader->bind();
    auto view_loc = glGetUniformLocation(tri_shader->id, "view");
    glUniformMatrix3fv(view_loc, 1, GL_FALSE, glm::value_ptr(view));

    glBindVertexArray(arrow_VAO);
    glDrawArraysInstanced(GL_TRIANGLE_FAN, 0, 4, creature_count);
}

void Graphics::draw_test(float delta)
{
    static float color1[]
    {
        1, 0, 0,
        1, 1, 0.3
    };

    static float color2[]
    {
        0, 1, 0,
        0, 0.2, 0.3
    };

    static float ang = 0.0;
    ang += delta * 1.5;

    glm::mat3 model[2];
    model[0] = glm::mat3(1.0);
    model[0] = glm::translate(model[0], glm::vec2(0.5, 0.5));
    model[0] = glm::scale(model[0], glm::vec2(0.2, 0.2));
    model[0] = glm::rotate(model[0], ang);
    model[1] = glm::mat3(1.0);
    model[1] = glm::translate(model[1], glm::vec2(-0.5, -0.5));
    model[1] = glm::scale(model[1], glm::vec2(0.4, 0.4));
    model[1] = glm::rotate(model[1], -ang);

    // Transfer the data
    glBindBuffer(GL_ARRAY_BUFFER, model_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(model), model, GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glBindBuffer(GL_ARRAY_BUFFER, color1_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(color1), color1, GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glBindBuffer(GL_ARRAY_BUFFER, color2_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(color2), color2, GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glm::mat3 view(1.0);
    view = glm::scale(view, glm::vec2(camera.zoom) * glm::vec2(1 / camera.w, 1 / camera.h));
    view = glm::translate(view, -glm::vec2(camera.x, camera.y));

    tri_shader->bind();
    auto view_loc = glGetUniformLocation(tri_shader->id, "view");
    glUniformMatrix3fv(view_loc, 1, GL_FALSE, glm::value_ptr(view));

    glBindVertexArray(arrow_VAO);
    glDrawArraysInstanced(GL_TRIANGLE_FAN, 0, 4, 2);

}