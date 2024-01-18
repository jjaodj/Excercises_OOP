#pragma once

#include "Staff.h"

class Produce:public Staff
{
	protected:

		int basicsalary;
		int sosanpham;

	public:

		Produce();

		void input();
		void output();

};
