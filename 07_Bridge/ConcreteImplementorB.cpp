#include <iostream>
#include "ConcreteImplementorB.h"

void ConcreteImplementorB::OperationImp()
{
    std::cout << "[" << this << "] ConcreteImplementorB::OperationImp()" << std::endl;
}