#pragma once
#include <iostream>

using namespace std;

class Polygons
{
protected:

	float chieudai, chieurong, bankinh;

public:

	virtual void input();
	virtual void output();
	virtual float dientich();
	virtual float chuvi();

};