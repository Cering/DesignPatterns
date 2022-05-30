#pragma once
#include <memory>

class Prototype
{
public:
    virtual std::shared_ptr<Prototype> Clone() = 0;
    virtual void Print() = 0;
public:
    virtual ~Prototype() = default;
protected:
    Prototype() = default;
};