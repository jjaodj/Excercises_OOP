#include "ConNguoi.h"
#include "CS.h"
#include "HS.h"
#include "NS.h"
#include "SV.h"

int main()
{
	ConNguoi* arr[1];
	int option = 0;
	cout << "\nChon doi tuong de nhap thong tin: ";
	do
	{
		cout << "\n1. Hoc sinh";
		cout << "\n2. Sinh vien";
		cout << "\n3. Nghe si";
		cout << "\n4. Ca si";
		cout << "\n0. Cancel" << endl;
		cin >> option;
		if (option == 0)
			break;
		else if (option != 1 && option != 2 && option != 0 && option != 3 && option != 4)
			cout << "\nError!!! Please try again!";

	} while (option != 1 && option != 2 && option != 0 && option != 3 && option != 4);
	
	switch (option)
	{
		case 1:
			arr[0] = new HS;
			(*arr[0]).input();
			break;
		case 2:
			arr[0] = new SV;
			(*arr[0]).input();
			break;
		case 3:
			arr[0] = new NS;
			(*arr[0]).input();
			break;
		case 4:
			arr[0] = new CS;
			(*arr[0]).input();
			break;
		default:
			break;
	}

	arr[0]->output();
	return 0;

}