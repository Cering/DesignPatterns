#pragma once
#include "Abstraction.h"

class RefinedAbstraction : public Abstraction
{
public:
    virtual void Operation();
public:
    RefinedAbstraction(int type=0);
    ~RefinedAbstraction();
};