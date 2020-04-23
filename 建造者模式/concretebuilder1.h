#ifndef _CONCRETEBUILDER1_H
#define _CONCRETEBUILDER1_H

#include "builder.h"

class ConcreteBuilder1 : public Builder{
private:
	Product *pd;
public:
	ConcreteBuilder1();
	~ConcreteBuilder1(){}
	virtual void BuilderOperation1();
	virtual void BuilderOperation2();
	virtual Product *GetResult();
};

#endif
