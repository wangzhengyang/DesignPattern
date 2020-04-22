#include "facade.h"

int main()
{
	Facade *pf = new Facade();
	pf->Operation();
	delete pf;
	return 0;
}
