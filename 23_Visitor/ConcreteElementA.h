#pragma once
#include "Element.h"

class ConcreteElementA : public Element, public std::enable_shared_from_this<ConcreteElementA>
{
public:
    virtual void Accept(std::shared_ptr<Visitor> v) override;
    int OperationA() const;
public:
    ConcreteElementA(int i);
    virtual ~ConcreteElementA() = default;
private:
    int _var_int;
};