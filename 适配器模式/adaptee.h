#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>

class Adaptee{
public:
    Adaptee(){}
    ~Adaptee(){}

    void adapteeinterface1(){std::cout << "this is adapteeinterface1!" << std::endl;}
    void adapteeinterface2(){std::cout << "this is adapteeinterface2!" << std::endl;}
};

#endif
