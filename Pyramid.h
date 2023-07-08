#pragma once
#include <cmath>
#include <vector>
#include <glm/glm.hpp>
using namespace std;


class Pyramid
{
public:
	Pyramid();
	int getNumVertices();
	int getNumIndices();
	std::vector<glm::vec3> getVertices();
	std::vector<glm::vec2> getTexCoords();
	std::vector<glm::vec3> getNormals();

private:
	int numVerticies = 18;
	int numIndicies = 54;
	vector<float> indicies;
	vector<glm::vec3> verticies;
	vector<glm::vec2> texCoords;
	vector<glm::vec3> normals;
};

