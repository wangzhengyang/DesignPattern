#ifndef CONCRETEPRODUCTA1_H
#define CONCRETEPRODUCTA1_H

#include "productA.h"

class ConcreteProductA1:public ProductA{
public:
    ConcreteProductA1(){}
    ~ConcreteProductA1(){}

    virtual void GetProductA(){
        std::cout << "this is concreteproductA1" << std::endl;
    }
private:

};

#endif
