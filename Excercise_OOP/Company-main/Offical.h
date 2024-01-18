#pragma once

#include "Staff.h"

class Offical:public Staff
{
	protected:

		int songyalamviec;

	public:

		Offical();

		void input();
		void output();
};