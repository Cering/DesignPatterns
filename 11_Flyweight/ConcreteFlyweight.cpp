#include <iostream>
#include "ConcreteFlyweight.h"

ConcreteFlyweight::ConcreteFlyweight(char intrinsicState) : _intrinsic_state(intrinsicState)
{
}

void ConcreteFlyweight::Operation(int extrinsicState)
{
    std::cout << "[" << this << "]ConcreteFlyweight::Operation(): " << _intrinsic_state << " + " << extrinsicState << std::endl;
}