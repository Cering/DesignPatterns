#pragma once
#include "Builder.h"

class ConcreteBuilder1 : public Builder
{
public:
    virtual void BuildResult() override;
    virtual void BuildPartA() override;
    virtual void BuildPartB() override;
    virtual void BuildPartC() override;
    virtual std::shared_ptr<Product> GetResult() override;
public:
    ConcreteBuilder1();
    virtual ~ConcreteBuilder1() = default;
private:
    std::shared_ptr<Product> _result;
};