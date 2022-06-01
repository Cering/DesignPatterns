#pragma once
#include "Component.h"

class ConcreteComponent : public Component
{
public:
    virtual void Operation() override;
public:
    virtual ~ConcreteComponent() = default;
};