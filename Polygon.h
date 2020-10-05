#pragma once
#include <iostream>
using namespace std;

class Polygon
{
protected:
	int numSides;
	int *sides;

public:
	Polygon(int);
//	Polygon(int x, int *y) : numSides(x), sides(y) {}
	Polygon(const Polygon &p);
	~Polygon() { delete[]sides; }
	int *GetSides()const { return sides; }
	int GetNumSides() { return numSides; }
	int Scope() const;
	bool operator ==(Polygon x);
};