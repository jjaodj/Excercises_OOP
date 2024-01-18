#pragma once
#include <iostream>

using namespace std;

class ConNguoi
{
	protected:

		char hoten[20];
		char ngaysinh[20];

	public:

		ConNguoi();

		virtual void input();
		virtual void output();

};