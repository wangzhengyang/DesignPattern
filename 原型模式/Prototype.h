#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H

#include <iostream>

class Prototype{
private:
	//...
public:
	Prototype(){}
	virtual ~Prototype(){}
	virtual Prototype *Clone() = 0;
};

#endif
