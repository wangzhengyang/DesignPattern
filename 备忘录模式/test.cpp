#include <iostream>
#include "originator.h"
#include "caretaker.h"
#include "memento.h"


int main()
{
    Originator *poriginator = new Originator();
    Caretaker *pcaretaker = new Caretaker();
    poriginator->SetState(10);
    std::cout << "current state is" << poriginator->GetState() << std::endl;
    pcaretaker->SetMemento(poriginator->CreateMemento());
    poriginator->SetState(20);
    std::cout << "current state is" << poriginator->GetState() << std::endl;
    poriginator->RestoreFromMemento(pcaretaker->GetMemento());
    std::cout << "restore" << std::endl;
    std::cout << "current state is" << poriginator->GetState() << std::endl;
    return 0;
}