#pragma once
#include <string>
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{
public:
    ProductA1(const std::string& id);
    virtual void Print() override;
public:
    virtual ~ProductA1() = default;
private:
    std::string _id;
};