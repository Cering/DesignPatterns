#pragma once
#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
    virtual void AlgorithmInterface(int a, int b) const override;
public:
    virtual ~ConcreteStrategyB() = default;
};