#pragma once
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;
};