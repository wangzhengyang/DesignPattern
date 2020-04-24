#ifndef _SUBJECT_H
#define _SUBJECT_H

#include "observer.h"

class Subject{
private:
	std::list<Observer*> list;
public:
	Subject(){}
	~Subject(){}
	void attach(Observer *pob);
	void dettach(Observer *pob);
	void Notify();
    
    int state;
};

#endif
