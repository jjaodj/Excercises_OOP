#include "Cattle.h"

Cattle::Cattle(){}

Cattle::~Cattle(){}

int Cattle::random(int m, int n)
{
	for (int i = m; i <= n; i++)
		return m + (int)(rand() * (n - m + 1.0) / (1.0 + RAND_MAX));
}

void Cattle::setrepro(int repro)
{
	this->reprodution = repro;
}

void Cattle::setmilk(int milk)
{
	this->milk = milk;
}

void Cattle::setsay(string say)
{
	this->say = say;
}

int Cattle::getmilk()
{
	return milk;
}

int Cattle::getrepro()
{
	return reprodution;
}

string Cattle::getsay()
{
	return say;
}