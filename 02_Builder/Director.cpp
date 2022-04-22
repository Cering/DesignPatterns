#include "Director.h"

Director::Director() : _builder(nullptr)
{
}

void Director::SetBuilder(Builder* builder)
{
    _builder = builder;
}

Product* Director::Construct()
{
    if(_builder)
    {
        _builder->BuildResult();
        _builder->BuildPartA();
        _builder->BuildPartB();
        _builder->BuildPartC();
        return _builder->GetResult();
    }
    return nullptr;
}