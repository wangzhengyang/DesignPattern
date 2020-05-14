#include <iostream>
#include "concretefactory1.h"
#include "concretefactory2.h"

int main()
{
    factory *pfactory = new concretefactory1();
    ProductA *productA = pfactory->CreateProductA();
    productA->GetProductA();
    delete productA;
    ProductB *productB = pfactory->CreateProductB();
    productB->GetProductB();
    delete productB;
    delete pfactory;
    pfactory = new concretefactory2();
    productA = pfactory->CreateProductA();
    productA->GetProductA();
    delete productA;
    productB = pfactory->CreateProductB();
    productB->GetProductB();
    delete productB;
    return 0;
}