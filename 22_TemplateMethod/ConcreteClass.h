#pragma once
#include "AbstractClass.h"

class ConcreteClass : public AbstractClass
{
protected:
    virtual void PrimitiveOperation1() override;
    virtual void PrimitiveOperation2() override;
public:
    virtual ~ConcreteClass() = default;
};