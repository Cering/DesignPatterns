#include <iostream>
#include "ConcreteProduct1.h"

ConcreteProduct1::ConcreteProduct1(const std::string& info) : _info(info)
{
}

void ConcreteProduct1::Print()
{
    std::cout << "ConcreteProduct1[string]: " << _info << std::endl;
}