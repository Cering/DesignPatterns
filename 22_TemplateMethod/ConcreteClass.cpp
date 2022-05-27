#include <iostream>
#include "ConcreteClass.h"

void ConcreteClass::PrimitiveOperation1()
{
    std::cout << "[" << this << "] ConcreteClass::PrimitiveOperation1()" << std::endl;
}

void ConcreteClass::PrimitiveOperation2()
{
    std::cout << "[" << this << "] ConcreteClass::PrimitiveOperation2()" << std::endl;
}