#include "user.h"

int main()
{
	User *puser = new User(0);
	puser->UseAlgorithm();
	delete puser;
	puser = new User(1);
	puser->UseAlgorithm();
	delete puser;
	return 0;
}
