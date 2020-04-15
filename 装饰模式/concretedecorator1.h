#ifndef _CONCRETEDECORATOR1_H
#define _CONCRETEDECORATOR1_H

#include "decorator.h"

class ConcreteDecorator1 : public Decorator{
private:
	//...
	void ConcreteDecorator1Operation();
public:
	virtual void Operation();
};

#endif
