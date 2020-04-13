#ifndef _FACTORY_H
#define _FACTORY_H

#include "concrete1.h"
#include "concrete2.h"

class Factory{
public:
	static Base *Create(int type);
};

#endif
