#include "Cattle.h"
#include "Cow.h"
#include "Goat.h"
#include "Sheep.h"

int main()
{
	Cattle* arr[3];
	int option = 0;
	do
	{
		cout << "\n1.Nhap so luong gia suc: ";
		cout << "\n2.Thong ke gia suc: ";
		cout << "\n3.Nghe tieng keu: ";
		cout << "\n0. Exit!!!" << endl;
		
		while (cin >> option && option != 1 && option != 2 && option != 0 && option!=3)
			cout << "Invalid Value! Please try again: ";

		switch (option)
		{

		case 1:

			arr[0] = new Cow;
			(*arr[0]).input();

			arr[1] = new Goat;
			(*arr[1]).input();

			arr[2] = new Sheep;
			(*arr[2]).input();

			break;

		case 2:

			for (int i = 0; i < 3; i++)
				arr[i]->output();
			break;
	
		case 3:

			for (int i = 0; i < 3; i++)
				arr[i]->Say();

			break;


		default:
			break;
		}
	} while (option != 0);

	return 0;
}