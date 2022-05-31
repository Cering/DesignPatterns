#include <iostream>
#include "ConcreteImplementorA.h"

void ConcreteImplementorA::OperationImp()
{
    std::cout << "[" << this << "] ConcreteImplementorA::OperationImp()" << std::endl;
}