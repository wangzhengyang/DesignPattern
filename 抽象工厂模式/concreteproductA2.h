#ifndef CONCRETEPRODUCTA2_H
#define CONCRETEPRODUCTA2_H

#include "productA.h"

class ConcreteProductA2:public ProductA{
public:
    ConcreteProductA2(){}
    ~ConcreteProductA2(){}

    virtual void GetProductA(){
        std::cout << "this is concreteproductA2" << std::endl;
    }
private:

};

#endif