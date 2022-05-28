#pragma once
#include <memory>

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
    virtual void VisitConcreteElementA(std::shared_ptr<ConcreteElementA> a) = 0;
    virtual void VisitConcreteElementB(std::shared_ptr<ConcreteElementB> b) = 0;
public:
    virtual ~Visitor() = default;
protected:
    Visitor() = default;
};