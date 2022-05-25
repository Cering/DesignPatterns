#include <iostream>
#include "Context.h"
#include "ConcreteStateA.h"

Context::Context() : _state(ConcreteStateA::Instance())
{

}

void Context::Request()
{
    if(_state)
        _state->Handle(this);
}

void Context::ChangeState(State* s)
{
    if(s)
    {
        std::cout << "[" << this << "] Context::ChangeState() [" << _state << "] -> [" << s << "]" << std::endl;
        _state = s;
    }
}