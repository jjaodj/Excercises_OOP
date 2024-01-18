#include "Inform.h"

Inform::Inform(){}

Inform::~Inform()
{
	delete[] c;
	delete[] s;
	delete[] g;
}

void Inform::say()
{
	cout << "\nTieng keu cua dan gia suc!!!";
	cout << "\nBo";
	for (int i = 0; i < cow; i++)
		cout <<endl<< x.getsay() << endl;
	cout << "\nCuu";
	for (int i = 0; i < sheep; i++)
		cout <<endl<< y.getsay() << endl;
	cout << "\nDe";
	for (int i = 0; i < goat; i++)
		cout << endl<<z.getsay() << endl;
}

void Inform::input()
{
	cout << "Nhap so luong bo: ";
	cin >> cow;
	cout << endl << "Nhap so luong cuu: ";
	cin >> sheep;
	cout << endl << "Nhap so luong de: ";
	cin >> goat;
	cout << endl;
}

void Inform::output()
{
	c = new Cow[cow];
	s = new Sheep[sheep];
	g = new Goat[goat];
	int option = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "\nChon doi tuong de xuat thong tin: ";
		do
		{
			cout << "\n1. Bo";
			cout << "\n2. Cuu";
			cout << "\n3. De";
			cout << "\n0. Cancel" << endl;
			cin >> option;
			if (option == 0)
				break;
			else if (option != 1 && option != 2 && option != 0 && option != 3)
				cout << "\nError!!! Please try again!";

		} while (option != 1 && option != 2 && option != 0 && option != 3);

		switch (option)
		{
			case 1:
				for (int j = 0; j < cow; j++)
					cout << "Con bo thu " << j + 1 << " sinh " << c[j].getrepro() << " con va cho " << c[j].getmilk() << " lit sua" << endl;
				break;

			case 2:
				for (int j = 0; j < sheep; j++)
					cout << "Con cuu thu " << j + 1 << " sinh " << s[j].getrepro() << " con va cho " << s[j].getmilk() << " lit sua" << endl;
				break;

			case 3:
				for (int j = 0; j < goat; j++)
					cout << "Con de thu " << j + 1 << " sinh " << g[i].getrepro() << " con va cho " << g[j].getmilk() << " lit sua" << endl;
				break;

			default:
				break;
		}
	}
}

int main()
{
	Inform a;
	a.input();
	int option1 = 0;
		do
		{
			cout << "\nNhan 1 de nghe tieng keu cua gia suc";
			cout << "\nNhan 2 de nghe thong ke gia suc ";
			cout << "\nNhan 0 de Cancel" << endl;
			cin >> option1;
			if (option1 == 0)
				break;
			else if (option1 != 1 && option1 != 2 && option1 != 0)
				cout << "\nError!!! Please try again!";

		} while (option1 != 1 && option1 != 2 && option1 != 0);

		switch (option1)
		{
			case 1:
				a.say();
				break;

			case 2:
				a.output();
				break;

			default:
				break;
		}
	

	return 0;
}