#pragma once
#include <string>
#include "Prototype.h"

class ConcretePrototype1 : public Prototype
{
public:
    virtual std::shared_ptr<Prototype> Clone() override;
    virtual void Print() override;
public:
    ConcretePrototype1(const std::string& info);
    ConcretePrototype1(const ConcretePrototype1& obj);
    virtual ~ConcretePrototype1() = default;
private:
    std::string _info;
};