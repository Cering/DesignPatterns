#include <iostream>
#include <memory>
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

int main()
{
    std::cout << "use component:" << std::endl;
    std::shared_ptr<Component> component(new ConcreteComponent());
    component->Operation();

    std::cout << std::endl;
    std::cout << "use default decorator:" << std::endl;
    std::shared_ptr<Component> decorator1(new Decorator(component));
    decorator1->Operation();


    std::cout << std::endl;
    std::cout << "use concrete decorator:" << std::endl;
    std::shared_ptr<Component> decorator2(new ConcreteDecorator(component));
    decorator2->Operation();

    return 0;
}