#include <iostream>
#include "ClassAdapter.h"

void ClassAdapter::Request()
{
    std::cout << "[" << this << "] ClassAdapter Request()" << std::endl;
    SpecificRequest();
}