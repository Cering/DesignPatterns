#pragma once
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA
{
public:
    ProductA2(int id);
    virtual void print();
private:
    int _id;
};