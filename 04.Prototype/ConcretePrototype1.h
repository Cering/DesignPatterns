#pragma once
#include <string>
#include "Prototype.h"

class ConcretePrototype1 : public Prototype
{
public:
    virtual Prototype* Clone();
    virtual void Print();
public:
    ConcretePrototype1(const std::string& info);
    ConcretePrototype1(const ConcretePrototype1& obj);
private:
    std::string _info;
};