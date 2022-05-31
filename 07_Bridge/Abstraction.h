#pragma once
#include <memory>

class Implementor;
class Abstraction
{
public:
    virtual void Operation() = 0;
public:
    virtual ~Abstraction() = default;
protected:
    Abstraction() = default;
protected:
    std::shared_ptr<Implementor> _imp;
};