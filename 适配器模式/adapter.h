#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

class Adapter:public Target{
private:
    Adaptee *padaptee;
public:
    Adapter(){padaptee = new Adaptee();}
    ~Adapter(){delete padaptee;}

    virtual void interface1(){
        std::cout << "call adaptee's interface1!" << std::endl;
        padaptee->adapteeinterface1();
    }

    virtual void interface2(){
        std::cout << "call adaptee's interface2!" << std::endl;
        padaptee->adapteeinterface2();
    }
};

#endif
