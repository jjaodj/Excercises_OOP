#include "Sheep.h"

Sheep::Sheep()
{
	reprodution = random(1, 3);
	milk = random(1, 5);
	say = "Sheep sheep";

}

Sheep::~Sheep() {}

void Sheep::setSheep(int repro, int milk, string say)
{
	this->reprodution = repro;
	this->milk = milk;
	this->say = say;
}