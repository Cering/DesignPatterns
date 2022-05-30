#include <iostream>
#include "SubSingleton1.h"

SubSingleton1::SubSingleton1(const std::string& info) : _info(info)
{
}

void SubSingleton1::Print()
{
    Singleton::Print();
    std::cout << "[" << this << "] SubSingleton1: " << _info << std::endl;
}