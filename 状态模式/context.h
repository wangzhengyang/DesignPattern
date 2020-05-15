#ifndef CONTEXT_H
#define CONTEXT_H

class Context;

#include "state.h"

class Context{
private:
    State *current;
public:
    Context(State *s):current(s){}
    ~Context(){}

    void SetSate(State *s){
        this->current = s;
    }

    void Request(){current->Handle(this);}
};

#endif
