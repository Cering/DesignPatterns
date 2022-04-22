#pragma once
#include <string>
#include "Product.h"

class ConcreteProduct1 : public Product
{
public:
    virtual void Print();
public:
    ConcreteProduct1(const std::string& info);
private:
    std::string _info;
};