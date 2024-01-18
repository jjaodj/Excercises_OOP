#include "Rectangle.h"

Rectangle::Rectangle()
{
	setVer(NumVertices);
}

Rectangle::~Rectangle(){}

void Rectangle::input()
{
	cout << "\nNhap hinh chu nhat: ";
	Polygon::input();
}

void Rectangle::output()
{
	cout << "\n***Hinh chu nhat: ";
	Polygon::output();
}