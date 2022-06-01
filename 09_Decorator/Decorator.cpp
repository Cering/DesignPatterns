#include <iostream>
#include "Decorator.h"

Decorator::Decorator(std::shared_ptr<Component> item) : _component(item)
{
}

void Decorator::Operation()
{
    std::cout << "[" << this << "] Default Decorator::Operation()" << std::endl;
    _component->Operation();
}