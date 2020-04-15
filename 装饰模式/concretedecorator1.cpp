#include "concretedecorator1.h"

void ConcreteDecorator1::ConcreteDecorator1Operation()
{
	std::cout << "use ConcreteDecorator1!" << std::endl;
}

void ConcreteDecorator1::Operation()
{
	Decorator::Operation();
	ConcreteDecorator1Operation();
}