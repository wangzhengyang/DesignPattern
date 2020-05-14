#ifndef FACTORY_H
#define FACTORY_H

#include "productA.h"
#include "productB.h"

class factory{
public:
    factory(){}
    virtual ~factory(){}

    virtual ProductA* CreateProductA() = 0;
    virtual ProductB* CreateProductB() = 0;
private:

};

#endif
