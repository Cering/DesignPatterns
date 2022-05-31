#pragma once
#include "Implementor.h"

class ConcreteImplementorB : public Implementor
{
public:
    virtual void OperationImp() override;
public:
    virtual ~ConcreteImplementorB() = default;
};