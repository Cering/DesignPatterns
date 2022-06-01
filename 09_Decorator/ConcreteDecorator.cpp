#include <iostream>
#include "ConcreteDecorator.h"

ConcreteDecorator::ConcreteDecorator(std::shared_ptr<Component> item) : Decorator(item)
{
}

void ConcreteDecorator::Operation()
{
    std::cout << "[" << this << "] ConcreteDecorator::Operation()" << std::endl;
    AddedBehavior();
    _component->Operation();
}

void ConcreteDecorator::AddedBehavior()
{
    std::cout << "[" << this << "] ConcreteDecorator::AddedBehavior()" << std::endl;
}