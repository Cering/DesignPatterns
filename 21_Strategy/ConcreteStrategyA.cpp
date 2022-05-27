#include <iostream>
#include "ConcreteStrategyA.h"

void ConcreteStrategyA::AlgorithmInterface(int a, int b) const
{
    std::cout << "[" << this << "] ConcreteStrategyA::AlgorithmInterface() "
              << a << " + " << b << " = " << a+b << std::endl;
}