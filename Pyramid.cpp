#include "Pyramid.h"




Pyramid::Pyramid() {


	//vertices

	//front face
	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(0.0f, 1.0f, 0.0f));

	//left face
	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(0.0f, 1.0f, 0.0f));


	//back face
	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(0.0f, 1.0f, 0.0f));


	//right face
	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(0.0f, 1.0f, 0.0f));

	//bottom face
	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));

	verticies.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
	verticies.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
	verticies.push_back(glm::vec3(1.0f, -1.0f, -1.0f));


	//texture coordinates

		//front face
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(0.0f, 1.0f));

	//left face
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(0.0f, 1.0f));


	//back face
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(0.0f, 1.0f));


	//right face
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(0.0f, 1.0f));

	//bottom face
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));

	texCoords.push_back(glm::vec2(1.0f, -1.0f));
	texCoords.push_back(glm::vec2(-1.0f, -1.0f));
	texCoords.push_back(glm::vec2(1.0f, -1.0f));


	//normal vectors


	//front face
	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));

	//left face
	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));


	//back face
	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));
	normals.push_back(glm::vec3(0.0f, 0.0f, -1.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));


	//right face
	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(-1.0f, 0.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, 1.0f, 0.0f));

	//bottom face
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));

	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
	normals.push_back(glm::vec3(0.0f, -1.0f, 0.0f));
}


int Pyramid::getNumVertices() { return numVerticies; }
int Pyramid::getNumIndices() { return numIndicies; }
std::vector<glm::vec3> Pyramid::getVertices() { return verticies; }
std::vector<glm::vec2> Pyramid::getTexCoords() { return texCoords; }
std::vector<glm::vec3> Pyramid::getNormals() { return normals; }
