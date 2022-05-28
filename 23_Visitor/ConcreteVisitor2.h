#pragma once
#include "Visitor.h"

class ConcreteVisitor2 : public Visitor
{
public:
    virtual void VisitConcreteElementA(std::shared_ptr<ConcreteElementA> a) override;
    virtual void VisitConcreteElementB(std::shared_ptr<ConcreteElementB> b) override;
public:
    virtual ~ConcreteVisitor2() = default;
};