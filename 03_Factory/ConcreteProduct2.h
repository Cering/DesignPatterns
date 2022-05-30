#pragma once
#include "Product.h"

class ConcreteProduct2 : public Product
{
public:
    virtual void Print() override;
public:
    ConcreteProduct2(int info);
    virtual ~ConcreteProduct2() = default;
private:
    int _info;
};