#include <iostream>
#include "SubSingleton2.h"

SubSingleton2::SubSingleton2(int info) : _info(info)
{
}

void SubSingleton2::Print()
{
    std::cout << "SubSingleton2: " << _info << ", " << this << std::endl;
}