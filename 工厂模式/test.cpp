#include "iostream"
#include "concretefactory1.h"
#include "concretefactory2.h"

int main(void)
{
    Factory *pfactory = new ConcreteFactory1();
    Product *product = pfactory->CreateProduct();
    delete pfactory;
    delete product;
    pfactory = new ConcreteFactory2();
    product = pfactory->CreateProduct();
    delete pfactory;
    delete product;

    return 0;    
}
