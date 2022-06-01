#include <iostream>
#include <memory>
#include "Facade.h"

int main()
{
    std::cout << "manual call:" << std::endl;
    std::shared_ptr<ModuleA> module_a(new ModuleA());
    std::shared_ptr<ModuleB> module_b(new ModuleB());
    module_a->Function1();
    module_b->Function2();

    std::cout << std::endl;
    std::cout << "facade call:" << std::endl;
    Facade::Instance()->SimpleFunction();

    return 0;
}