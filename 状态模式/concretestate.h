#ifndef CONCRETESTATE_H
#define CONCRETESTATE_H

#include "state.h"
#include "Singleton.h"

class ConcreteState1:public State{
public:
    ConcreteState1(){}
    ~ConcreteState1(){}

    virtual void Handle(Context *p);
};

class ConcreteState2:public State{
public:
    ConcreteState2(){}
    ~ConcreteState2(){}

    virtual void Handle(Context *p);
};

class ConcreteState3:public State{
public:
    ConcreteState3(){}
    ~ConcreteState3(){}

    virtual void Handle(Context *p);
};

void ConcreteState1::Handle(Context *p)
{
    std::cout << "this is concretestate1" << std::endl;
    p->SetSate(Singleton<ConcreteState2>::GetInstance());
}

void ConcreteState2::Handle(Context *p)
{
    std::cout << "this is concretestate2" << std::endl;
    p->SetSate(Singleton<ConcreteState3>::GetInstance());
}

void ConcreteState3::Handle(Context *p)
{
    std::cout << "this is concretestate3" << std::endl;
    p->SetSate(Singleton<ConcreteState1>::GetInstance());
}

#endif
