#ifndef _DECORATOR_H
#define _DECORATOR_H

#include "base.h"

class Decorator : public Base{ //�̳�base ����������дbase�Ĵ��麯��
private:
	Base *pb; //Base�����ã����麯���е���������Ĳ���
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
