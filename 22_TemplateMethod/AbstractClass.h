#pragma once

class AbstractClass
{
public:
    void TemplateMethod();
protected:
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;
public:
    virtual ~AbstractClass() = default;
protected:
    AbstractClass() = default;
};