#pragma once

#include <iostream>
#include <string>
using namespace std;

class Cattle
{
	protected:

		int m, n;
		int reprodution;
		int milk;
		string say;


	public:

		Cattle();
		~Cattle();

		void setrepro(int repro);
		void setmilk(int milk);
		void setsay(string say);

		int getrepro();
		int getmilk();
		string getsay();

		int random(int m, int n);

};