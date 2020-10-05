#include"Polygon.h"
#include "Rectangle.h"

Rectangle::Rectangle(int x, int y): Polygon(4)
{
	sides[0] = x;
	sides[1] = y;
	sides[2] = x;
	sides[3] = y;
}

Rectangle::Rectangle(Rectangle & r): Polygon(4)
{
	for (int i = 0; i < 4; i++)
		sides[i] = r.sides[i];
}

Rectangle::~Rectangle()
{
}
