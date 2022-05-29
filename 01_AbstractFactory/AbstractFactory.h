#pragma once
#include <memory>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
    virtual std::shared_ptr<AbstractProductA> CreateProductA() = 0;
    virtual std::shared_ptr<AbstractProductB> CreateProductB() = 0;
public:
    virtual ~AbstractFactory() = default;
protected:
    AbstractFactory() = default;
};