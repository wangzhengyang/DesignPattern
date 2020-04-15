#include "concretedecorator2.h"

void ConcreteDecorator2::ConcreteDecorator2Operation()
{
	std::cout << "use ConcreteDecorator2!" << std::endl;
}

void ConcreteDecorator2::Operation()
{
	Decorator::Operation();
	ConcreteDecorator2Operation();
}

