#version 330 core

layout (location = 0) in vec2 iVert;
layout (location = 1) in vec2 iPos;
layout (location = 2) in float iSize;
layout (location = 3) in vec3 iColor;

out vec3 color;

//uniform mat4 view;
//uniform mat4 model;

void main()
{
    gl_Position = vec4(iVert * iSize + iPos, 0.0, 1.0);
    color = iColor;
}