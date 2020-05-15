#ifndef STATE_H
#define STATE_H

class State;

#include <iostream>
#include "context.h"

class State{
protected:
public:
    virtual ~State(){}
    virtual void Handle(Context *p) = 0;
};

#endif
