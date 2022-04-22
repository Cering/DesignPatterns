#pragma once
#include "Prototype.h"

class ConcretePrototype2 : public Prototype
{
public:
    virtual Prototype* Clone();
    virtual void Print();
public:
    ConcretePrototype2(int info);
    ConcretePrototype2(const ConcretePrototype2& obj);
private:
    int _info;
};