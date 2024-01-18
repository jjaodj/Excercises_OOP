#include "Polygons.h"
#include "Circle.h"
#include "Retangle.h"
#include "Square.h"
#define max 100
void Input(Polygons* arr[max], int &index)
{
	int option1 = 0;

	do
	{
		cout << "\n1.Nhap hinh tron";
		cout << "\n2.Nhap hinh vuong";
		cout << "\n3.Nhap hinh chu nhat";
		cout << "\n0. Back to main menu" << endl;

		while (cin >> option1 && option1 !=3 && option1 != 1 && option1 != 2 && option1 != 0)
			cout << "\nInvalid option! Please try again!!!";
		switch (option1)
		{

		case 1:

			arr[index] = new Circle;
			(*arr[index]).input();

			index++;

			break;

		case 2:

			arr[index] = new Square;
			(*arr[index]).input();
			index++;
			break;

		case 3:

			arr[index] = new Retangle;
			(*arr[index]).input();
			index++;
			break;

		default:
			break;
		}

	} while (option1 != 0);
}

void Output(Polygons* arr[3], int index)
{
	for (int i = 0; i < index; i++)
		arr[i]->output();
}

int main()
{
	Polygons* arr[max];
	int option;
	int n = 0;

	do
	{
		cout << "\n1.Nhap thong so cac hinh";
		cout << "\n2.In chu vi va dien tich cac hinh";
		cout << "\n0. Exit"<<endl;

		while (cin >> option && option != 1 && option != 2 && option != 0)
			cout << "\nInvalid option! Please try again!!!";

		switch(option)
		{
		case 1:

			Input(arr,n);

			break;
		
		case 2:

			Output(arr,n);

			break;

		}
	} while (option!=0);

	return 0;

}