#pragma once
#include "Prototype.h"

class ConcretePrototype2 : public Prototype
{
public:
    virtual std::shared_ptr<Prototype> Clone() override;
    virtual void Print() override;
public:
    ConcretePrototype2(int info);
    ConcretePrototype2(const ConcretePrototype2& obj);
    virtual ~ConcretePrototype2() = default;
private:
    int _info;
};