#ifndef _PROXY_H
#define _PROXY_H

#include "base.h"

class Proxy : public Base{
private:
    //...
    Base *pb;
public:
    Proxy(){pb = NULL;}
    ~Proxy(){};
    virtual void Operation();
};

#endif