#include <iostream>
#include "SubSingleton2.h"

SubSingleton2::SubSingleton2(int info) : _info(info)
{
}

void SubSingleton2::Print()
{
    Singleton::Print();
    std::cout << "[" << this << "] SubSingleton2: " << _info << std::endl;
}