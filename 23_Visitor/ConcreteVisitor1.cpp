#include <iostream>
#include "ConcreteVisitor1.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

void ConcreteVisitor1::VisitConcreteElementA(std::shared_ptr<ConcreteElementA> a)
{
    int val = a->OperationA();
    std::cout << "[" << this << "] ConcreteVisitor1::VisitConcreteElementA() " << val << std::endl;
}

void ConcreteVisitor1::VisitConcreteElementB(std::shared_ptr<ConcreteElementB> b)
{
    char val = b->OperationB();
    std::cout << "[" << this << "] ConcreteVisitor1::VisitConcreteElementB() " << val << std::endl;
}