#pragma once
#include "Product.h"

class ConcreteProduct2 : public Product
{
public:
    virtual void Print();
public:
    ConcreteProduct2(int info);
private:
    int _info;
};