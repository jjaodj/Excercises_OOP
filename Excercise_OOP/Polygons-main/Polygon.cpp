#pragma once
#include "Polygon.h"

int Polygon::getVer()
{
	return NumVertices;
}

void Polygon::setVer(int n)
{
	NumVertices = n;
}

void Polygon::input()
{
	for (int i = 0; i < NumVertices; i++)
	{
		cout << "\nNhap toa do dinh thu " << i + 1;
		arr[i].Point::input();
	}
}

void Polygon::tinhtien(int x, int y)
{
	for (int i = 0; i < getVer(); i++) 
		arr[i].Point::tinhtien(x, y);
	
}

void Polygon::output()
{
	for (int i = 0; i < NumVertices; i++) 
	{
		cout << "\nToa do cua dinh thu " << i + 1 << ": ";
		arr[i].Point::output();
	}
}
