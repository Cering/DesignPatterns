#include <iostream>
#include "Decorator.h"

Decorator::Decorator(Component* item) : _component(item)
{
}

void Decorator::Operation()
{
    std::cout << "Default Decorator::Operation()" << std::endl;
    _component->Operation();
}