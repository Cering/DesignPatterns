#pragma once
#include <string>
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{
public:
    ProductA1(const std::string& id);
    virtual void print();
private:
    std::string _id;
};