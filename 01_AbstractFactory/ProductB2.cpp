#include <iostream>
#include "ProductB2.h"

ProductB2::ProductB2(int id) : _id(id)
{
}

void ProductB2::print()
{
    std::cout << "ProductB2[int]: " << _id << std::endl;
}