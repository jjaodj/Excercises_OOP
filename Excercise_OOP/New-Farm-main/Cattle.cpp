#include "Cattle.h"

void Cattle::input()
{
	cout << "\nNhap so luong: ";
	cin >> amount;
}

void Cattle::output(){}

void Cattle::Say(){}

int Cattle::random(int m, int n)
{
	for (int i = m; i <= n; i++)
		return m + (int)(rand() * (n - m + 1.0) / (1.0 + RAND_MAX));
}