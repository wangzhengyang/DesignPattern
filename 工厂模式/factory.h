#ifndef _FACTORY_H
#define _FACTORY_H

#include "product.h"

class Factory{
private:
    //...
public:
    virtual Product *CreateProduct() = 0;
};

#endif
