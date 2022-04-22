#include <sstream>
#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"

int ConcreteFactory1::_next_id = 0;

AbstractProductA* ConcreteFactory1::CreateProductA()
{
    std::ostringstream oss;
    oss << _next_id++;
    return new ProductA1(oss.str());
}

AbstractProductB* ConcreteFactory1::CreateProductB()
{
    std::ostringstream oss;
    oss << _next_id++;
    return new ProductB1(oss.str());
}