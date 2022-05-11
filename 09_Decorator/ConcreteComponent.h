#pragma once
#include "Component.h"

class ConcreteComponent : public Component
{
public:
    virtual void Operation();
public:
    virtual ~ConcreteComponent() = default;
};