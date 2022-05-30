#pragma once
#include "Creator.h"

class ConcreteCreator : public Creator
{
public:
    virtual std::shared_ptr<Product> FactoryMethod(ProductType type) override;
public:
    virtual ~ConcreteCreator() = default;
};