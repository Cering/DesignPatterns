#pragma once
#include "Decorator.h"

class ConcreteDecorator : public Decorator
{
public:
    virtual void Operation() override;
public:
    ConcreteDecorator(std::shared_ptr<Component> item);
    virtual ~ConcreteDecorator() = default;
private:
    void AddedBehavior();
};