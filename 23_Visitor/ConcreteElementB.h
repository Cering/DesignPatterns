#pragma once
#include "Element.h"

class ConcreteElementB : public Element, public std::enable_shared_from_this<ConcreteElementB>
{
public:
    virtual void Accept(std::shared_ptr<Visitor> v) override;
    char OperationB() const;
public:
    ConcreteElementB(char c);
    virtual ~ConcreteElementB() = default;
private:
    char _var_char;
};