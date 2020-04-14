#ifndef _USER_H
#define _USER_H

#include "concretestrategy1.h"
#include "concretestrategy2.h"

class User{
private:
	Strategy *pst;

public:
	User(int type);
	~User();

	void UseAlgorithm();
};

#endif
