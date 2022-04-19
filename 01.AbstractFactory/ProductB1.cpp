#include <iostream>
#include "ProductB1.h"

ProductB1::ProductB1(const std::string& id) : _id(id)
{
}

void ProductB1::print()
{
    std::cout << "ProductB1[string]: " << _id << std::endl;
}