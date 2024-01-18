#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
	setVer(NumVertices);
}

Parallelogram::~Parallelogram(){}

void Parallelogram::input()
{
	cout << "\nNhap hinh binh hanh: ";
	Polygon::input();
}

void Parallelogram::output()
{
	cout << "\n***Hinh binh hanh: ";
	Polygon::output();
}