#include <iostream>
#include "ConcreteStrategyB.h"

void ConcreteStrategyB::AlgorithmInterface(int a, int b) const
{
    std::cout << "[" << this << "] ConcreteStrategyB::AlgorithmInterface() "
              << "10*" << a << " + " << "10*" << b << " = " << 10*a+10*b << std::endl;
}