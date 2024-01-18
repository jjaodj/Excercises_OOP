#include "Quadrilateral.h"

Quadrilateral::Quadrilateral()
{
	setVer(NumVertices);
}

Quadrilateral::~Quadrilateral(){};

void Quadrilateral::input()
{
	cout << "\Nhap tu giac: ";
	Polygon::input();
}

void Quadrilateral::output()
{
	cout << "\n***Tu giac: ";
	Polygon::output();
}