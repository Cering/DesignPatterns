#include <iostream>
#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"

std::shared_ptr<AbstractProductA> ConcreteFactory2::CreateProductA()
{
    std::shared_ptr<AbstractProductA> obj(new ProductA2(11));
    std::cout << "[" << this << "] ConcreteFactory2::CreateProductA() A2 [" << obj.get() << "]" << std::endl;
    return obj;
}

std::shared_ptr<AbstractProductB> ConcreteFactory2::CreateProductB()
{
    std::shared_ptr<AbstractProductB> obj(new ProductB2(22));
    std::cout << "[" << this << "] ConcreteFactory2::CreateProductB() B2 [" << obj.get() << "]" << std::endl;
    return obj;
}