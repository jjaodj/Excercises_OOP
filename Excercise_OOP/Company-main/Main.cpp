#include "Offical.h"
#include "Produce.h"
#include "Staff.h"

#define max 100

int main()
{
	Staff* arr[max];
	int n, option;

	do
	{
		cout << "\nNhap so luong nhan vien: ";
		cin >> n;
		if (n == 0) break;
		else
		{
			for (int i = 0; i < n; i++)
			{
				cout << "\Chon vi tri lam viec: ";
				do
				{
					cout << "\n1. San xuat";
					cout << "\n2. Van phong";
					cout << "\n0. Cancel"<<endl;
					cin >> option;
					
					if (option == 0) break;

					else if (option != 1 && option != 2 && option != 0)
						cout << "\nError!!! Please try again!";

				} while (option != 1 && option != 2 && option != 0);

				if(n!=0)
					switch (option)
					{
						case 1:
							arr[i] = new Produce;
							(*arr[i]).input();
							break;
						case 2:
							arr[i] = new Offical;
							(*arr[i]).input();
							break;
						default:
							break;
					}
			}
		}
	} while (n <= 0);

	for (int i = 0; i < n; i++)
		arr[i]->output();
	return 0;
}