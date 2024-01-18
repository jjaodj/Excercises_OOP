#include "Circle.h"

void Circle::input()
{
	cout << "\n***Nhap hinh tron***" << endl;
	cout << "\nNhap ban kinh: ";
	cin >> bankinh;
}

float Circle::chuvi()
{
	return bankinh * 2 * 3.14;
}

float Circle::dientich()
{
	return bankinh * bankinh * 3.14;
}

void Circle::output()
{
	cout << "\nDien tich hinh tron: " << dientich() << endl;
	cout << "\nChu vi hinh tron: " << chuvi() << endl;
}