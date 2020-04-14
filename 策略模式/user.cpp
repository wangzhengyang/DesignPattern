#include "user.h"

//user���ж�strategy��������˷�װ���û�����֪��strategy�������������
//���û�ֻͨ������������ʵ����strategy�������
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