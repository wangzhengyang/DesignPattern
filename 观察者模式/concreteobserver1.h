#ifndef _CONCRETEOBSERVER1_H
#define _CONCRETEOBSERVER1_H

#include "observer.h"
#include "subject.h"

class ConcreteObserver1 : public Observer{
private:
	Subject *pb;
public:
	ConcreteObserver1(Subject *p){pb = p;}
	~ConcreteObserver1(){}
	virtual void Update();
};

#endif
