#include "Polygon.h"

Polygon::Polygon(int x)
{
	numSides = x;
	sides = new int[numSides];
	if (x != 3 && x != 4)
	{
		cout << "ented sides for polygon: " << endl;
		for (int i = 0; i < numSides; i++)
			cin >> sides[i];
	}
}

Polygon::Polygon(const Polygon & p)
{
	if (&p != NULL)
	{
		numSides = p.numSides;
		sides = new int[p.numSides];
		for (int i = 0; i < numSides; i++)
			sides[i] = p.sides[i];
	}
}

int Polygon::Scope() const
{
	int temp = 0;
	for (int i = 0; i < numSides; i++)
		temp += sides[i];
	return temp;
}

bool Polygon::operator==(Polygon x)
{
	if((numSides==x.numSides)&&(this->Scope()==x.Scope()))
		return true;
	else return false;
}
