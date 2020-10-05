#include "Triangle.h"

Triangle::Triangle(int x, int y, int z): Polygon(3)
{
	sides[0] = x;
	sides[1] = y;
	sides[2] = z;
}

Triangle::Triangle(Triangle & t): Polygon(3)
{
	for (int i = 0; i < 3; i++)
		sides[i] = t.sides[i];
}

Triangle::~Triangle()
{
}
