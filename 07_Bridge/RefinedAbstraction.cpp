#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

RefinedAbstraction::RefinedAbstraction(int type)
{
    switch(type)
    {
        default:
        case 1:
            _imp = new ConcreteImplementorA();
            break;
        case 2:
            _imp = new ConcreteImplementorB();
            break;
    }
}

RefinedAbstraction::~RefinedAbstraction()
{
    if(_imp)
        delete _imp;
}

void RefinedAbstraction::Operation()
{
    if(_imp)
        _imp->OperationImp();
}