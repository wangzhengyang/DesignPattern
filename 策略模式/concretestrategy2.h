#ifndef _CONCRETESTRATEGY2_H
#define _CONCRETESTRATEGY2_H

#include <iostream>
#include "strategy.h"

class ConcreteStrategy2: public Strategy{
private:
	//...
public:
	ConcreteStrategy2(){}
	~ConcreteStrategy2(){}

	virtual void Algorithm();
};

#endif

