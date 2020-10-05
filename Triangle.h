#pragma once
#include "Polygon.h"
#include "Triangle.h"

class Triangle : public Polygon
{
public:
	Triangle(int x, int y, int z);
	Triangle(Triangle &t);
	~Triangle();
};