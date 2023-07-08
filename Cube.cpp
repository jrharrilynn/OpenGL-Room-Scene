#include "Cube.h"




Cube::Cube() {

	
	//vertices

	//back face
	verticies.push_back(glm::vec3(-1.0f, 1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));

	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, 1.0f, -1.0f));

	//left face
	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, -1.0f));

	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, -1.0f));

	//front face
	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, 1.0f));

	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(-1.0f, 1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, 1.0f));

	//right face
	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, 1.0f, 1.0f));

	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, 1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, 1.0f, 1.0f));

	//bottom face
	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));

	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));

	//top face
	verticies.push_back(glm::vec3(-1.0f, 1.0f, -1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, -1.0f));
	verticies.push_back(glm::vec3(1.0f, 1.0f, 1.0f));

	verticies.push_back(glm::vec3(1.0f, 1.0f, 1.0f));
	verticies.push_back(glm::vec3(-1.0f, 1.0f, 1.0f));
	verticies.push_back(glm::vec3(-1.0f, 1.0f, -1.0f));

	//texture coordinates

	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));
	texCoords.push_back(glm::vec2(-1.0f, 1.0f));

	//normal vectors

	//back face
	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));

	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));

	//left face
	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));

	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));

	//front face
	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));

	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));


	//right face
	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));

	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));


	//bottom face
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));

	normals.push_back(glm::vec3(1.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));

	
	//top face
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));

	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
}


int Cube::getNumVertices() { return numVerticies; }
int Cube::getNumIndices() { return numIndicies; }
std::vector<glm::vec3> Cube::getVertices() { return verticies; }
std::vector<glm::vec2> Cube::getTexCoords() { return texCoords; }
std::vector<glm::vec3> Cube::getNormals() { return normals; }


