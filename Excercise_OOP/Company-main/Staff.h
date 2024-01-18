#pragma once

#include <iostream>

using namespace std;

class Staff
{
		char name[20];
		char dayofbirth[20];

	protected:
		int salary;
	
	public:

		Staff();

		virtual void input();
		virtual void output();
		virtual int getsalary();

};