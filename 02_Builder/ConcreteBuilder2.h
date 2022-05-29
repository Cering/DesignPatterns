#pragma once
#include "Builder.h"

class ConcreteBuilder2 : public Builder
{
public:
    virtual void BuildResult() override;
    virtual void BuildPartA() override;
    virtual void BuildPartB() override;
    virtual void BuildPartC() override;
    virtual std::shared_ptr<Product> GetResult() override;
public:
    ConcreteBuilder2();
    virtual ~ConcreteBuilder2() = default;
private:
    std::shared_ptr<Product> _result;
};