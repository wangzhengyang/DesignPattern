#include "concrete.h"

int main()
{
	Base *pd = new Concrete();
	pd->TemplateMthod();
	delete pd;
	return 0;
}
