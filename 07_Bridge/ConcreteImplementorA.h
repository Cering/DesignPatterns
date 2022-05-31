#pragma once
#include "Implementor.h"

class ConcreteImplementorA : public Implementor
{
public:
    virtual void OperationImp() override;
public:
    virtual ~ConcreteImplementorA() = default;
};