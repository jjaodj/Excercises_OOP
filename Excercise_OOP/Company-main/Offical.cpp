#include "Offical.h"

Offical::Offical(){}

void Offical::input()
{
	Staff::input();

	cout << "\Nhap so ngay lam viec: ";
	cin >> songyalamviec;

	salary = songyalamviec * 100000;
}

void Offical::output()
{
	Staff::output();
}