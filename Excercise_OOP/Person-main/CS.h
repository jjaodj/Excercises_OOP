#pragma once
#include "ConNguoi.h"

class CS :public ConNguoi
{
	protected:
		
		char NickName[20];

	public:

		CS();
		void input();
		void output();
};