#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <iostream>
#include <string>

class Product{
private:
	//...
public:
	Product(){}
	~Product(){}
	void Operation1(std::string s){std::cout << s << std::endl;}
};

#endif
