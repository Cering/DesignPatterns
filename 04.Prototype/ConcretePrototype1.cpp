#include <iostream>
#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(const std::string& info) : _info(info)
{
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1& obj) : _info(obj._info)
{
}

Prototype* ConcretePrototype1::Clone()
{
    return new ConcretePrototype1(*this);
}

void ConcretePrototype1::Print()
{
    std::cout << "ConcretePrototype1[string]: " << _info << ", " << this << std::endl;
}