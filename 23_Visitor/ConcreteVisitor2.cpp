#include <iostream>
#include <ctype.h>
#include "ConcreteVisitor2.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

void ConcreteVisitor2::VisitConcreteElementA(std::shared_ptr<ConcreteElementA> a)
{
    int val = a->OperationA();
    std::cout << "[" << this << "] ConcreteVisitor2::VisitConcreteElementA() " << val << " -> " << 10*val << std::endl;
}

void ConcreteVisitor2::VisitConcreteElementB(std::shared_ptr<ConcreteElementB> b)
{
    char val = b->OperationB();
    std::cout << "[" << this << "] ConcreteVisitor2::VisitConcreteElementB() " << val << " -> " << (char)toupper(val) << std::endl;
}