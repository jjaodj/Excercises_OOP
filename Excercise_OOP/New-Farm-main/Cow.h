#pragma once

#include "Cattle.h"

class Cow :public Cattle
{
protected:

	char say[20] = "Cow cow cow!";

public:

	void input();
	void output();

	void Say();
};