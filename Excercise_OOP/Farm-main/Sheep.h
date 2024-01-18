#pragma once

#include "Cattle.h"

class Sheep :public Cattle
{


public:

	Sheep();
	~Sheep();

	void setSheep(int repro, int milk, string say);

};