#pragma once
#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{
public:
    void Operation(int extrinsicState);
public:
    UnsharedConcreteFlyweight(char intrinsicState);
    virtual ~UnsharedConcreteFlyweight() = default;
private:
    char _intrinsic_state;
};