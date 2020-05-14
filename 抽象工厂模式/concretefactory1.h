#ifndef CONCRETEFACTORY1_H
#define CONCRETEFACTORY1_H

#include "concreteproductA1.h"
#include "concreteproductB1.h"
#include "factory.h"

class concretefactory1:public factory{
public:
    concretefactory1(){}
    ~concretefactory1(){}

    virtual ProductA* CreateProductA(){
        return new ConcreteProductA1();
    }

    virtual ProductB* CreateProductB(){
        return new ConcreteProductB1();
    }
private:

};

#endif
