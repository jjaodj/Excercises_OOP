#include "Retangle.h"

void Retangle::input()
{
	cout << "\n***Nhap hinh chu nhat***" << endl;
	cout << "\nNhap chieu dai: ";
	cin >> chieudai;
	cout << "\nNhap chieu rong: ";
	cin >> chieurong;

}

float Retangle::chuvi()
{
	return chieudai * 4;
}

float Retangle::dientich()
{
	return chieudai * chieudai;
}

void Retangle ::output()
{
	cout << "\nDien tich hinh vuong: " << dientich() << endl;
	cout << "\nChu vi hinh vuong: " << chuvi() << endl;
}