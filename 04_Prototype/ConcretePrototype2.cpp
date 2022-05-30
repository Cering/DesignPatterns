#include <iostream>
#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(int info) : _info(info)
{
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2& obj) : _info(obj._info)
{
}

std::shared_ptr<Prototype> ConcretePrototype2::Clone()
{
    std::shared_ptr<Prototype> ret(new ConcretePrototype2(*this));
    std::cout << "[" << this << "] ConcretePrototype2::Clone() to [" << ret.get() << "]" << std::endl;
    return ret;
}

void ConcretePrototype2::Print()
{
    std::cout << "[" << this << "] ConcretePrototype2[int]: " << _info << std::endl;
}