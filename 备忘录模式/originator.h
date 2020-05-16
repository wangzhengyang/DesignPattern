#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "memento.h"

class Originator{
private:
    int state;
public:
    Originator(){}
    ~Originator(){}

    Memento* CreateMemento(){return new Memento(state);}
    void RestoreFromMemento(Memento *pmem){state = pmem->GetData();}

    void SetState(int s){state = s;}
    int GetState(){return state;}

};

#endif
