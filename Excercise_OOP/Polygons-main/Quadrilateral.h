#pragma once
#include "Polygon.h"

class Quadrilateral :public Polygon
{
	protected:

		const int NumVertices = 4;

	public:

		Quadrilateral();
		~Quadrilateral();
			
		virtual void input();
		virtual void output();

};