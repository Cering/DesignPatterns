#include <iostream>
#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(const std::string& info) : _info(info)
{
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1& obj) : _info(obj._info)
{
}

std::shared_ptr<Prototype> ConcretePrototype1::Clone()
{
    std::shared_ptr<Prototype> ret(new ConcretePrototype1(*this));
    std::cout << "[" << this << "] ConcretePrototype1::Clone() to [" << ret.get() << "]" << std::endl;
    return ret;
}

void ConcretePrototype1::Print()
{
    std::cout << "[" << this << "] ConcretePrototype1[string]: " << _info << std::endl;
}