#pragma once
#include "AbstractFactory.h"

class ConcreteFactory1 : public AbstractFactory
{
public:
    virtual AbstractProductA* CreateProductA();
    virtual AbstractProductB* CreateProductB();
private:
    static int _next_id;
};