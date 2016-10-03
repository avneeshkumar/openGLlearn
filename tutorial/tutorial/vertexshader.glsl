#version 330 core
  
layout (location = 0) in vec3 position;
//layout (location = 1) in vec3 color;

out vec3 mycolor;
void main()
{
	mycolor = vec3(1,1,1);
    gl_Position = vec4(position.x, position.y, position.z, 1.0);
}