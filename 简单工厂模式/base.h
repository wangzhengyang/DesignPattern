#ifndef _BASE_H
#define _BASE_H

class Base{
private:
	//...
public:
	Base(){}
	virtual ~Base(){}

	virtual void Operate() = 0;
};

#endif
