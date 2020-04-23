#ifndef _DIRECTOR_H
#define _DIRECTOR_H

#include "builder.h"

class Director{
private:
	//...
public:
	Director(){}
	~Director(){}
	void DirectorOperation(Builder *pbuilder);
};

#endif
