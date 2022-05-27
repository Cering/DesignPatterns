#include <iostream>
#include "Context.h"

Context::Context(std::shared_ptr<Strategy> s) : _a(1), _b(2)
{
    SetStrategy(s);
}

void Context::SetStrategy(std::shared_ptr<Strategy> s)
{
    std::cout << "[" << this << "] Context::SetStrategy() to [" << s.get() << "]" << std::endl;
    _strategy = s;
}

void Context::ContextInterface() const
{
    if(_strategy)
    {
        std::cout << "[" << this << "] Context::ContextInterface() call strategy [" << _strategy.get() << "]" << std::endl;
        _strategy->AlgorithmInterface(_a, _b);
    }
}