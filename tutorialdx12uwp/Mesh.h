#pragma once
#include "pch.h"

using namespace DirectX;

struct Vertex {

	XMFLOAT3 pos;
	XMFLOAT4 col;
	XMFLOAT3 normal;

};

class Mesh
{
public:
	Mesh();
	Mesh(std::string const fileName);
	~Mesh();

	UINT64 GetVSize() const;
	UINT64 GetISize() const;
	void readFile(std::string const fileName);
	std::vector<Vertex> vertices;
	std::vector<unsigned int> indices;

private:
	UINT64 vsize;
	UINT64 isize;
	XMFLOAT4 defaultColor;
};

