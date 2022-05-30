#pragma once
#include <string>
#include "Product.h"

class ConcreteProduct1 : public Product
{
public:
    virtual void Print() override;
public:
    ConcreteProduct1(const std::string& info);
    virtual ~ConcreteProduct1() = default;
private:
    std::string _info;
};