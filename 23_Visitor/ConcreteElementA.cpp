#include <iostream>
#include "ConcreteElementA.h"
#include "Visitor.h"

ConcreteElementA::ConcreteElementA(int i) : _var_int(i)
{
}

void ConcreteElementA::Accept(std::shared_ptr<Visitor> v)
{
    if(v)
    {
        std::cout << "[" << this << "] ConcreteElementA::Accept() visitor [" << v.get() << "]" << std::endl;
        v->VisitConcreteElementA(shared_from_this());
    }
}

int ConcreteElementA::OperationA() const
{
    return _var_int;
}