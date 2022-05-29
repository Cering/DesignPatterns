#include <iostream>
#include "ProductB2.h"

ProductB2::ProductB2(int id) : _id(id)
{
}

void ProductB2::Print()
{
    std::cout << "[" << this << "] ProductB2[int]: " << _id << std::endl;
}