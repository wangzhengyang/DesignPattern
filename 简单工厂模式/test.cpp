#include "factory.h"

int main(void)
{
	Base *p = Factory::Create(0);
	p->Operate();
	delete(p);
	p = Factory::Create(1);
	p->Operate();
	delete(p);
	return 0;
}
