#include <iostream>
#include <fstream>
#include <streambuf>
#include <glm/glm.hpp>
#include <glm/gtx/matrix_transform_2d.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "graphics.hpp"

void resize_callback(GLFWwindow *window, int w, int h)
{
    glViewport(0, 0, w, h);
}

static float arrow[] = {
    0, 1,
    0, -0.75,
    1, -1,
    0, 1,
    0, -0.75,
    -1, -1,
};

Graphics::Graphics()
{
    glfwInit();
    // Configure openGL with version 3.1 and only core functionality
    glfwInitHint(GLFW_VERSION_MAJOR, 3);
    glfwInitHint(GLFW_VERSION_MINOR, 3);
    glfwInitHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(800, 600, "ecoCystem", NULL, NULL);
    glfwMakeContextCurrent(window);

    // Configure glad
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(window, resize_callback);

    // Configure the vertex buffers and arrays
    // Arrow (creature)
    glGenVertexArrays(1, &arrow_VAO);                               // Create the VAO
    glBindVertexArray(arrow_VAO);                                   // Bind it
    glGenBuffers(1, &arrow_VBO);                                            // Create the VBO
    glGenBuffers(1, &pos_VBO);
    glGenBuffers(1, &size_VBO);
    glGenBuffers(1, &color_VBO);

    glBindBuffer(GL_ARRAY_BUFFER, arrow_VBO);                               // Bind it
    glBufferData(GL_ARRAY_BUFFER, sizeof(arrow), arrow, GL_STATIC_DRAW);    // Send its data
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                       // Unbind it

    glEnableVertexAttribArray(0);                                   // Create a VAA
    glBindBuffer(GL_ARRAY_BUFFER, arrow_VBO);                       // Bind the arrow VBO
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);    // Set the VAA attributes
    glBindBuffer(GL_ARRAY_BUFFER, 0);                               // Unbind the arrow VBO

    glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, pos_VBO);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glVertexAttribDivisor(1, 1);                                    // Set the VAA's divisor

    glEnableVertexAttribArray(2);
    glBindBuffer(GL_ARRAY_BUFFER, size_VBO);
    glVertexAttribPointer(2, 1, GL_FLOAT, GL_FALSE, 0, nullptr);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glVertexAttribDivisor(2, 1);

    glEnableVertexAttribArray(3);
    glBindBuffer(GL_ARRAY_BUFFER, color_VBO);
    glVertexAttribPointer(3, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glVertexAttribDivisor(3, 1);

    glBindVertexArray(0);

    // Square


    // Configure the vertex arrays

    // Create the necessary shader programs
    tri_shader = std::make_unique<Shader>("res/shaders/triangle.vs", "res/shaders/triangle.fs");
}

Graphics::~Graphics()
{
    tri_shader.reset();

    glfwTerminate();
}

void Graphics::drawTestTriangle()
{
    static float pos[]
    {
        0, 0,
        0.1, 0.1
    };

    static float size[]
    {
        0.6, 0.2
    };

    static float color[]
    {
        0, 0, 0,
        1, 1, 0.3
    };

    // Transfer the data
    glBindBuffer(GL_ARRAY_BUFFER, pos_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(pos), pos, GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glBindBuffer(GL_ARRAY_BUFFER, size_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(size), size, GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glBindBuffer(GL_ARRAY_BUFFER, color_VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(color), color, GL_DYNAMIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glm::mat4 transform = glm::mat4(1.0f);
    glm::mat4 model = glm::mat4(1.0f);

    tri_shader->bind();
    //auto view_loc = glGetUniformLocation(tri_shader->id, "view");
    //glUniformMatrix4fv(view_loc, 1, GL_FALSE, glm::value_ptr(transform));
    //auto model_loc = glGetUniformLocation(tri_shader->id, "model");
    //glUniformMatrix4fv(model_loc, 1, GL_FALSE, glm::value_ptr(model));

    glBindVertexArray(arrow_VAO);
    glDrawArraysInstanced(GL_TRIANGLES, 0, 6, 2);

    // Configure the vertex attributes
}
