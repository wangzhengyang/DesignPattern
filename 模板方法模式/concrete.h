#ifndef _CONCRETE_H
#define _CONCRETE_H

#include "base.h"

class Concrete : public Base{
private:
	//...
public:
	Concrete(){}
	~Concrete(){}
	virtual void Operation1();
	virtual void Operation2();
};

#endif
