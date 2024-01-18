#include "CS.h"

CS::CS(){}

void CS::input()
{
	ConNguoi::input();
	cout << "\Nhap NickName: ";
	cin.ignore();
	cin.getline(NickName, 20);
}

void CS::output()
{
	ConNguoi::output();
	cout << endl;
	cout << "\nNickName: " << NickName << endl;
}