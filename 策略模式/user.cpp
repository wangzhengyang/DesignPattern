#include "user.h"

//user类中对strategy父类进行了封装，用户并不知道strategy父类的声明过程
//对用户只通过具体类型来实例化strategy子类对象
User::User(int type)
{
	switch(type){
		case 0:
			pst = new ConcreteStrategy1();
			break;
		case 1:
			pst = new ConcreteStrategy2();
			break;
		default:
			break;
	}
}

User::~User()
{
	if(pst)
		delete pst;
}

void User::UseAlgorithm()
{
	std::cout << "start use algorithm!" << std::endl;
	pst->Algorithm();
	std::cout << "algorithm has finished!" << std::endl;
	return;
}