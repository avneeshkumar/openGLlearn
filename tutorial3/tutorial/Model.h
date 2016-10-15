#pragma once

#include <glm/glm.hpp>
#include <GL/glew.h>
#include <vector>
#include "Mesh.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
using namespace std;
class Model
{
public:
public:
	/*  Functions   */
	Model(GLchar* path);
	~Model();
	void Draw(GLuint shader);
private:
	/*  Model Data  */
	vector<Mesh> meshes;
	string directory;
	vector<Texture> textures_loaded;
	/*  Functions   */
	void loadModel(string path);
	void processNode(aiNode* node, const aiScene* scene);
	Mesh processMesh(aiMesh* mesh, const aiScene* scene);
	vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type,
		string typeName);
	GLint TextureFromFile(const char* path, string directory);
};

