#pragma once

class AbstractProductB
{
public:
    virtual void Print() = 0;
public:
    virtual ~AbstractProductB() = default;
protected:
    AbstractProductB() = default;
};