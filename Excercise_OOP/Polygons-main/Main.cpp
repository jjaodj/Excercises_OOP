#include "Polygon.h"
#include "Quadrilateral.h"
#include "Tringle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"

void Biginput(Polygon* arr[max], int& index)
{
	int option = 0;

		do
		{
			cout << "\n1. Nhap tu giac " << endl;
			cout << "\n2. Nhap hinh binh hanh " << endl;
			cout << "\n3. Nhap hinh chu nhat " << endl;
			cout << "\n4. Nhap hinh vuong " << endl;
			cout << "\n5. Nhap tam giac " << endl;
			cout << "\n0. Back to the Main Menu." << endl;

			while (cin >> option && option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 0)
				cout << "Invalid Value! Please try again: ";

			switch (option)
			{

			case 1:
				arr[index] = new Quadrilateral;
				(*arr[index]).input();
				index++;
				break;

			case 2:
				arr[index] = new Parallelogram;
				(*arr[index]).input();
				index++;
				break;

			case 3:
				arr[index] = new Rectangle;
				(*arr[index]).input();
				index++;
				break;

			case 4:
				arr[index] = new Square;
				(*arr[index]).input();
				index++;
				break;

			case 5:
				arr[index] = new Tringle;
				(*arr[index]).input();
				index++;
				break;

			default:
				break;
			}
		} while (option != 0);
	
}

void Bigoutput(Polygon* arr[max], int index)
{
	cout << "\n\t***Danh sach da giac duoc nhap***";
	
	for (int i = 0; i < index; i++) 
	{
		arr[i]->output();
		cout << endl;
	}
}

void Bigtinhtien(Polygon* arr[max], int index)
{
	cout << "\nNhap toa do vector tinh tien: ";
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < index; i++)
		arr[i]->tinhtien(x, y);
}

int main()
{
	Polygon* arr[max];
	int FirstOption = 0;
	int count = 0;
	
	do
	{
		cout << "\n1. Nhap da giac: ";
		cout << "\n2. Tinh tien va in tat ca da giac: ";
		cout << "\n0. Exit!!!"<<endl;

		while (cin >> FirstOption && FirstOption != 1 && FirstOption != 2 && FirstOption != 0) 
			cout << "Invalid Value! Please try again: ";

		switch (FirstOption)
		{

			case 1:

				Biginput(arr, count);
				break;

			case 2:

				char op;
			
				Bigoutput(arr, count);
				cout << "\nY/N"<<endl;

				while (cin >> op && op != 'Y' && op != 'N')
					cout << "\nInvalid Value! Please try again: ";
			
				if (op == 'Y')
				{
					Bigtinhtien(arr, count);
					cout << "\nSau khi da tinh tien: ";
					Bigoutput(arr, count);
				}
				break;

			default:
				break;
		}
	} while (FirstOption != 0);

	for (int i = 0; i < count; i++) 
		delete arr[i];
	

	return 0;
}