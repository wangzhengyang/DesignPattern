#ifndef CARETAKER_H
#define CARETAKER_H

#include "memento.h"

class Caretaker{
private:
    Memento *pmemento;
public:
    Caretaker(){}
    ~Caretaker(){}

    void SetMemento(Memento *pmem){pmemento = pmem;}
    Memento *GetMemento()const{return pmemento;}

};

#endif
