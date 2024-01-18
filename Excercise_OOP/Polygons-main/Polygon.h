#pragma once

#include "Point.h"
#define max 100

class Polygon:public Point
{
	protected:

		int NumVertices;
		Point arr[max];


	public:

		int getVer();
		void setVer(int num);

		void tinhtien(int x, int y);

		virtual void input();
		virtual void output();
};