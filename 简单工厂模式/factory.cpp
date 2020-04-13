#include "factory.h"

Base *Factory::Create(int type)
{
	Base *pb = 0;
	switch(type){
		case 0:
			pb = new Concrete1();
			break;
		case 1:
			pb = new Concrete2();
			break;
		default:
			break;
	}
	return pb;
}