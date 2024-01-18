#pragma once

#include "Cattle.h"

class Goat:public Cattle
{
protected:

	char say[20] = "Goat goat goat!";

public:

	void input();
	void output();

	void Say();
};