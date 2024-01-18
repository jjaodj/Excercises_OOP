#include "ConNguoi.h"

ConNguoi::ConNguoi(){}

void ConNguoi::input()
{
	cout << "\Nhap ho ten: ";
	cin.ignore();
	cin.getline(hoten, 20);
	cout << "\nNhap ngay sinh: ";
	cin.getline(ngaysinh, 20);
}

void ConNguoi::output()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nNgay sinh: " << ngaysinh;
}