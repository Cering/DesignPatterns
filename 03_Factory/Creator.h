#pragma once
#include "Product.h"

class Creator
{
public:
    virtual Product* FactoryMethod(int type) = 0;
};