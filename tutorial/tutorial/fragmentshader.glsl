#version 330 core

in vec3 mycolor;
out vec4 color;
in vec2 TexCoord;
uniform sampler2D ourTexture;

void main()
{
    color = texture(ourTexture, TexCoord);
} 