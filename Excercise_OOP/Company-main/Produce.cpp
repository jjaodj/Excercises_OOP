#include "Produce.h"

Produce::Produce(){}

void Produce::input()
{
	Staff::input();

	cout << "\nNhap luong can ban: ";
	cin >> basicsalary;
	cout << "\nNhap so san pham: ";
	cin >> sosanpham;

	salary = basicsalary + sosanpham * 5000;
};

void Produce::output()
{
	Staff::output();
}
