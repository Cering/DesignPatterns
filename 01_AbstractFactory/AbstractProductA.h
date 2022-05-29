#pragma once

class AbstractProductA
{
public:
    virtual void Print() = 0;
public:
    virtual ~AbstractProductA() = default;
protected:
    AbstractProductA() = default;
};