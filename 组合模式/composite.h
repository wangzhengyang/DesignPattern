#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"

class Composite:public Component{
private:
    std::list<Component*> clist;
public:
    Composite(std::string n):Component(n){}
    ~Composite(){}

    virtual void Add(Component *pc){clist.push_back(pc);}
    virtual void Remove(Component *pc){clist.remove(pc);}
    virtual void Display(int depth){
        std::cout << std::string(depth, '-') << name << std::endl;
        for(std::list<Component*>::const_iterator it= clist.begin(); it != clist.end(); ++it){
            (*it)->Display(depth + 2);
        }
    }

};

#endif
