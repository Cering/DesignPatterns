#pragma once
#include "Strategy.h"

class ConcreteStrategyC : public Strategy
{
public:
    virtual void AlgorithmInterface(int a, int b) const override;
public:
    virtual ~ConcreteStrategyC() = default;
};