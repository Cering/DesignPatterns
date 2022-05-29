#pragma once
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA
{
public:
    ProductA2(int id);
    virtual void Print() override;
public:
    virtual ~ProductA2() = default;
private:
    int _id;
};