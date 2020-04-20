#ifndef _CONCRETEPROTOTYPE_H
#define _CONCRETEPROTOTYPE_H

#include "Prototype.h"

class ConcretePrototype : public Prototype{
private:
	//...
public:
	ConcretePrototype(){}
	~ConcretePrototype(){}
	ConcretePrototype(const ConcretePrototype& t);
	virtual Prototype *Clone();
};

#endif
