#include"Polygon.h"
#include"Rectangle.h"
#include"Triangle.h"

int main()
{
	Polygon *pol1;
	int n1, n2, a, b, c;
	cout << "enter number of sides for polygon 1: " << endl;
	cin >> n1;
	if (n1 == 3)
	{
		cout << "enter sides for polygon:" << endl;
		cin >> a >> b >> c;
		pol1 = new Triangle(a, b, c);
	}
	else if (n1 == 4)
	{
		cout << "enter sides for polygon:" << endl;
		cin >> a >> b;
		pol1 = new Rectangle(a, b);
	}
	else pol1 = new Polygon(n1);
	Polygon *poli2=NULL;
	cout << "enter number of sides for polygon 2: " << endl;
	cin >> n2;
	if (n1 != n2)
		cout << "Not Equal!" << endl;
	else
	{
		if (n2 == 3)
		{
			cout << "enter sides for polygon:" << endl;
			cin >> a >> b >> c;
			poli2 = new Triangle(a, b, c);
		}
		else if (n2 == 4)
		{
			cout << "enter sides for polygon:" << endl;
			cin >> a >> b;
			poli2 = new Rectangle(a, b);
		}
		else poli2 = new Polygon(n2);
	}
	if (*pol1 == *poli2)
		cout << "Equal" << endl;
	else cout << "not Equal" << endl;

	system("pause");
	return 0;
}
