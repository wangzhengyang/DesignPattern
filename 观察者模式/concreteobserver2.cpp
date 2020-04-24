#include "concreteobserver2.h"

void ConcreteObserver2::Update()
{
	std::cout << "ConcreteObserver2 get msg, the state is" << pb->state << std::endl;
}

