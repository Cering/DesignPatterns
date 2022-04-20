#pragma once
#include "ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1() : _result(nullptr)
{
}

void ConcreteBuilder1::BuildResult()
{
    _result = new Product();
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

Product* ConcreteBuilder1::GetResult()
{
    return _result;
}