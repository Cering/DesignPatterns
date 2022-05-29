#pragma once
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB
{
public:
    ProductB2(int id);
    virtual void Print() override;
public:
    virtual ~ProductB2() = default;
private:
    int _id;
};