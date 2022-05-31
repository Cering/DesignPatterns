#include <iostream>
#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

RefinedAbstraction::RefinedAbstraction(ImplementorType type)
{
    switch(type)
    {
        default:
        case IMPLEMENTOR_TYPE_A:
            _imp.reset(new ConcreteImplementorA());
            break;
        case IMPLEMENTOR_TYPE_B:
            _imp.reset(new ConcreteImplementorB());
            break;
    }
    std::cout << "[" << this << "] RefinedAbstraction() use implementor type " << type << std::endl;
}

void RefinedAbstraction::Operation()
{
    if(_imp)
    {
        std::cout << "[" << this << "] RefinedAbstraction::Operation() imp [" << _imp.get() << "]" << std::endl;
        _imp->OperationImp();
    }
}