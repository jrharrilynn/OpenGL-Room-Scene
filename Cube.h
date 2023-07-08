#pragma once
#include <cmath>
#include <vector>
#include <glm/glm.hpp>
using namespace std;


class Cube
{
public:
	Cube();
	int getNumVertices();
	int getNumIndices();
	std::vector<glm::vec3> getVertices();
	std::vector<glm::vec2> getTexCoords();
	std::vector<glm::vec3> getNormals();

private:
	int numVerticies = 36;
	int numIndicies = 108;
	vector<float> indicies;
	vector<glm::vec3> verticies;
	vector<glm::vec2> texCoords;
	vector<glm::vec3> normals;
};

