#include "concretebuilder1.h"

ConcreteBuilder1::ConcreteBuilder1()
{
	pd = new Product();
}

void ConcreteBuilder1::BuilderOperation1()
{
	pd->Operation1("BuilderOperation1");
}

void ConcreteBuilder1::BuilderOperation2()
{
	pd->Operation1("BuilderOperation2");
}

Product *ConcreteBuilder1::GetResult()
{
	return pd;
}