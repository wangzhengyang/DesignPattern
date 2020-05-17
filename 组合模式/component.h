#ifndef COMPONENT_H
#define COMPONENT_H

#include <list>
#include <string>
#include <iostream>

class Component{
protected:
    std::string name;
public:
    Component(std::string n):name(n){}
    virtual ~Component(){}

    virtual void Add(Component *pc)= 0;
    virtual void Remove(Component *pc) = 0;
    virtual void Display(int depth) = 0;

};

#endif
