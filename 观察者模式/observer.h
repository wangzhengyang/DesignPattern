#ifndef _OBSERVER_H
#define _OBSERVER_H

#include <iostream>
#include <list>

class Observer{
private:
	//...
public:
	Observer(){}
	virtual ~Observer(){}
	virtual void Update() = 0;
};

#endif
