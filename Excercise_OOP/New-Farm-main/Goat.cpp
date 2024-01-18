#include "Goat.h"

void Goat::input()
{
	cout << "\nDe: ";
	Cattle::input();
}

void Goat::output()
{
	for (int i = 0; i < amount; i++)
		cout << "\nCon de thu " << i + 1 << " de " << random(1, 3) << " con va cho " << random(1, 5) << " lit sua "<<endl;
	cout << endl;
}

void Goat::Say()
{
	for (int i = 0; i < amount; i++)
		cout << "\nDe keu " << say;
	cout << endl;
}