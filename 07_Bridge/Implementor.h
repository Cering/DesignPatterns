#pragma once

class Implementor
{
public:
    virtual void OperationImp() = 0;
public:
    virtual ~Implementor() = default;
protected:
    Implementor() = default;
};