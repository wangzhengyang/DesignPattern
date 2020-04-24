#include "subject.h"

void Subject::attach(Observer * pob)
{
	list.push_back(pob);
}

void Subject::dettach(Observer * pob)
{
	list.remove(pob);
}

void Subject::Notify()
{
	std::cout << "object is ready to send msg" << std::endl;
	std::list<Observer*>::iterator p;
	for(p = list.begin(); p != list.end(); ++p)
		(*p)->Update();
}