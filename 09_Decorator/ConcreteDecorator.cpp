#include <iostream>
#include "ConcreteDecorator.h"

ConcreteDecorator::ConcreteDecorator(Component* item) : Decorator(item)
{
}

void ConcreteDecorator::Operation()
{
    std::cout << "ConcreteDecorator::Operation()" << std::endl;
    AddedBehavior();
    _component->Operation();
}

void ConcreteDecorator::AddedBehavior()
{
    std::cout << "ConcreteDecorator::AddedBehavior()" << std::endl;
}