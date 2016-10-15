#pragma once
#include <glm/glm.hpp>
#include <GL/glew.h>
#include <fstream>
#include <sstream>
#include "string"
#include "vector"
#include <assimp/Importer.hpp>
using namespace std;
struct Vertex {
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec2 TexCoords;
};
struct Texture {
	GLuint id;
	string type;
	aiString path;
};
class Mesh
{
public:
	~Mesh();
	/*  Mesh Data  */
	vector<Vertex> vertices;
	vector<GLuint> indices;
	vector<Texture> textures;
	/*  Functions  */
	Mesh(vector<Vertex> vertices, vector<GLuint> indices, vector<Texture> textures);
	void Draw(GLuint shader);
private:
	/*  Render data  */
	GLuint VAO, VBO, EBO;
	/*  Functions    */
	void setupMesh();
};

