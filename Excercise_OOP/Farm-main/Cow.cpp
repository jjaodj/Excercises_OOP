#include "Cow.h"

Cow::Cow()
{
	reprodution = random(1, 3);
	milk = random(1, 20);
	say = "Cow cow";

}

Cow::~Cow(){}

void Cow::setCow(int repro, int milk, string say)
{
	this->reprodution = repro;
	this->milk = milk;
	this->say = say;
}