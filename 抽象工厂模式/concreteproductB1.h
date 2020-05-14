#ifndef CONCRETEPRODUCTB1_H
#define CONCRETEPRODUCTB1_H

#include "productB.h"

class ConcreteProductB1:public ProductB{
public:
    ConcreteProductB1(){}
    ~ConcreteProductB1(){}

    virtual void GetProductB(){
        std::cout << "this is concreteproductB1" << std::endl;
    }
private:

};

#endif