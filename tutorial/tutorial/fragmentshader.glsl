#version 330 core

in vec3 mycolor;
out vec4 color;


void main()
{
    color = vec4(mycolor,1.0f);
} 