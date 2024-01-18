#include "HS.h"

HS::HS() {}

void HS::input()
{
	ConNguoi::input();
	cout << "\Nhap MSHS: ";
	cin >> MSHS;
}

void HS::output()
{
	ConNguoi::output();
	cout << endl;
	cout << "\nMSHS: " << MSHS << endl;
}