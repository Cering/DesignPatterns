#pragma once
#include "ConcreteBuilder2.h"

ConcreteBuilder2::ConcreteBuilder2() : _result(nullptr)
{
}

void ConcreteBuilder2::BuildResult()
{
    _result = new Product();
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

Product* ConcreteBuilder2::GetResult()
{
    return _result;
}