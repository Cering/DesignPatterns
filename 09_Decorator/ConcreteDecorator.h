#pragma once
#include "Decorator.h"

class ConcreteDecorator : public Decorator
{
public:
    virtual void Operation();
public:
    ConcreteDecorator(Component* item);
    virtual ~ConcreteDecorator() = default;
private:
    void AddedBehavior();
};