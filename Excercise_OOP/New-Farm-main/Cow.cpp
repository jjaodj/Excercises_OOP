#include "Cow.h"

void Cow::input()
{
	cout << "\nBo: ";
	Cattle::input();
}

void Cow::output()
{
	for (int i = 0; i < amount; i++)
		cout << "\nCon bo thu " << i + 1 << " de " << random(1, 2) << " con va cho " << random(3, 7) << " lit sua "<<endl;
	cout << endl;
}

void Cow::Say()
{
	for (int i = 0; i < amount; i++)
		cout << "\nBo keu " << say;
	cout << endl;
}