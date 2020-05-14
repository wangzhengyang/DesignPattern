#ifndef CONCRETEPRODUCTB2_H
#define CONCRETEPRODUCTB2_H

#include "productB.h"

class ConcreteProductB2:public ProductB{
public:
    ConcreteProductB2(){}
    ~ConcreteProductB2(){}

    virtual void GetProductB(){
        std::cout << "this is concreteproductB2" << std::endl;
    }
private:

};

#endif