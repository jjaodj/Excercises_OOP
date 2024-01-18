#pragma once

#include <iostream>

using namespace std;

#define max 100

class Cattle
{
	protected:

		int amount;
		char say[20];
		int m, n
			;

	public:

		virtual void input();
		virtual void output();

		virtual void Say();

		int random(int m, int n);



};