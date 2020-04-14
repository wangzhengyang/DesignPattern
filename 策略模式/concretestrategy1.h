#ifndef _CONCRETESTRATEGY1_H
#define _CONCRETESTRATEGY1_H

#include <iostream>
#include "strategy.h"

class ConcreteStrategy1: public Strategy{
private:
	//...
public:
	ConcreteStrategy1(){}
	~ConcreteStrategy1(){}

	virtual void Algorithm();
};

#endif
