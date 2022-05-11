#include <iostream>
#include <memory>
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

int main()
{
    std::shared_ptr<Component> component(new ConcreteComponent());
    std::shared_ptr<Component> decorator1(new Decorator(component.get()));
    std::shared_ptr<Component> decorator2(new ConcreteDecorator(component.get()));

    component->Operation();
    std::cout << std::endl;

    decorator1->Operation();
    std::cout << std::endl;

    decorator2->Operation();

    return 0;
}