#pragma once
#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight
{
public:
    void Operation(int extrinsicState) override;
public:
    ConcreteFlyweight(char intrinsicState);
    virtual ~ConcreteFlyweight() = default;
private:
    char _intrinsic_state;
};