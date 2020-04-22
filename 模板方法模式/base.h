#ifndef _BASE_H
#define _BASE_H

#include <iostream>

class Base{
private:
	//...
public:
	Base(){}
	virtual ~Base(){}
	void TemplateMthod();
	virtual void Operation1();
	virtual void Operation2();
};

#endif
