#include <iostream>
#include "Adaptee.h"

void Adaptee::SpecificRequest()
{
    std::cout << "[" << this << "] Adaptee::SpecificRequest()" << std::endl;
}