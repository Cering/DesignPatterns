#pragma once
#include <memory>

class Visitor;

class Element
{
public:
    virtual void Accept(std::shared_ptr<Visitor> v) = 0;
public:
    virtual ~Element() = default;
protected:
    Element() = default;
};