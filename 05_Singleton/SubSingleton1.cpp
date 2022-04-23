#include <iostream>
#include "SubSingleton1.h"

SubSingleton1::SubSingleton1(const std::string& info) : _info(info)
{
}

void SubSingleton1::Print()
{
    std::cout << "SubSingleton1: " << _info << ", " << this << std::endl;
}