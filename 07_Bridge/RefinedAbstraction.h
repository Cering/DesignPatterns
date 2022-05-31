#pragma once
#include "Abstraction.h"

enum ImplementorType
{
    IMPLEMENTOR_TYPE_A = 1,
    IMPLEMENTOR_TYPE_B
};

class RefinedAbstraction : public Abstraction
{
public:
    virtual void Operation() override;
public:
    RefinedAbstraction(ImplementorType type=IMPLEMENTOR_TYPE_A);
    virtual ~RefinedAbstraction() = default;
};