#include <iostream>
#include "ConcreteElementB.h"
#include "Visitor.h"

ConcreteElementB::ConcreteElementB(char c) : _var_char(c)
{
}

void ConcreteElementB::Accept(std::shared_ptr<Visitor> v)
{
    if(v)
    {
        std::cout << "[" << this << "] ConcreteElementB::Accept() visitor [" << v.get() << "]" << std::endl;
        v->VisitConcreteElementB(shared_from_this());
    }
}

char ConcreteElementB::OperationB() const
{
    return _var_char;
}