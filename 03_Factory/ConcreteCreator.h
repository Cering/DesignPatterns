#pragma once
#include "Creator.h"

class ConcreteCreator : public Creator
{
    virtual Product* FactoryMethod(int type);
};