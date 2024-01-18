#include "NS.h"

NS::NS() {}

void NS::input()
{
	ConNguoi::input();
	cout << "\Nhap nghe danh: ";
	cin.ignore();
	cin.getline(NgheDanh, 20);
}

void NS::output()
{
	ConNguoi::output();
	cout << endl;
	cout << "\nNghe danh: " << NgheDanh << endl;
}