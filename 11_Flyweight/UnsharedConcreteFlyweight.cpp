#include <iostream>
#include "UnsharedConcreteFlyweight.h"

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(char intrinsicState) : _intrinsic_state(intrinsicState)
{
}

void UnsharedConcreteFlyweight::Operation(int extrinsicState)
{
    std::cout << "[" << this << "] UnsharedConcreteFlyweight::Operation(): [" << _intrinsic_state << "]-[" << extrinsicState << "]" << std::endl;
}