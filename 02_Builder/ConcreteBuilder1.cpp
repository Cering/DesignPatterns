#include <iostream>
#include "ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1() : _result(nullptr)
{
}

void ConcreteBuilder1::BuildResult()
{
    _result.reset(new Product());
    std::cout << "[" << this << "] ConcreteBuilder1::BuildResult() [" << _result.get() << "]" << std::endl;
}

void ConcreteBuilder1::BuildPartA()
{
    if(_result)
        _result->SetPartA("a");
}

void ConcreteBuilder1::BuildPartB()
{
    if(_result)
        _result->SetPartB("b");
}

void ConcreteBuilder1::BuildPartC()
{
}

std::shared_ptr<Product> ConcreteBuilder1::GetResult()
{
    return _result;
}