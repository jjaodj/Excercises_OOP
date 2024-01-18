#include "SV.h"

SV::SV() {}

void SV::input()
{
	ConNguoi::input();
	cout << "\Nhap MSSV: ";
	cin >> MSSV;
}

void SV::output()
{
	ConNguoi::output();
	cout << endl;
	cout << "\nMSSV: " << MSSV << endl;
}