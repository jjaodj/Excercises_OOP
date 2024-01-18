#include "Point.h"

int Point::getAb()
{
	return abscissa;
}

int Point::getOr()
{
	return ordinate;
}

void Point::setAb(int x)
{
	abscissa = x;
}

void Point::setOr(int y)
{
	ordinate = y;
}

void Point::input()
{
	cout << "\nNhap hoanh do: ";
	cin >> abscissa;
	setAb(abscissa);

	cout << "\nNhap tung do: ";
	cin >> ordinate;
	setOr(ordinate);
}

void Point::output()
{
	cout << '(' << getAb() << ',' << getOr() << ')';
}

void Point::tinhtien(int x, int y)
{
	setAb(abscissa += x);
	setOr(ordinate += y);
}

