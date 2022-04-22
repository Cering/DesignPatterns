#pragma once
#include "Product.h"

class Builder
{
public:
    virtual void BuildResult() = 0;
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual void BuildPartC() = 0;
    virtual Product* GetResult() = 0;
};