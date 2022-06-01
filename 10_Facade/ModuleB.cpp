#include <iostream>
#include "ModuleB.h"

void ModuleB::Function2()
{
    std::cout << "[" << this << "] ModuleB::Function2()" << std::endl;
}