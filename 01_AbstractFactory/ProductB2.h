#pragma once
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB
{
public:
    ProductB2(int id);
    virtual void print();
private:
    int _id;
};