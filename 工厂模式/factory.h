#ifndef _FACTORY_H
#define _FACTORY_H

#include "product.h"

class Factory{
private:
    //...
public:
    Factory(){}
    virtual ~Factory(){}
    virtual Product *CreateProduct() = 0;
};

#endif
