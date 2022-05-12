#include <iostream>
#include "Facade.h"

std::shared_ptr<Facade> Facade::_instance(nullptr);
std::shared_ptr<ModuleA> Facade::_module_a(nullptr);
std::shared_ptr<ModuleB> Facade::_module_b(nullptr);

std::shared_ptr<Facade> Facade::Instance()
{
    if(!_instance)
    {
        _instance.reset(new Facade());
        _module_a.reset(new ModuleA());
        _module_b.reset(new ModuleB());
    }
    return _instance;
}

void Facade::SimpleFunction()
{
    std::cout << "Facade::SimpleFunction()" << std::endl;
    _module_a->Function1();
    _module_b->Function2();
}