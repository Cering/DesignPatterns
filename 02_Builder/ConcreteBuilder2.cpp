#include <iostream>
#include "ConcreteBuilder2.h"

ConcreteBuilder2::ConcreteBuilder2() : _result(nullptr)
{
}

void ConcreteBuilder2::BuildResult()
{
    _result.reset(new Product());
    std::cout << "[" << this << "] ConcreteBuilder2::BuildResult() [" << _result.get() << "]" << std::endl;
}

void ConcreteBuilder2::BuildPartA()
{
}

void ConcreteBuilder2::BuildPartB()
{
}

void ConcreteBuilder2::BuildPartC()
{
    if(_result)
        _result->SetPartC("c");
}

std::shared_ptr<Product> ConcreteBuilder2::GetResult()
{
    return _result;
}