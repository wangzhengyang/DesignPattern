#ifndef _CONCRETEOBSERVER2_H
#define _CONCRETEOBSERVER2_H

#include "observer.h"
#include "subject.h"

class ConcreteObserver2 : public Observer{
private:
	Subject *pb;
public:
	ConcreteObserver2(Subject *p){pb = p;}
	~ConcreteObserver2(){}
	virtual void Update();
};

#endif

