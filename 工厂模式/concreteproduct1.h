#ifndef _CONCRETEPRODUCT1_H
#define _CONCRETEPRODUCT1_H

#include "product.h"

class ConcreteProduct1 : public Product{
private:
    //...
public:
    //...
    ConcreteProduct1(){std::cout << "this is concretproduct1!" << std::endl;}
    ~ConcreteProduct1(){}
};

#endif
