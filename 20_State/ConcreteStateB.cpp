#include <iostream>
#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "Context.h"

ConcreteStateB* ConcreteStateB::_instance = nullptr;

ConcreteStateB* ConcreteStateB::Instance()
{
    if(!_instance)
        _instance = new ConcreteStateB();
    return _instance;
}

void ConcreteStateB::Handle(Context* ctx)
{
    if(ctx)
    {
        std::cout << "[" << this << "] ConcreteStateB::Handle() for context [" << ctx << "]" << std::endl;
        ChangeState(ctx, ConcreteStateA::Instance());
    }
}