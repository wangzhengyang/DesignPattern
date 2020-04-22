#include "facade.h"

Facade::Facade()
{
	psys1 = new System1();
	psys2 = new System2();
}

Facade::~Facade()
{
	delete psys1;
	delete psys2;
}

void Facade::Operation()
{
	psys1->Operation();
	psys2->Operation();
}