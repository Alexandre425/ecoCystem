#version 330 core

layout (location = 0) in vec2 vert;
layout (location = 1) in mat3 model;
layout (location = 4) in vec3 iColor;

out vec3 color;

uniform mat3 view;

void main()
{
    //gl_Position = vec4(rot * vec3( ((iVert * iSize + iPos) * zoom - cam_pos) / view, 0.0), 1.0);

    gl_Position = vec4((view * model * vec3(vert, 1.0)).xy, 0.0, 1.0);

    color = iColor;
}