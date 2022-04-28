#include <iostream>
#include "ClassAdapter.h"

void ClassAdapter::Request()
{
    std::cout << "ClassAdapter call:" << std::endl;
    SpecificRequest();
}