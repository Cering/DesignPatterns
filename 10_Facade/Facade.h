#pragma once
#include <memory>
#include "ModuleA.h"
#include "ModuleB.h"

class Facade
{
public:
    static std::shared_ptr<Facade> Instance();
    void SimpleFunction();
protected:
    Facade() = default;
private:
    static std::shared_ptr<Facade> _instance;
    static std::shared_ptr<ModuleA> _module_a;
    static std::shared_ptr<ModuleB> _module_b;
};