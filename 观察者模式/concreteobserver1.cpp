#include "concreteobserver1.h"

void ConcreteObserver1::Update()
{
	std::cout << "ConcreteObserver1 get msg, the state is" << pb->state << std::endl;
}