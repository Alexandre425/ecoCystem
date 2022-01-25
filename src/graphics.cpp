#include <iostream>
#include <fstream>
#include <streambuf>

#include "graphics.hpp"

void resize_callback(GLFWwindow *window, int w, int h)
{
    glViewport(0, 0, w, h);
}

char* fileToString(const char* path)
{
    std::ifstream file(path);
    std::string str((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    // The function allocates char arrays with the source code that must be deleted later
    char* cstr = new char[str.length()+1];
    sprintf(cstr, "%s", str.c_str());
    return cstr;
}

// To check if the compilation was successful
inline void shaderCompileCheck(int status, unsigned int shader, const char* path)
{
    if (!status)
    {
        char info[512];
        glGetShaderInfoLog(shader, 512, NULL, info);
        std::cerr << "ERROR: Could not compile shader \"" << path << "\": " << info << std::endl;
        exit(-1);
    }
}

// Creates a shader program from vertex and fragment shaders and returns it's identifier
unsigned int createShaderProgram(const char* vs_path, const char* fs_path)
{
    // Read the shaders
    const char* vshader_source = fileToString(vs_path);
    const char* fshader_source = fileToString(fs_path);

    // Create and compile
    unsigned int vshader = glCreateShader(GL_VERTEX_SHADER);
    unsigned int fshader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(vshader, 1, &vshader_source, NULL);
    glShaderSource(fshader, 1, &fshader_source, NULL);
    glCompileShader(vshader);
    glCompileShader(fshader);

    // Verify compilation
    int status;
    glGetShaderiv(vshader, GL_COMPILE_STATUS, &status);
    shaderCompileCheck(status, vshader, vs_path);
    glGetShaderiv(fshader, GL_COMPILE_STATUS, &status);
    shaderCompileCheck(status, fshader, fs_path);

    // Add to program and link
    unsigned int program = glCreateProgram();
    glAttachShader(program, vshader);
    glAttachShader(program, fshader);
    glLinkProgram(program);

    // Verify
    glGetShaderiv(program, GL_COMPILE_STATUS, &status);
    shaderCompileCheck(status, program, "shader program");

    // Cleanup
    delete vshader_source, fshader_source;
    glDeleteShader(vshader);
    glDeleteShader(fshader);

    return program;
}

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

    // Configure the GPU vertex buffer
    glGenBuffers(1, &vertex_buffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);

    // Create the necessary shader programs
    tri_shader = createShaderProgram("res/shaders/triangle.vs", "res/shaders/triangle.fs");
}

Graphics::~Graphics()
{
    glfwTerminate();
}

void Graphics::drawTestTriangle()
{
    const float vertices[] = {
        -0.5f, -0.5f,
        0.5f, -0.5f,
        0.0f,  0.5f
    };

    // Transfer the data
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_DYNAMIC_DRAW);
    // Configure the vertex attributes
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float), nullptr);
    glEnableVertexAttribArray(0);
    glUseProgram(tri_shader);
}
