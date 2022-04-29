#pragma once

class Implementor;
class Abstraction
{
public:
    virtual void Operation() = 0;
protected:
    Implementor* _imp;
};