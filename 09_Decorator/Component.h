#pragma once

class Component
{
public:
    virtual void Operation() = 0;
public:
    virtual ~Component() = default;
protected:
    Component() = default;
};