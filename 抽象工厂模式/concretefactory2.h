#ifndef CONCRETEFACTORY2_H
#define CONCRETEFACTORY2_H

#include "concreteproductA2.h"
#include "concreteproductB2.h"
#include "factory.h"

class concretefactory2:public factory{
public:
    concretefactory2(){}
    ~concretefactory2(){}

    virtual ProductA* CreateProductA(){
        return new ConcreteProductA2();
    }

    virtual ProductB* CreateProductB(){
        return new ConcreteProductB2();
    }
private:

};

#endif
