#include <iostream>
#include "ProductA2.h"

ProductA2::ProductA2(int id) : _id(id)
{
}

void ProductA2::print()
{
    std::cout << "ProductA2[int]: " << _id << std::endl;
}