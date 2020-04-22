#include "base.h"

void Base::Operation1()
{
	std::cout << "base operation1!" << std::endl;
}

void Base::Operation2()
{
	std::cout << "base operation2!" << std::endl;
}

void Base::TemplateMthod()
{
	Operation1();
	Operation2();
}