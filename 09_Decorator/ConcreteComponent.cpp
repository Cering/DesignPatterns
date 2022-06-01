#include <iostream>
#include "ConcreteComponent.h"

void ConcreteComponent::Operation()
{
    std::cout << "[" << this << "] ConcreteComponent::Operation()" << std::endl;
}