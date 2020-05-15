#include "adapter.h"

int main()
{
    Target *ptarget = new Adapter();
    ptarget->interface1();
    ptarget->interface2();
    return 0;
}