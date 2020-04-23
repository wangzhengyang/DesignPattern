#include "director.h"
#include "concretebuilder1.h"

int main()
{
	Director *pdirector = new Director();
	Builder *pbuilder= new ConcreteBuilder1();
	pdirector->DirectorOperation(pbuilder);
	Product *product = pbuilder->GetResult();
	delete product;

	return 0;
}
