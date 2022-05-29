#include <iostream>
#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"

std::shared_ptr<AbstractProductA> ConcreteFactory1::CreateProductA()
{
    std::shared_ptr<AbstractProductA> obj(new ProductA1("A1"));
    std::cout << "[" << this << "] ConcreteFactory1::CreateProductA() A1 [" << obj.get() << "]" << std::endl;
    return obj;
}

std::shared_ptr<AbstractProductB> ConcreteFactory1::CreateProductB()
{
    std::shared_ptr<AbstractProductB> obj(new ProductB1("B1"));
    std::cout << "[" << this << "] ConcreteFactory1::CreateProductB() B1 [" << obj.get() << "]" << std::endl;
    return obj;
}