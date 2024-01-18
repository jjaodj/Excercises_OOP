#include "Sheep.h"

void Sheep::input()
{
	cout << "\nCuu: ";
	Cattle::input();
}

void Sheep::output()
{
	for (int i = 0; i < amount; i++)
		cout << "\nCon cuu thu " << i + 1 << " de " << random(1, 3) << " con va cho " << random(1, 5) << " lit sua ";
	cout << endl;
}

void Sheep::Say()
{
	for (int i = 0; i < amount; i++)
		cout << "\nCuu keu " << say;
	cout << endl;
}