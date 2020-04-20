#include "ConcretePrototype.h"

int main()
{
	Prototype *p1 = new ConcretePrototype();
	Prototype *p2 = p1->Clone();

	return 0;
}
