#pragma once

#include "Cattle.h"
#include "Cow.h"
#include "Goat.h"
#include "Sheep.h"

class Inform
{
		int cow, sheep, goat;
		Cow x;
		Sheep y;
		Goat z;
		Cow* c;
		Sheep* s;
		Goat* g;

	public:

		Inform();
		~Inform();

		void say();
		void input();
		void output();
};