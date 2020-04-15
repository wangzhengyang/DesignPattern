#ifndef _DECORATOR_H
#define _DECORATOR_H

#include "base.h"

class Decorator : public Base{ //继承base 这样可以重写base的纯虚函数
private:
	Base *pb; //Base类引用，在虚函数中调用其他类的操作
public:
	Decorator(){}
	~Decorator(){}

	void SetBase(Base *p){pb = p;}
	
	virtual void Operation(){
		if(pb){
			pb->Operation();
		}
	}

};

#endif
