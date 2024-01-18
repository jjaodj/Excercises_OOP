#pragma once

#include "Cattle.h"

class Sheep :public Cattle
{
protected:

	char say[20] = "Sheep sheep sheep!";

public:

	void input();
	void output();

	void Say();
};