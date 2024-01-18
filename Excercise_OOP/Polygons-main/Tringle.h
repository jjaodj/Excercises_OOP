#pragma once

#include "Polygon.h"

class Tringle :public Polygon
{
	protected:
		const int NumVertices = 3;

	public:

		Tringle();
		~Tringle();

		void input();
		void output();
};