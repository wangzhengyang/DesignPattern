#ifndef _CONCRETEFACTORY1_H
#define _CONCRETEFACTORY1_H

#include "concreteproduct1.h"
#include "factory.h"

class ConcreteFactory1 : public Factory{
private:
    //...
public:
    ConcreteFactory1(){std::cout << "this is concretfactory1!" << std::endl;}
    ~ConcreteFactory1(){}
    virtual Product *CreateProduct(){
        return new ConcreteProduct1();
    }
};

#endif
