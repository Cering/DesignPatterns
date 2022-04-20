#pragma once
#include "Builder.h"

class ConcreteBuilder2 : public Builder
{
public:
    virtual void BuildResult();
    virtual void BuildPartA();
    virtual void BuildPartB();
    virtual void BuildPartC();
    virtual Product* GetResult();
public:
    ConcreteBuilder2();
private:
    Product* _result;
};