#ifndef _BUILDER_H
#define _BUILDER_H

#include "product.h"

class Builder{
private:
	//...
public:
	Builder(){}
	virtual ~Builder(){}
	virtual void BuilderOperation1() = 0;
	virtual void BuilderOperation2() = 0;
	virtual Product *GetResult() = 0;
};

#endif
