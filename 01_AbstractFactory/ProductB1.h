#pragma once
#include <string>
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB
{
public:
    ProductB1(const std::string& id);
    virtual void Print() override;
public:
    virtual ~ProductB1() = default;
private:
    std::string _id;
};