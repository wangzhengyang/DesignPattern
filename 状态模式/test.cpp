#include "context.h"
#include "concretestate.h"

int main(int argc, char const *argv[])
{
    Context *pcontext = new Context(Singleton<ConcreteState1>::GetInstance());
    pcontext->Request();
    pcontext->Request();
    pcontext->Request();
    return 0;
}