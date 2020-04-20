#include "ConcretePrototype.h"

ConcretePrototype::ConcretePrototype(const ConcretePrototype & t)
{
	std::cout << "this is clone concreteprototype" << std::endl;
}

Prototype *ConcretePrototype::Clone()
{
	return new ConcretePrototype(*this);
}