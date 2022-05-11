#pragma once
#include "Component.h"

class Decorator : public Component
{
public:
    virtual void Operation();
public:
    Decorator(Component* item);
    virtual ~Decorator() = default;
protected:
    Component* _component;
};