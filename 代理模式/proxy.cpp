#include "proxy.h"
#include "concrete.h"

void Proxy::Operation()
{
    if(pb == NULL)
        pb = new Concrete();
    pb->Operation();
}