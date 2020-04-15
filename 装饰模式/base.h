#ifndef _BASE_H
#define _BASE_H

#include <iostream>

class Base{
private:
	//...
public:
	Base(){}
	virtual ~Base(){}
	virtual void Operation() = 0;
};

#endif
