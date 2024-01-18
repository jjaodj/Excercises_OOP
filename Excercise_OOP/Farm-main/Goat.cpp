#include "Goat.h"

Goat::Goat()
{
	reprodution = random(1, 3);
	milk = random(1, 10);
	say = "Goat goat";

}

Goat::~Goat() {}

void Goat::setGoat(int repro, int milk, string say)
{
	this->reprodution = repro;
	this->milk = milk;
	this->say = say;
}