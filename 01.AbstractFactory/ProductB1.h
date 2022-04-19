#pragma once
#include <string>
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB
{
public:
    ProductB1(const std::string& id);
    virtual void print();
private:
    std::string _id;
};