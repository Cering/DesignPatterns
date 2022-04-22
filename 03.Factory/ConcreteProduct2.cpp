#include <iostream>
#include "ConcreteProduct2.h"

ConcreteProduct2::ConcreteProduct2(int info) : _info(info)
{
}

void ConcreteProduct2::Print()
{
    std::cout << "ConcreteProduct2[int]: " << _info << std::endl;
}