#ifndef _CONCRETEDECORATOR2_H
#define _CONCRETEDECORATOR2_H

#include "decorator.h"

class ConcreteDecorator2 : public Decorator{
private:
	//...
	void ConcreteDecorator2Operation();
public:
	virtual void Operation();
};

#endif


