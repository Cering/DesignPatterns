#pragma once
#include "AbstractFactory.h"

class ConcreteFactory2 : public AbstractFactory
{
public:
    virtual std::shared_ptr<AbstractProductA> CreateProductA() override;
    virtual std::shared_ptr<AbstractProductB> CreateProductB() override;
public:
    virtual ~ConcreteFactory2() = default;
};