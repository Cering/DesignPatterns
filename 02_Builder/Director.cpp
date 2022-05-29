#include <iostream>
#include "Director.h"

Director::Director() : _builder(nullptr)
{
}

void Director::SetBuilder(std::shared_ptr<Builder> b)
{
    _builder = b;
}

std::shared_ptr<Product> Director::Construct()
{
    if(_builder)
    {
        std::cout << "[" << this << "] Director::Construct() with builder [" << _builder.get() << "]" << std::endl;
        _builder->BuildResult();
        _builder->BuildPartA();
        _builder->BuildPartB();
        _builder->BuildPartC();
        return _builder->GetResult();
    }
    return nullptr;
}