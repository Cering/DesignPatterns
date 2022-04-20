#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"

int ConcreteFactory2::_next_id = 0;

AbstractProductA* ConcreteFactory2::CreateProductA()
{
    return new ProductA2(_next_id++);
}

AbstractProductB* ConcreteFactory2::CreateProductB()
{
    return new ProductB2(_next_id++);
}