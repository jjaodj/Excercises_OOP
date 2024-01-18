#pragma once


#include <iostream>

using namespace std;

class Point
{

	protected:

		int abscissa;	//hoanhdo
		int ordinate;	//tungdo

	public:

		int getAb();
		int getOr();

		void setAb(int x);
		void setOr(int y);

		virtual void input();
		virtual void output();
		virtual void tinhtien(int x, int y);
};