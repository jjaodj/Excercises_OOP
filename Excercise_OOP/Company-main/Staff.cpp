#include "Staff.h"

Staff::Staff(){}

void Staff::input()
{
	cout << "\nNhap ho ten nhan vien: ";
	cin.ignore();
	cin.getline(name, 20);
	cout << "\nNhap ngay sinh: ";
	cin.getline(dayofbirth, 20);
}

int Staff::getsalary()
{
	return salary;
}

void Staff::output()
{
	cout << "\nHo ten: " << name;
	cout << "\nNgay sinh: " << dayofbirth;
	cout << "\nLuong: " << salary;
}