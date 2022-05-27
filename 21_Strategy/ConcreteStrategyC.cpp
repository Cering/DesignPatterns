#include <iostream>
#include "ConcreteStrategyC.h"

void ConcreteStrategyC::AlgorithmInterface(int a, int b) const
{
    std::cout << "[" << this << "] ConcreteStrategyC::AlgorithmInterface() "
              << "100*" << a << " + " << "100*" << b << " = " << 100*a+100*b << std::endl;
}