#include "Tringle.h"

Tringle::Tringle()
{
	setVer(NumVertices);
}

Tringle::~Tringle(){}

void Tringle::input()
{
	cout << "\nNhap tam giac: ";
	Polygon::input();
}

void Tringle::output()
{
	cout << "\n***Tam giac: ";
	Polygon::output();
}