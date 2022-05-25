#include <iostream>
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"

ConcreteStateA* ConcreteStateA::_instance = nullptr;

ConcreteStateA* ConcreteStateA::Instance()
{
    if(!_instance)
        _instance = new ConcreteStateA();
    return _instance;
}

void ConcreteStateA::Handle(Context* ctx)
{
    if(ctx)
    {
        std::cout << "[" << this << "] ConcreteStateA::Handle() for context [" << ctx << "]" << std::endl;
        ChangeState(ctx, ConcreteStateB::Instance());
    }
}