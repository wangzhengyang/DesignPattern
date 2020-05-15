#include <iostream>
#include "singleton.h"
#include "templatesingleton.h"
#include "object.h"

int main(int argc, char const *argv[])
{
    Singleton *pinstance1 = Singleton::GetInstance();
    std::cout << pinstance1 << std::endl;
    Singleton *pinstance2 = Singleton::GetInstance();
    std::cout << pinstance2 << std::endl;

    object *pobject1 = TemplateSingleton<object>::GetInstance();
    std::cout << pobject1 << std::endl;
    object *pobject2 = TemplateSingleton<object>::GetInstance();
    std::cout << pobject2 << std::endl;
    return 0;
}
