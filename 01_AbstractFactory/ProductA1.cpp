#include <iostream>
#include "ProductA1.h"

ProductA1::ProductA1(const std::string& id) : _id(id)
{
}

void ProductA1::Print()
{
    std::cout << "[" << this << "] ProductA1[string]: " << _id << std::endl;
}