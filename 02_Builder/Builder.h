#pragma once
#include <memory>
#include "Product.h"

class Builder
{
public:
    virtual void BuildResult() = 0;
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual void BuildPartC() = 0;
    virtual std::shared_ptr<Product> GetResult() = 0;
public:
    virtual ~Builder() = default;
protected:
    Builder() = default;
};