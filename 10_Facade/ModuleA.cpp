#include <iostream>
#include "ModuleA.h"

void ModuleA::Function1()
{
    std::cout << "[" << this << "] ModuleA::Function1()" << std::endl;
}