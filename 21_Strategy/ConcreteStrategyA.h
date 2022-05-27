#pragma once
#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
    virtual void AlgorithmInterface(int a, int b) const override;
public:
    virtual ~ConcreteStrategyA() = default;
};