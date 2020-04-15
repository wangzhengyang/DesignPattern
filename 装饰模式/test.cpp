#include "concrete.h"
#include "concretedecorator1.h"
#include "concretedecorator2.h"

int main()
{
	Base *pb = new Concrete();
	Decorator *pd1 = new ConcreteDecorator1();
	pd1->SetBase(pb);
	Decorator *pd2 = new ConcreteDecorator2();
	pd2->SetBase(pd1);

	std::cout << "use concretedecorator1! start" << std::endl;
	pd1->Operation();
	std::cout << "use concretedecorator1! finish" << std::endl;

	std::cout << "use concretedecorator1 and concretedecorator2! start" << std::endl;
	pd2->Operation();
	std::cout << "use concretedecorator1 and concretedecorator2! finish" << std::endl;
	
	return 0;
}
