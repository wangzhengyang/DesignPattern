#ifndef _FACADE_H
#define _FACADE_H

#include "system1.h"
#include "system2.h"

class Facade{
private:
	System1 *psys1;
	System2 *psys2;
public:
	Facade();
	~Facade();
	void Operation();
	
};

#endif
