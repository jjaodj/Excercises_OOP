#include "Square.h"

Square::Square()
{
	setVer(NumVertices);
}

Square::~Square(){}

void Square::input()
{
	cout << "\nNhap hinh vuong: ";
	Polygon::input();
}

void Square::output()
{
	cout << "\n***Hinh vuong: ";
	Polygon::output();
}