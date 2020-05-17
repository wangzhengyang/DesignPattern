#ifndef LEAF_H
#define LEAF_H

#include "component.h"

class Leaf:public Component{
public:
    Leaf(std::string n):Component(n){}
    ~Leaf(){}

    virtual void Add(Component *pc){}
    virtual void Remove(Component *pc){}
    virtual void Display(int depth){std::cout << std::string(depth, '-') << name << std::endl;}
};

#endif
