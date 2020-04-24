#include "concretesubject.h"
#include "concreteobserver1.h"
#include "concreteobserver2.h"

int main()
{
	Subject *psubject = new ConcreteSubject();
	Observer *pobserver1 = new ConcreteObserver1(psubject);
	Observer *pobserver2 = new ConcreteObserver2(psubject);
	psubject->attach(pobserver1);
	psubject->attach(pobserver2);
	psubject->state = 1;
	psubject->Notify();
	delete psubject;
	delete pobserver1;
	delete pobserver2;
	return 0;
}
