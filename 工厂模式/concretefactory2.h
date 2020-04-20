#ifndef _CONCRETEFACTORY2_H
#define _CONCRETEFACTORY2_H

#include "concreteproduct2.h"
#include "factory.h"

class ConcreteFactory2 : public Factory{
private:
    //...
public:
    ConcreteFactory2(){std::cout << "this is concretfactory2!" << std::endl;}
    ~ConcreteFactory2(){}
    virtual Product *CreateProduct(){
        return new ConcreteProduct2();
    }
};


#endif

