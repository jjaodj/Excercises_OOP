#include "Square.h"

void Square::input()
{
	cout << "\n***Nhap hinh vuong***" << endl;
	cout << "\nNhap canh: ";
	cin >> chieudai;
	
}

float Square::chuvi()
{
	return chieudai*4;
}

float Square::dientich()
{
	return chieudai*chieudai;
}

void Square::output()
{
	cout << "\nDien tich hinh vuong: " << dientich() << endl;
	cout << "\nChu vi hinh vuong: " << chuvi() << endl;
}