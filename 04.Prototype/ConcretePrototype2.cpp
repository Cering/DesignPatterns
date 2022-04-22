#include <iostream>
#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(int info) : _info(info)
{
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2& obj) : _info(obj._info)
{
}

Prototype* ConcretePrototype2::Clone()
{
    return new ConcretePrototype2(*this);
}

void ConcretePrototype2::Print()
{
    std::cout << "ConcretePrototype2[int]: " << _info << ", " << this << std::endl;
}